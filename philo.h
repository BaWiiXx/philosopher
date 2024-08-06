#ifndef PHILO_H
#	define PHILO_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_fork
{
	int fork_id;
	pthread_mutex_t mutex;
}	t_fork;

typedef struct s_data 
{
	int n_philo;
	int t_to_die;
	int t_to_eat;
	int t_to_sleep;
	int n_meals;
	long start;
	int meals_eaten;
	pthread_mutex_t print_mutex;
	t_fork *forks;
}	t_data;

typedef struct s_philo
{
	int philo_id;
	t_fork *left_forks;
	t_fork *right_forks;
	long last_meal_time;
	t_data *data;
	pthread_t thread_id;
}	t_philo;


// utils pour pihlo
int		ft_isdigit(int c);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *nptr);
void	ft_putstr_fd(char *s, int fd);

// 
#endif