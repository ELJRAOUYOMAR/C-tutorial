#include <stdio.h>
# include <stdlib.h>
# include <limits.h>

/* time to eat : 
*  a philo : takes forks, eat for time_to_eat, put forks back,
* sleep for time_to_sleep = time_to_eat (chewing), release the forks
*/

// ptread_mutex_lock(&fork[left]);
// print_log(philo_id, "has taken a fork");
// ptread_mutex_lock(&fork[right]);
// print_log(philo_id, "has taken a fork");

// pthread_mutex_lock(&meal_mutex);
// last_meal_time = get_current_time();
// pthread_mutex_unlock(&meal_mutex);

typedef struct s_list 
{
    int value;
    struct s_list *next;
}   t_list;

/**
 *  Given a number of args (int),
 *  add them to a linked list, and sort them
 * constraint: the program doesn't exit (waiting for an interruption event --ctrl C--)
 * scanf is forbidden
*/

t_list  *create_node(int value)
{
    t_list  *new_node;

    new_node = malloc(sizeof(t_list));

    if (!new_node)
        return (printf("allocation failed !!\n"), NULL);

    new_node->value = value;
    new_node->next = NULL;

    return new_node;
}
void    print_list(t_list *list)
{
    while (list)
    {
        printf("list->value = %d, ", list->value);
        list = list->next;
    }
}

t_list  *find_last_node(t_list *list)
{
    t_list *tmp;
    
    tmp = list;
    while (tmp->next)
        tmp = tmp->next;
    // printf("tmp->value = %d\n", tmp->value);
    return tmp;
}

void    add_to_list(t_list **list, int value)
{
    t_list *node = create_node(value);
    t_list  *tmp;

    if (!list)
    {
        perror("doesn't exist\n");
        return ;
    }

    if (!*list)
        *list = node;
    else   
    {
        tmp = find_last_node(*list);
        tmp->next = node;
    }
    printf("node->value = %d\n", node->value);
}

int main(int ac, char **av)
{
    t_list  *list = NULL;
    t_list  *tmp;
    char buff[100];

    while (1)
    {
        for (int i = 0; i  < ac; i++)
        {
            fgets(buff, sizeof(buff), stdin);
            add_to_list(&list, atoi(buff));
        }
        print_list(list);
    }

    // list = create_node(10);
    // list->next = create_node(20);
    // list->next->next = create_node(30);

    // add_to_list(&list, 40);
    // find_last_node(list);
    // print_list(list);
}