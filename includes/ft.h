#include <string.h>
#include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalpha(char c);
int		ft_atoi(const char *nptr);
int		ft_strcmp(char *str1, char *str2);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
size_t	ft_strlen(const char *str);
void	*ft_bzero(void *s, size_t n);
char	*ft_strchr(char *str, int c);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strcpy(char *dest, const char *src);
void 	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(char *hay, char *needle, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
