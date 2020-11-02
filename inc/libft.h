/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:16:02 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/02 08:16:39 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 4
# define MAX_FD 1024
# define SQRTPREC 64
# define POWPREC 0.000001
# define ABS(X)  ((X >= 0)? X : -(x))
# define ROUND(X)  (X >= 0)? (int)(X + 0.5) : (int) - (ABS(X) + 0.5)
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef union		s_double
{
	double			f;
	uint64_t		i;
}					t_double;

typedef struct		s_field
{
	uint64_t		*row;
	uint64_t		w;
	uint64_t		h;
	uint64_t		bw;
	uint64_t		bh;
	uint64_t		x;
	uint64_t		y;
}					t_field;
typedef struct		s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;
/*
**  ----------------------------------------------------------------------------
**
**	Bits
**
**	Functions for manipulating bits and bit-fields.
**	Associated struct: t_field.
*/
uint64_t			b_atonb(char *str, char c, uint64_t size);
uint64_t			b_checknth(uint64_t nb, int n);
uint64_t			b_highest(uint64_t nb, uint64_t size);
uint64_t			b_lowest(uint64_t nb, uint64_t size);
uint64_t			*b_fldinit(uint64_t size);
uint64_t			b_fldcol(uint64_t *field, uint64_t col, uint64_t size);
t_field				*b_flddup(t_field *src);
t_field				*b_fldnew(uint64_t w, uint64_t h);
int					b_fldfill(uint64_t *field, char *file, char one, \
					uint64_t size);
