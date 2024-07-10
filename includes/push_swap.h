#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "../libft/includes/libft.h"
# include "../printf/includes/ft_printf.h"

typedef struct s_stack_node
{
    int value;
    struct s_stack_node *next;
} t_stack_node;

t_stack_node *ft_process(int argc, char **argv);
int ft_checkdup(t_stack_node *stack);
void ft_error();
int ft_checksorted(t_stack_node *stack);
void ft_sort(t_stack_node **stack);
void ft_free(t_stack_node **stack);

// Basic stack operations
void ft_push(t_stack_node **stack, int value);
int ft_pop(t_stack_node **stack);
void ft_swap(t_stack_node **stack);
void ft_rotate(t_stack_node **stack);
void ft_reverse_rotate(t_stack_node **stack);

// Utility functions
int ft_atoi(const char *str);
void ft_putstr_fd(char *str, int fd);

#endif
