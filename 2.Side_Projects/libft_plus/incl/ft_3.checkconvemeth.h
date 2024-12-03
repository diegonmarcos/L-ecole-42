// 3. Character Type Checking and Conversions Functions and Methods
// 3.1 Checking and Conversions Functions
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);

// 3.1 Methods
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));