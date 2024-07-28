# Analysis of the interconnections

**Interconnection Overview:**

1. **Character Classification:**
   - `ft_isalnum` depends on
      - `ft_isalpha` and `ft_isdigit`.

2. **Memory Manipulation:**
   - `ft_calloc` depends on
      -  `malloc` and `ft_bzero`.
   - `ft_bzero` depends on
      - `memset`.
   - `ft_memcpy` is used within
      - `ft_memmove` (in the case of non-overlapping memory).
   - `ft_strdup` depends on
      - `ft_strlen`, `malloc`, and `ft_memcpy` (or `ft_strlcpy`).

3. **String Manipulation:**
   - `ft_strjoin`, `ft_strtrim`, and `ft_split` use
      - `ft_substr`.
   - `ft_split` also depends on
      - `ft_calloc` and `ft_free`.
   - `ft_strmapi` depends on
      - `ft_strdup`.
   - `ft_strnstr` depends on
      - `ft_strlen` and `ft_strncmp`.
   - `ft_strtrim` depends on
      - `ft_strlen` and `ft_strchr`.

4. **Integer-String Conversion:**
   - `ft_itoa` depends on
      - `ft_calloc`, `ft_digit_count` (a helper function), and `comp` (another helper function).
   - `ft_putnbr_fd` uses
      - `ft_itoa` and `ft_putstr_fd`.

5. **File Descriptor Output:**
   - `ft_putendl_fd` and `ft_putnbr_fd` depend on
      -  `ft_putstr_fd` and `ft_putchar_fd`.

