#include "get_next_line.h"

int	chk_reminder(char **reminder, char **line, int fd)
{
	char	*tmp_chr;

	tmp_chr = NULL;
	if (reminder[fd])
	{
		tmp_chr = ft_strchr(reminder[fd], '\n');
		if (tmp_chr)
		{
			*tmp_chr = '\0';
			*line = ft_strdup(reminder[fd]);
			ft_strcpy(reminder[fd], ++tmp_chr);
			return (0);
		}
		else
		{
			*line = ft_strdup(reminder[fd]);
			free(reminder[fd]);
			reminder[fd] = NULL;
		}
	}
	else
		*line = ft_strdup("");
	return (1);
}

int		get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	int			rdd_bts;
	char		*tmp_chr;
	static char	*reminder[2000];

	if (fd < 0 || fd > 255 || BUFFER_SIZE <= 0 || !line)
		return (-1);
	rdd_bts = chk_reminder(reminder, line, fd);
	tmp_chr = NULL;
	if (!rdd_bts)
		return (1);
	while (!tmp_chr && rdd_bts > 0)
	{
		rdd_bts = read(fd, buf, BUFFER_SIZE);
		buf[rdd_bts] = '\0';
		tmp_chr = ft_strchr(buf, '\n');
		if (tmp_chr)
		{
			*tmp_chr = '\0';
			tmp_chr++;
			reminder[fd] = ft_strdup(tmp_chr);
		}
		*line = ft_strjoin(*line, buf);
	}
	return (rdd_bts && reminder[fd]);
}
