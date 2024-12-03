// --- 1.	Memory Management --- 

// --- 1.1	Allocating Memory ---
// ft_malloc
// ft_free
// ft_realloc
void	*ft_calloc(size_t count, size_t size);

// --- 1.2	Manipulating Memory ---
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);