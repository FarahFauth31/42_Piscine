/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:07:55 by farah             #+#    #+#             */
/*   Updated: 2023/11/20 16:22:51 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define NO_ERROR 0
# define TWO_ARG -1
# define NOT_NUM -2
# define NO_FILE -3
# define ERROR_READ -4

int		ft_strlen(char *str);

int		ft_strcmp(char *s1, char *s2);

int		ft_read_file(char *argv);

char	*ft_create_malloc_file(char *argv);

char	*ft_write_in_malloc_file(char *argv, char *array);

void	ft_write_last_10_lines(char *array);

int		ft_is_num(char *num);

void	ft_error_messages(int error_message, char *argv);

int		ft_check_c_errors(int argc, char **argv);

void	ft_write_header(int argc, char *argv, int num_args);

void	ft_ten_lines(int argc, char **argv, int i);

int		ft_atoi(char *str);

void	ft_write_num_bytes(char *array, char *argv2);

void	ft_num_bytes(int argc, char **argv, int i);

int		ft_initial_i(char **argv);

#endif