int					b_fldoverlap(t_field *board, t_field *field);
int					b_fldcmp(t_field **f1, t_field **f2);
void				b_fldprint(t_field *field);
void				b_fldmoveleft(t_field *field, uint64_t steps);
void				b_fldmoveright(t_field *field, uint64_t steps);
void				b_fldmovedown(t_field *field, uint64_t steps);
void				b_fldmoveup(t_field *field, uint64_t steps);
void				b_fldsize(t_field *field);
void				b_flddel(t_field *field);
void				b_fldplus(t_field *board, t_field *field);
void				b_fldminus(t_field *board, t_field *field);
void				b_fldclear(t_field *field);
/*
**  ----------------------------------------------------------------------------
**
**	Conversions
**
**	Functions for handling conversions.
*/
int					c_atoi(const char *str);
int					c_atoi_base(const char *str, int64_t base);
double				c_atof(const char *str);
char				*c_itoa(int64_t n);
char				*c_itoa_base(int64_t nb, int64_t base);
int					c_tolower(int c);
int					c_toupper(int c);
char				*c_bitoa(uint64_t nb, uint64_t len);
char				*c_ftoa(double nbr, size_t p);
char				*c_ftoe(double nbr);
/*
**  ----------------------------------------------------------------------------
**
**	Dlist
**
**	A doubly linked list implementation.
**	Associated struct: t_dlist.
*/
uint64_t			dl_len(t_dlist *node);
void				dl_putfirst(t_dlist **ref, void *new);
void				dl_putlast(t_dlist **ref, void *new);
void				dl_putbefore(t_dlist **ref, t_dlist *next, void *new);
void				dl_putafter(t_dlist **ref, t_dlist *prev, void *new);
void				dl_print(t_dlist *node);
void				dl_print_b(t_dlist *node);
void				dl_del_node(t_dlist **ref, t_dlist *del);
void				dl_del_node_at(t_dlist **ref, uint64_t pos);
void				dl_del_last(t_dlist **ref);
void				dl_rotate(t_dlist **head_ref, uint64_t n);
t_dlist				*dl_get_last(t_dlist **list);
void				dl_del_list(t_dlist *ref);
/*
**  ----------------------------------------------------------------------------
**
**	Error
**
**	Funtions for error handling.
*/
void				error(char *message);
/*
**  ----------------------------------------------------------------------------
**
**	Fd
**
**	Functions that output to a file descriptor.
*/
int					fd_readline(const int fd, char **line);
void				fd_addchar(char c, int fd);
void				fd_addstr(char const *s, int fd);
void				fd_addendl(char const *s, int fd);
void				fd_addnbr(int n, int fd);
/*
**  ----------------------------------------------------------------------------
**
**	Istrue
**
**	Functions that return 1 if the input is as described in the
**	funtion name or 0 otherwise.
*/
int					is_alnum(int c);
int					is_alpha(int c);
int					is_ascii(int c);
int					is_digit(int c);
int					is_print(int c);
int					is_upper(int c);
int					is_lower(int c);
int					is_wspace(char c);
int					is_neg(int n);
/*
**  ----------------------------------------------------------------------------
**
**	Math
**
**	Math functions.
*/
double				m_sqrt(double n);
int64_t				m_log(int64_t n);
int					m_intlen(int64_t n);
double				m_fabs(double n);
double				m_pow(double base, double exp);
double				m_sin(double x, int64_t p);
int64_t				m_fac(int64_t n);
uint64_t			m_prime(uint64_t n);
uint64_t			m_nextprime(uint64_t n);
t_dlist				*m_primefac(uint64_t n);
size_t				m_dcnt(uint64_t nb, uint64_t base);
double				m_ceil(double f);
double				m_floor(double x);
double				m_modf(double x, double *iptr);
/*
**  ----------------------------------------------------------------------------
**
**	Print
**
**	Functions for printing on the standard output.
*/
void				p_char(char c);
void				p_str(char const *s);
void				p_endl(char const *s);
void				p_nbr(int n);
void				p_bits(uint64_t nb, uint64_t size);
void				p_dlist_s(t_dlist **list);
/*
**  ----------------------------------------------------------------------------
**
**	Strings
**
**	Functions for string manipulation and allocations.
*/
char				*s_cat(char *dest, const char *src);
char				*s_ncat(char *dest, const char *src, uint64_t n);
uint64_t			s_lcat(char *dst, const char *src, uint64_t size);
char				*s_rev(char *str);
char				*s_chr(const char *s, int c);
char				*s_rchr(const char *s, int c);
int					s_cmp(const char *s1, const char *s2);
int					s_ncmp(const char *s1, const char *s2, uint64_t n);
char				*s_cpy(char *dest, const char *src);
char				*s_ncpy(char *dest, const char *src, uint64_t n);
uint64_t			s_lcpy(char *dst, const char *src, uint64_t dstsize);
char				*s_dup(const char *s);
char				*s_ndup(const char *s, uint64_t n);
char				*s_cdup(const char *s1, char c);
uint64_t			s_len(const char *s);
char				*s_str(const char *h, const char *n);
char				*s_nstr(const char *h, const char *n, uint64_t len);
char				*s_new(uint64_t size);
void				s_del(char **as);
void				s_clr(char *s);
void				s_iter(char **ref, int (*fptr)(int c));
void				s_iteri(char *s, void (*f)(unsigned int, char *));
char				*s_map(char const *s, char (*f)(char));
char				*s_mapi(char const *s, char (*f)(unsigned int, char));
int					s_equ(char const *s1, char const *s2);
int					s_nequ(char const *s1, char const *s2, uint64_t n);
char				*s_sub(char const *s, unsigned int start, uint64_t len);
char				*s_csub(char *s, char c);
char				*s_join(char const *s1, char const *s2);
char				*s_trim(char const *s);
char				**s_split(char const *s, char c);
int					s_lenc(char *s, char c);
int					s_sum(char *str);
char				*s_appendc(char *str, char c);
/*
**  ----------------------------------------------------------------------------
**
**	Void
**
**	Functions for type agnostic data manipulation with void datatype.
*/
void				*v_cpy(void *dest, const void *src, uint64_t n);
void				*v_ccpy(void *dst, const void *src, int c, uint64_t n);
void				*v_chr(const void *s, int c, uint64_t n);
int					v_cmp(const void *s1, const void *s2, uint64_t n);
void				*v_move(void *dest, const void *src, uint64_t n);
void				*v_set(void *s, int c, uint64_t n);
void				*v_alloc(uint64_t size);
void				*v_calloc(uint64_t nmemb, uint64_t size);
void				v_del(void **ap);
void				v_bzero(void *s, uint64_t n);

#endif
