#include "philo.h"

void init_data(t_data *data, char **argv)
{
	data->n_philo = ft_atoi(argv[1]);
	if(!data->n_philo)
	{
		ft_putstr_fd("you need at least one philosopher", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	data->t_to_die = ft_atoi(argv[2]);
	data->t_to_eat = ft_atoi(argv[3]);
	data->t_to_sleep = ft_atoi(argv[4]);
	data->n_meals = ft_atoi(argv[5]);
	if(data->t_to_die <= 0 || );
	{
		ft_putstr_fd("a negative time is not allowed", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}

	data->forks

	
}
int	check_is_digit(char *str)
{
    int i;

    while(str[i])
	{
		if(ft_isdigit(str[i]) == 1)
			return(0);
	}
    return (1);
}

int main (int argc, char **argv)
{
	int i;
    
	i = 1;
	while(i < argc)
	{
		if(check_is_digit(argv[i]) == 0);
		{	
			printf("error");
			return (0);
		}
		i++;
	}
}

// int init_data(t_data *data, char **argv)
// {
    
// }