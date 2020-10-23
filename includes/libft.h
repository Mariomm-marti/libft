/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin- <mmartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 10:50:30 by mmartin-          #+#    #+#             */
/*   Updated: 2020/10/23 21:57:02 by mmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# include <stddef.h>

/*
**	NOTE
**		Only used when looking for explicit 8-bit data, use casting otherwise
**	EXAMPLE
**		if ((unsigned char)letter == 48)
**		letter = (t_byte)letter >> 6
*/

typedef unsigned char	t_byte;

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**	Memory handler prototypes
*/

void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memdup(void const *s, int n);
void			*ft_calloc(size_t count, size_t size);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			ft_bzero(void *s, size_t n);

/*
**	Simple native data prototypes
*/

size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_countdigits(int num);
void			*ft_strdup(const char *s1);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack,
		const char *needle, size_t len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

/*
**	Simple math function prototypes
*/

int				ft_logn(t_byte const base, unsigned long int const num);

/*
**	Part 2 - complex function (string/fd handles) prototypes
*/

char			**ft_split(char *s, char c);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			*ft_itoa(int n);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int				ft_split_free(char **tab);
int				ft_split_count(char **tab);
int				ft_itoa_base(char *out, long long int num, char const *base);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**	List function prototypes
*/

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));

#endif
