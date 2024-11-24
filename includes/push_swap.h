#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <ctype.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>
#include "../libft/libft.h"

typedef struct s_dlst
{
    int num;
    struct s_dlst *next;
}               t_dlst;


// int main(int ac, char **av);
void ft_free(t_dlst **lst);
void ft_strfree(char **str);
int ft_dpl_check(t_dlst *a);
int ft_sort_check(t_dlst *a);
int ft_find_index(t_dlst *lst, int num);
int ft_find_place_b(t_dlst *b ,int nbr);
int	ft_find_place_a(t_dlst *a, int nbr);
int ft_max(t_dlst *lst);
int ft_min(t_dlst *lst);
t_dlst *newnode(int content);
int lstsize(t_dlst *lst);
t_dlst *lstlast(t_dlst *lst);
void addback(t_dlst **lst, t_dlst *newnode);
void ft_error(void);
void ft_sa(t_dlst **a, int i);
void ft_ra(t_dlst **a, int i);
void ft_rra(t_dlst **a, int i);
void ft_sb(t_dlst **b, int i);
void ft_rb(t_dlst **b, int i);
void ft_rrb(t_dlst **b, int i);
void ft_rr(t_dlst **a, t_dlst **b, int i);
void ft_rrr(t_dlst **a, t_dlst **b, int i);
void ft_ss(t_dlst **a, t_dlst **b, int i);
void ft_pb(t_dlst **b, t_dlst **a, int i);
void ft_pa(t_dlst **a, t_dlst **b, int i);
int ft_case_rrarrb(t_dlst *a, t_dlst *b, int c);
int ft_case_rarb(t_dlst *a, t_dlst*b, int c);
int ft_case_rrarb(t_dlst *a, t_dlst *b, int c);
int ft_case_rarrb(t_dlst *a, t_dlst *b, int c);
int ft_case_rrarrb_a(t_dlst *a, t_dlst *b, int c);
int ft_case_rarb_a(t_dlst *a, t_dlst *b, int c);
int ft_case_rrarb_a(t_dlst *a, t_dlst *b, int c);
int ft_case_rarrb_a(t_dlst *a, t_dlst *b, int c);
int	ft_rotate_type_ba(t_dlst *a, t_dlst *b);
int	ft_rotate_type_ab(t_dlst *a, t_dlst *b);
int ft_apply_rrarrb(t_dlst **a, t_dlst **b, int nbr, char c);
int ft_apply_rarrb(t_dlst **a, t_dlst **b, int nbr, char c);
int ft_apply_rarb(t_dlst **a, t_dlst **b, int nbr, char c);
int ft_apply_rrarb(t_dlst **a, t_dlst **b, int nbr, char c);
void ft_sort_till_b(t_dlst **a, t_dlst **b);
t_dlst *ft_sort_b(t_dlst **a);
t_dlst **ft_sort_a(t_dlst **a, t_dlst **b);
void ft_sort(t_dlst **a);
void    ft_sort_three(t_dlst **a);
t_dlst *init_stack(int ac, char **av);
t_dlst *sub_init(char *av);
int	ft_atoi2(const char *str);
#endif