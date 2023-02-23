#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define STDIN		0
#define STDOUT		1
#define STDERR		2

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void ft_fatal_error(void)
{
	write(STDERR, "error: fatal\n", ft_strlen("error: fatal\n"));
	exit(EXIT_FAILURE);
}

void ft_error_execve(char *str)
{
	write(STDERR, "error: cannot execute ", ft_strlen("error: cannot execute "));
	write(STDERR, str, ft_strlen(str));
	write(STDERR, "\n", 1);
	exit(EXIT_FAILURE);
}

int ft_error_args_cd()
{
	write(STDERR, "error: cd: bad arguments\n", ft_strlen("error: cd: bad arguments\n"));
	return (EXIT_FAILURE);
}

int ft_error_failed_cd(char *str)
{
	write(STDERR, "error: cd: cannot change directory to ", ft_strlen("error: cd: cannot change directory to "));
	write(STDERR, str, ft_strlen(str));
	write(STDERR, "\n", 1);
	return (EXIT_FAILURE);
}

void	ft_iter_argv(char **argv, int *i)
{
	while (argv && argv[*i] && strcmp(argv[*i], "|") && strcmp(argv[*i], ";"))
		*i += 1;
	if (argv && argv[*i] && (!strcmp(argv[*i], "|") || !strcmp(argv[*i], ";")))
		*i += 1;
}

char	ft_get_type(char **argv, int i)
{
	while (argv && argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
		i++;
	if (argv[i] && !strcmp(argv[i], "|"))
		return ('|');
	if (argv[i] && !strcmp(argv[i], ";"))
		return (';');
	return ('E');
}

char	ft_prev_type(char **argv, int i)
{
	if (i > 1)
	{
		if (argv[i - 1] && !strcmp(argv[i - 1], "|"))
			return ('|');
		if (argv[i - 1] && !strcmp(argv[i - 1], ";"))
			return (';');
	}
	return ('E');
}

int	ft_stack_fd(int *fds, int *old_fd)
{
	*old_fd = fds[STDIN];
	return (1);
}

void	ft_null_at_break(char **argv, int i)
{
	while (argv && argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
		i++;
	if (argv[i] && (!strcmp(argv[i], "|") || !strcmp(argv[i], ";")))
		argv[i] = NULL;
}

void exec_cmd(char **argv, int *i, char **env, int *old_fd)
{
	pid_t pid;
	int	fds[2];
	int pipe_open;

	pipe_open = 0;
	if (ft_get_type(argv, *i) == '|' || (*i > 1 && ft_prev_type(argv, *i) == '|'))
	{
		pipe_open = 1;
		if (pipe(fds))
			ft_fatal_error();
	}
	pid = fork();
	if (pid < 0)
		ft_fatal_error();
	else if (pid == 0) //child
	{
		if (ft_get_type(argv, *i) == '|' && dup2(fds[STDOUT], STDOUT) < 0)
			ft_fatal_error();
		if (*i > 1 && ft_prev_type(argv, *i) == '|' && dup2(*old_fd, STDIN) < 0)
			ft_fatal_error();
		ft_stack_fd(fds, old_fd);
		ft_null_at_break(argv, *i);
		if ((execve(argv[*i], argv + (*i), env)) < 0)
			ft_error_execve(argv[*i]);
		exit(EXIT_SUCCESS);
	}
	else //parent
	{
		waitpid(pid, NULL, 0);
		if (pipe_open)
		{
			close(fds[STDOUT]);
			if (ft_get_type(argv, *i) == 'E' || ft_get_type(argv, *i) == ';')
				close(fds[STDIN]);
		}
		if (*i > 1 && ft_prev_type(argv, *i) == '|')
			close(*old_fd);
	}
}

int	ft_get_size_cmds(char **argv, int i)
{
	int	n;

	n = i;
	while (argv && argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
		i++;
	return (i - n);
}

void	ft_cd(char **argv, int *i)
{
	int	size;

	size = ft_get_size_cmds(argv, *i);
	if (size != 2)
	{
		ft_error_args_cd();
	}
	else if (chdir(argv[(*i) + 1]))
	{
		ft_error_failed_cd(argv[(*i) + 1]);
	}
}

void exec_cmds(char **argv, int *i, char **env)
{
	int	old_fd;

	old_fd = 0;
	while (argv[*i])
	{
		if (argv[*i] && !strcmp("cd", argv[*i]))
			ft_cd(argv, i);
		else
			exec_cmd(argv, i, env, &old_fd);
		ft_iter_argv(argv, i);
	}
}

int main(int ac, char **argv, char **env)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (argv[i])
			exec_cmds(argv, &i, env);
	}
	return (0);
}
