/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zharzi <zharzi@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:49:39 by zharzi            #+#    #+#             */
/*   Updated: 2022/06/26 18:02:33 by zharzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	if (i % 2 == 1)
		i++;
	return (i);
}

void	ft_putnbr_b(unsigned long int n, char *b, int zone)
{
	if (zone)
	{
		ft_putnbr_b(n / 16, "0123456789abcdef", --zone);
		write(1, &b[n % 16], 1);
		if (zone == 15)
			write(1, ": ", 2);
	}
}

void	ft_print_hex(char *buf, unsigned int len)
{
	unsigned int	i;
	int				n;

	i = -1;
	while (++i < len)
	{
		n = buf[i];
		ft_putnbr_b(n, "0123456789abcdef", 2);
		n = buf[++i];
		ft_putnbr_b(n, "0123456789abcdef", 2);
		write(1, " ", 1);
	}
	while (i++ < 16)
		write(1, " ", 1);
}

void	ft_print_char(char *buf, unsigned int len)
{
	unsigned int	i;

	i = -1;
	while (++i < len)
	{
		if (buf[i] >= 32)
		{
			write(1, &buf[i], 1);
			if (buf[i] == ' ')
			{
				while (buf[i + 1] && buf[i + 1] == ' ')
					i++;
			}
		}
		else
			write(1, ".", 1);
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	lap;
	unsigned int	n;
	char			buf[17];
	unsigned int	i;

	n = size / 16;
	lap = -1;
	while (++lap <= n)
	{
		ft_putnbr_b((unsigned long int)addr, "0123456789abcdef", 16);
		i = -1;
		while (++i < size && i < 16)
			buf[i] = ((char *)addr)[i];
		buf[i] = '\0';
		ft_print_hex(buf, ft_strlen(buf));
		ft_print_char(buf, ft_strlen(buf));
		if (size >= 16)
			addr += 16;
		size -= 16;
	}
	addr -= (--lap * 16);
	return (addr);
}

/*
int	main(void)
{
	char	*str;

	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0";
	ft_print_memory(str, ft_strlen(str));
	return (0);
}
*/
/*
"Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n \0"
"Bonjour les amin"
"ches\t\n\tc  est fo"
"u\ttout\tce qu on "
"peut faire avec\t"
"\n\tprint_memory\n\n"
"\n\tlol.lol\n \0"

$> ./ft_print_memory
000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
000000010a161f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo
000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
$> ./ft_print_memory | cat -te
0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
0000000107ff9f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo$
0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
$>


0000000102a9ff52: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
0000000102a9ff62: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo
0000000102a9ff72: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
0000000102a9ff82: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
0000000102a9ff92: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
0000000102a9ffa2: 0a09 6c6f 6c2e 6c6f 6c0a 2000     ..lol.lol.

*/
