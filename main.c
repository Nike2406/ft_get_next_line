#include "get_next_line.h"
#include <stdio.h> // !!!!!!! Удалить !!!!!!!

int	main()
{
	int		fd1;
	// int		fd2;
	// int		fd3;
	char	*line;

	line = "Hello world";
	fd1 = open("/Users/prochell/projects/get_next_line2/bar.txt", O_RDONLY);
	// fd2 = open("/Users/prochell/projects/get_next_line2/test2.txt", O_RDONLY);
	// fd3 = open("/Users/prochell/projects/get_next_line2/test3.txt", O_RDONLY);
	while (get_next_line(fd1, &line))
	{
		printf("%s\n", line);
		free(line);
	}
	// printf("%d\n", get_next_line(fd1, &line));
	printf("%s\n", line);
	free(line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd3, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd1, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd3, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd1, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd2, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd3, &line);
	// printf("%s\n", line);
	// free(line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// while (1);
	// 	;

// pause();
	return (0);
}