# Roadmap for Developing the `ft_get_next_line.c` Function

	This roadmap outlines the steps involved in developing the `ft_get_next_line.c` function, as described in the provided project document.

### 1. Requirements
**References**
- [Subject](https://github.com/diegonmarcos/L-ecole-42/blob/main/1.Projects/C1_ft_printf/1.Roadmap/en.subject.pdf)
##### a) Mandatory
* The primary goal is to write a function named `get_next_line` that reads a line from a file descriptor. [cite: 24]
* The function should handle multiple calls, reading the file line by line until the end. [cite: 24]
* The function should return the read line, including the newline character (`\n`), or `NULL` if there is nothing more to read or an error occurs. [cite: 25, 26]
* The function should be able to read from both files and standard input. [cite: 27]
* A `BUFFER_SIZE` macro will define the buffer size for reading, and the function should adapt to different buffer sizes. [cite: 32, 33]
* Static variables are expected to manage data persistence between function calls. [cite: 4]
* Create the `get_next_line.c` and `get_next_line_utils.c` source files, along with the `get_next_line.h` header file. [cite: 24]
* Ensure compliance with the norm and handle memory allocation/deallocation properly. [cite: 6, 10]
* - Use Makefile with
	- Flags cc -Wall -Wextra -Werror -D BUFFER_SIZE=INPUT_VALUE
	- Rules $(NAME), all, clean, fclean and re. Extra rule for bonus to include extra libraries.
- File Structure Expected:
	- /main
	    - .../get_next_line.c
	    - .../get_next_line_utils.c
	    - .../get_next_line.h
	    - .../main.c
	    
##### b) Forbidden Functions and Limitations
###### **b1) Limitations**
- You are not allowed to use your libft in this project.
- lseek() is forbidden.
- Global variables are forbidden.

###### **b2) Norminette**
- *No for, do...while, switch, case, goto, ternary operators, or variable-length arrays allowed;*
- *A function can take 4 named parameters maximum;*
 - *Each function must be a maximum of 25 lines;*
 - *You can't declare more than 5 variables per function;*
 - *Each line must be at most 80 columns wide;*
 - *No assigns and declarations in the same line (unless static);* 
 - *and more...*
* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - code norm inspector, made by 42. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

##### c) Edge Cases and Error Handling

##### d) Bonus

>_If you plan to complete the bonus part, think about the  
implementation of your extra features from the start. This way,  
you will avoid the pitfalls of a naive approach_
- Optimize the function to use only one static variable. [cite: 46]
- Extend the function to manage multiple file descriptors concurrently. [cite: 47]
- Create the bonus part files with the `_bonus.c` and `_bonus.h` suffixes. [cite: 50]  




### 2. Sources and Resources
#### a. Sources
- [Func Variaticas](https://trucosinformaticos.wordpress.com/2018/11/25/funciones-variadicas/)
#### b. Resources
#### c. Take Away
**General C Syntax:**
* **Pointers:** Understanding how to use pointers is crucial for all these projects.
* **Data Types:** Working with different data types (int, char, char*, etc.).
* **Conditional Statements (if, else):** Used for decision-making and branching.
* **Loops (while, for):** Used for repeated actions.
* **Functions:** Defining and calling functions to organize your code.
* **Structures:** For organizing data (more relevant in later circles).
* **Bitwise Operators:** Useful for working with flags and permissions in some cases.
### 3. Designing the Solution
#### a. Pseudocode PDL
* **Core Logic:** Implement a loop that reads a chunk of data from the file descriptor using the `read` system call. Search for a newline character within the buffer. [cite: 32, 33, 39]
* **Buffer Management:** Utilize a static variable to store the buffer and manage leftover data between calls. [cite: 4]
* **Line Assembly:** Concatenate the chunks of data read into a complete line. [cite: 40]
* **Error Handling:** Incorporate checks for errors during file reading. [cite: 26]
* **End-of-File:** Detect the end of the file and return `NULL` accordingly. [cite: 26]
#### b. Simplified Limited Implementation 
`(without: width, precision, flags, lacks error handling, other formatting options, edge cases and platform-specific details.) `

``` c
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 42  // You can adjust this

char *get_next_line(int fd) {
  static char buffer[BUFFER_SIZE + 1];
  static int buffer_index = 0;
  static int bytes_read = 0;
  char *line = NULL;
  int line_index = 0;

  while (1) {
    // If we've reached the end of the buffer, read more data
    if (buffer_index >= bytes_read) {
      bytes_read = read(fd, buffer, BUFFER_SIZE);
      buffer_index = 0;

      // If we can't read any more data, we're done
      if (bytes_read <= 0) {
        return line;
      }
    }

    // If we find a newline character, we have a complete line
    if (buffer[buffer_index] == '\n') {
      line = realloc(line, line_index + 1); // +1 for null terminator
      line[line_index] = '\0';
      buffer_index++;
      return line;
    }

    // Otherwise, append the current character to the line
    line = realloc(line, line_index + 2); // +2 for the char and null terminator
    line[line_index] = buffer[buffer_index];
    line_index++;
    buffer_index++;
  }
}
```
###### Explanation

1. **Includes:** We include `unistd.h` for the `read` function and `stdlib.h` for `malloc` and `realloc`.
    
2. **BUFFER_SIZE:** This macro defines how many bytes we read from the file at a time.
    
3. **Static Variables:**
    
    - `buffer`: This holds the characters read from the file.
    - `buffer_index`: This keeps track of our current position in the buffer.
    - `bytes_read`: This stores the number of bytes read in the last `read` call.
4. **Initialization:**
    
    - `line`: This will store the line we're building. It's initialized to `NULL`.
    - `line_index`: This tracks our position in the `line`.
5. **Reading Loop:** The `while` loop continues until a line is found or the end of the file is reached.
    
6. **Reading from File:** If `buffer_index` reaches `bytes_read`, it means we've consumed all the data in the buffer, so we read more data from the file using `read`.
    
7. **Checking for Newline:** If we encounter a newline character (`\n`), we know we have a complete line. We allocate memory for the line (including the null terminator), copy the line from the buffer, and return it.
    
8. **Appending to Line:** If the current character isn't a newline, we reallocate memory for the line to accommodate the new character and add it to the line.
#### c. FlowChart High Level

``` mermaid
graph TD
    A["get_next_line(int fd)"] --> B["Manage buffer"]
    B --> C["Read data"]
    C --> D{End of file?}
    D -- Yes --> E["Return NULL"]
    D -- No --> F{Newline found?}
    F -- Yes --> G["Extract and return line"]
    G --> A
    F -- No --> C
```
#### d. Flow Chart Low Level
``` mermaid
graph TD
    A["get_next_line(int fd)"] --> B["Static buffer initialized?"]
    B -- Yes --> C["read_and_buffer(fd, buffer, bytes_read)"]
    C --> J["read() system call"]
    J --> K{Bytes read > 0?}
    K -- Yes --> L["Store data in buffer"]
    L --> M["Check for errors"]
    M --> C
    K -- No --> E
    B -- No --> D["Initialize static buffer"]
    D --> C
    E{End of file reached?}
    E -- Yes --> F["Return NULL"]
    E -- No --> G{Newline found in buffer?}
    G -- Yes --> H["extract_line(buffer)"]
    H --> N["find_newline(buffer)"]
    N --> O["malloc(size_t size)"]
    O --> P["Copy line from buffer  (using ft_strjoin, ft_strdup, etc.)"]
    P --> Q["update_buffer(buffer)"] 
    Q --> I
    G -- No --> C
    I["Return extracted line"]
```

### 4. Unit Tester

* Write test cases to verify the function's behavior with different files, buffer sizes, and input scenarios. [cite: 17]

- Input Scenarios:
    - Empty file.
    - Corrupted file.
    - File with a single line.
    - File with multiple lines of varying lengths.
    - Lines with the maximum length that can be stored in the buffer.
    - Lines that are longer than the buffer size.
    - Reading from standard input.
- Inputs to be tested:
    - Text files with different content.
    - Standard input (simulated or using keyboard input).
- Outputs Expected:
    - Correctly read lines, including newline characters.
    - `NULL` when reaching the end of the file.
    - Proper handling of different buffer sizes.
    - No memory leaks.
- Files:
    - Files with a variety of characters, including special characters and Unicode characters.
    - Files with different line endings (e.g., `\n`, `\r\n`).
    - Corrupted file.
- Buffers sizes:
    - from 1 to 10,000,000

### 5. Documentation
#### Mandatory Part


	  

#### Bonus Part



### 6. Backlog/Milestones & Submissions
#### a) Backlog
###### Functions
- [ ] **High-Level Function**
	- [ ] `get_next_line(int fd)`: 
	      This is the primary function that will be called to read a line from a file descriptor.  

- [ ] **Mid-Level Functions**
	- [ ] `read_and_buffer(int fd, char **buffer, int *bytes_read)`: 
	      This function handles reading data from the file descriptor into a buffer and managing the number of bytes read.
	- [ ] `find_newline(char *buffer)`: 
	      This function searches for the newline character (`\n`) within the buffer.
	- [ ] `extract_line(char **buffer)`: 
	      This function extracts the complete line from the buffer, up to the newline character or the end of the buffer.
	- [ ] `update_buffer(char **buffer)`: 
	      This function updates the buffer to remove the extracted line and keep any remaining data for the next read.

- [ ] **Low-Level Functions**
	- [x] `ft_strchr(const char *s, int c)`: 
	      This function locates the first occurrence of a character in a string.
	- [x] `ft_strjoin`;
	      join two strings;
	- [x] `ft_strdup`;
	      duplicate a string;
	- [x] `malloc(size_t size)`: 
	      Dynamically allocates memory for the line and buffer;
	- [x] `free(void *ptr)`:
	       Releases allocated memory to avoid memory leaks;

#### b) Milestones

#### c) Submission
* Submit the completed code to the assigned Git repository. [cite: 20]
* Double-check file names for correctness. [cite: 57]