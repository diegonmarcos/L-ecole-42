# ft_strlcat - 
``` c 
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
```
<br>
<br>

# Manual
**Brief:**  
Appends the string `src` to the end of `dst`, up to `dstsize` - 1 total bytes.

**File:** `ft_strlcat.c` / **Date:** 2024-06-22  
**Author:** Diego N. Marcos <dnepomuc@student.42barcelona.com>

**Library/Header:**  
* `string.h`

**Description:**
The `ft_strlcat()` function appends the null-terminated string `src` to the end of `dst`. It will append at most `dstsize` - `strlen(dst)` - 1 characters. It also ensures that the resulting string is null-terminated.

**Input Values:**
* `dst`: The string to be appended to.
* `src`: The string to append to `dst`.
* `dstsize`: The total size of the buffer `dst`.

**Return Value:**
* The total length of the string they tried to create. 
    * If the return value is >= `dstsize`, the output string has been truncated.
    * If the return value is < `dstsize`, the entire `src` string was successfully appended.

**Note:**
- The `dstsize` argument must include the space for the null terminator (`\0`).
- The function assumes that both `dst` and `src` are valid null-terminated strings.

**Example:**
```c
char dst[15] = "Hello";
char src[] = " world";
size_t result = ft_strlcat(dst, src, 15);

printf("%s\n", dst);   // Output: Hello world
printf("%zu\n", result); // Output: 11
```

<br>
<br>

# Code Explanation
**Source Code:**
``` C

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
	{
		return (dstsize + src_len);
	}
	if (src_len < dstsize - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len +1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

```