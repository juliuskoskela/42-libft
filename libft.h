/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:16:02 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/18 23:46:11 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 4
# define MAX_FD 1024
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

/*
** ---- Struct: bit-fields -----------------------------------------------------
*/
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
/*
** ---- Struct: doubly linked list ---------------------------------------------
*/
typedef struct		s_dlist
{
	void			*content;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;
/*
** ---- Bits -------------------------------------------------------------------
**
**  	Functions for manipulating bits and bit-fields.
**  	Associated struct: t_field.
*/
uint64_t			b_atonb(char *str, char c, uint64_t size);
uint64_t			b_checknth(uint64_t nb, int n);
uint64_t			b_highest(uint64_t nb, uint64_t size);
uint64_t			b_lowest(uint64_t nb, uint64_t size);
uint64_t			*b_fldinit(uint64_t size);
uint64_t			b_fldcol(uint64_t *field, uint64_t col, uint64_t size);
t_field				*b_flddup(t_field *src);
t_field				*b_fldnew(uint64_t w, uint64_t h);
int 				b_fldfill(uint64_t *field, char *file, char one, \
					uint64_t size);
int 				b_fldoverlap(t_field *board, t_field *field);
int 				b_fldcmp(t_field **f1, t_field **f2);
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
** ---- Conversions ------------------------------------------------------------
**
**  	Functions for handling conversions.
*/
int 				c_atoi(const char *str);
int 				c_atoi_base(const char *str, int base);
double				c_atof(const char *str);
char				*c_itoa(int n);
int 				c_tolower(int c);
int 				c_toupper(int c);
char				*c_bitoa(uint64_t nb, uint64_t len);
uint64_t			c_atob(char *str);
/*
** ---- Dlist ------------------------------------------------------------------
**
**  	A doubly linked list implementation.
**  	Associated struct: t_dlist.
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
** ---- Errors -----------------------------------------------------------------
**
**  	Funtions for error handling.
*/
void				error(char *message);
/*
** ---- Fd ---------------------------------------------------------------------
**
**  	Functions that output to a file descriptor.
*/
int 				fd_readline(const int fd, char **line);
void				fd_addchar(char c, int fd);
void				fd_addstr(char const *s, int fd);
void				fd_addendl(char const *s, int fd);
void				fd_addnbr(int n, int fd);
/*
** ---- Istrue -----------------------------------------------------------------
**
**  	Functions that return 1 if the input is as described in the
**  	funtion name or 0 otherwise.
*/
int 				is_alnum(int c);
int 				is_alpha(int c);
int 				is_ascii(int c);
int 				is_digit(int c);
int 				is_print(int c);
int 				is_upper(int c);
int 				is_lower(int c);
int 				is_wspace(char c);
int 				is_neg(int n);
/*
** ---- Math -------------------------------------------------------------------
**
**  	Math functions.
*/
float				m_sqrt(float n);
int 				m_log2(uint64_t n);
int 				m_intlen(uint64_t n);
/*
** ---- Print ------------------------------------------------------------------
**
**  	Functions for printing on the standard output.
*/
void				p_char(char c);
void				p_str(char const *s);
void				p_endl(char const *s);
void				p_nbr(int n);
void				p_bits(uint64_t nb, uint64_t size);
/*
** ---- Strings ----------------------------------------------------------------
**
**  	Functions for string manipulation and allocations.
*/
char				*s_cat(char *dest, const char *src);
char				*s_ncat(char *dest, const char *src, uint64_t n);
uint64_t			s_lcat(char *dst, const char *src, uint64_t size);
char				*s_rev(char *str);
char				*s_chr(const char *s, int c);
char				*s_rchr(const char *s, int c);
int 				s_cmp(const char *s1, const char *s2);
int 				s_ncmp(const char *s1, const char *s2, uint64_t n);
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
void				s_iter(char *s, void (*f)(char *));
void				s_iteri(char *s, void (*f)(unsigned int, char *));
char				*s_map(char const *s, char (*f)(char));
char				*s_mapi(char const *s, char (*f)(unsigned int, char));
int 				s_equ(char const *s1, char const *s2);
int 				s_nequ(char const *s1, char const *s2, uint64_t n);
char				*s_sub(char const *s, unsigned int start, uint64_t len);
char				*s_csub(char *s, char c);
char				*s_join(char const *s1, char const *s2);
char				*s_trim(char const *s);
char				**s_split(char const *s, char c);
int					s_lento(char *s, char c);
/*
** -----Void -------------------------------------------------------------------
**
**  	Functions for type agnostic data manipulation with void datatype.
*/
void				*v_cpy(void *dest, const void *src, uint64_t n);
void				*v_ccpy(void *dst, const void *src, int c, uint64_t n);
void				*v_chr(const void *s, int c, uint64_t n);
int 				v_cmp(const void *s1, const void *s2, uint64_t n);
void				*v_move(void *dest, const void *src, uint64_t n);
void				*v_set(void *s, int c, uint64_t n);
void				*v_alloc(uint64_t size);
void				*v_calloc(uint64_t nmemb, uint64_t size);
void				v_del(void **ap);
void				v_bzero(void *s, uint64_t n);

#endif
