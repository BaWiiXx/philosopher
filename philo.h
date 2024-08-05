#ifndef PHILO_H
#define PHILO_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_fork
{
	int fork_id;
	pthread_mutex_t mutex;
} t_fork;

typedef struct s_data 
{
	int n_philo;
	int t_to_die;
	int t_to_eat;
	int t_to_sleep;
	int n_meals
	long start;
	pthread_mutex_t print_mutex;
	t_fork *forks
} t_data;

typedef struct s_philo
{
	int philo_id;
	int meals_eaten;
	t_forks *left_forks;
	t_forks *right_forks;
	long last_meal_time;
	t_data *data;
	pthread_t thread_id
} t_philo;

#endif