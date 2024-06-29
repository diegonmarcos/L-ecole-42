## Introduction

Please respect the following rules:

- Remain polite, courteous, respectful, and constructive throughout the evaluation process. The well-being of the community depends on it.

- Identify any potential issues in their work with the person or group being evaluated. Take the time to discuss and debate the identified problems.

- Be aware that there may be slight differences in interpretation between the project instructions, its scope, and its functionalities. Keep an open mind and grade as honestly as possible. The educational value is only valid if the peer evaluation is done seriously.

## Guidelines

- Grade only what is contained in the cloned Git repository of the student or group.

- Verify that the Git repository belongs to the student or group, that the project is the expected one, and that "git clone" is used in an empty folder.

- Scrupulously check that no aliases have been used to deceive you and make sure you are evaluating the official submission.

- To avoid any surprises, check with the student or group about potential scripts used to facilitate the evaluation (e.g., test or automation scripts).

- Don't blindly trust test programs! They could be incorrect.

- Check the Makefile: no wildcards, no re-linking. If so, the grade is 0.

- Use `make`, then `make --debug` to make sure.

- If you haven't done the project you are about to evaluate, you must read the entire subject before starting the evaluation.

- Use the available flags to report an empty submission, a non-functioning program, a Norm error, cheating... In these situations, the evaluation is over, and the grade is 0, or -42 in case of cheating. However, except in cases of cheating, you are encouraged to continue the discussion on the work submitted, even if it is incomplete. This is to identify errors not to be repeated in the future.
premature
- Throughout the evaluation, no segfaults or other unexpected, premature, or uncontrolled stops will be tolerated. In which case, the final grade will be 0. Use the appropriate flag.

- You should never have to edit a file except for a configuration file if it exists. If you want to modify a file, you must clearly explain the reasons for the edit and be in agreement with the student being evaluated before doing anything.

- You must also check for the absence of memory leaks. Any memory allocated on the heap must be properly freed before the end of the program's execution.
You have the right to use any tool available on the machine such as `leaks`, `valgrind`, or `e_fence`. In case of memory leaks, check the appropriate flag.

## Attachments

subject.pdf

### Mandatory Part

You must test the functions present in the libft, either with your test suite or with the one of the person being evaluated.

#### LibC Functions #1
Test that ALL of these functions fulfill their role exactly as they should:

- ft_strlen
- ft_memcpy
- ft_memset
- ft_bzero
- ft_memmove
- ft_memcmp
- ft_memchr

Does it work?
☐ Yes
☐ No

#### LibC Functions #2
Test that ALL of these functions fulfill their role exactly as they should:

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

Does it work?
☐ Yes
☐ No

#### LibC Functions #3
Test that ALL of these functions fulfill their role exactly as they should:

- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr

Does it work?
☐ Yes
☐ No

#### LibC Functions #4
Test that ALL of these functions fulfill their role exactly as they should:

- ft_strlcat
- ft_strlcpy
- ft_atoi
- ft_strnstr
- ft_strncmp
- ft_calloc
- ft_strdup

Does it work?
☐ Yes
☐ No

#### Additional Functions #1
Test that ALL of these functions fulfill their role exactly as they should:

- ft_substr
- ft_strjoin
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

Does it work?
☐ Yes
☐ No

#### Additional Functions #2
Test that ALL of these functions fulfill their role exactly as they should:

- ft_strmapi
- ft_striteri
- ft_strtrim
- ft_split
- ft_itoa

Does it work?
☐ Yes
☐ No

### Bonus Part

The bonuses will only be examined if the mandatory part is excellent. This means that the mandatory part must have been done from start to finish, with perfect error handling even in case of unexpected use. If all the mandatory points have not been awarded during this defense, no bonus points will be counted.

- ft_lstnew

Does it work?
☐ Yes
☐ No

- ft_lstdelone

Does it work?
☐ Yes
☐ No

- ft_lstclear

Does it work?
☐ Yes
☐ No

- ft_lstadd_front

Does it work?
☐ Yes
☐ No

- ft_lstadd_back

Does it work?
☐ Yes
☐ No

- ft_lstsize

Does it work?
☐ Yes
☐ No

- ft_lstlast

Does it work?
☐ Yes
☐ No

- ft_lstiter

Does it work?
☐ Yes
☐ No

- ft_lstmap

Does it work?
☐ Yes
☐ No
