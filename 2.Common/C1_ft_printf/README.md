<p align="center">
  <img src="https://github.com/dnepomuc/dnepomuc/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_ft_printf.png">
</p>

<p align="center">
	<img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/evaluated-22%20%2F%2012%20%2F%202022-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/badge/score-104%20%2F%20100-success?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/languages/top/dnepomuc/ft_printf?color=%2312bab9&style=flat-square"/>
	<img src="https://img.shields.io/github/last-commit/dnepomuc/ft_printf?color=%2312bab9&style=flat-square"/>
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/dnepomuc' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#license">License</a>
</p>

## INSTRUCTIONS
This project involved recreating the well-known C library function, printf. This provided a valuable learning opportunity in variadic arguments and structures, particularly if we intend to incorporate additional flags into our implementation of print.

- [Subject](https://github.com/dnepomuc/ft_printf/blob/master/subject/en_subject_ft_printf.pdf) `PDF`
- [References](https://github.com/dnepomuc/42-resources#01-ft_printf) `GitHub`



## BACKLOG

### STUDY
**ft_printf:**

* **Variadic Functions:**
    * `va_start(ap, last)`: Initializes a `va_list` for accessing variable arguments.
    * `va_arg(ap, type)`: Retrieves the next argument of a specified type.
    * `va_end(ap)`: Cleans up the `va_list` when finished.
* **Format Specifiers:**
    * `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%%`, etc.: Used to format different types of data (characters, strings, integers, unsigned integers, hexadecimal numbers, pointers, etc.).
* **String Manipulation:**
    * `ft_strlen`, `ft_strchr`, `ft_memcpy`, etc.: Functions from `libft` for working with strings.
* **Integer to String Conversion:**
    * Custom functions to convert integers to strings (e.g., `ft_itoa` or equivalent in `libft`).

**General C Syntax:**

* **Pointers:** Understanding how to use pointers is crucial for all these projects.
* **Data Types:** Working with different data types (int, char, char*, etc.).
* **Conditional Statements (if, else):** Used for decision-making and branching.
* **Loops (while, for):** Used for repeated actions.
* **Functions:** Defining and calling functions to organize your code.
* **Structures:** For organizing data (more relevant in later circles).
* **Bitwise Operators:** Useful for working with flags and permissions in some cases.



## TESTER





## DOCUMENTATION
- [ ] Manage any combination of the following flags: `-O` and the field minimum width under all conversions;
- [ ] Manage all the following flags: `#` ` ` `+`;




## RESOURCES
> At 42 School, it is expected that almost every project is written following the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;
- Each function must be a maximum of 25 lines, not counting the function's curly brackets;
- Each line must be at most 80 columns wide, with comments included;
- A function can take 4 named parameters maximum;
- No assigns and declarations in the same line (unless static);
- You can't declare more than 5 variables per function;
- ...
```




## EVALUATION



