/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:08:30 by fvieira-          #+#    #+#             */
/*   Updated: 2024/04/08 17:11:15 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <unistd.h>

void	ft_phexa(unsigned long long n);
int		count_digits(unsigned long long n);
int		ft_printstr(char *str);
int		number_digits(unsigned int n);
int		ft_print_u(unsigned int n);
int		len_hexa(unsigned int n);
void	ft_converthexa(unsigned int n, const char c);
int		ft_print_c(char c);
int		ft_print_i_d(int numbers);
int		ft_print_p(unsigned long long n);
int		ft_print_s(char *str);
int		ft_print_u(unsigned int n);
int		ft_print_bigx_x(unsigned int n, char c);
int		ft_printf(const char *str, ...);

#endif