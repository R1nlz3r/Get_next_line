#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include "./libft/libft.h"
# define BUFF_SIZE 32

typedef struct s_line
{
  int             fd;
  char            *buf;
  struct s_line   *next;
}              t_line;

int   get_next_line(const int fd, char **line);

#endif
