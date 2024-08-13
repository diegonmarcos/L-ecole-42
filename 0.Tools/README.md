<a id="top"></a>
![](../zimg/42.svg)L'eco 42![42](../zimg/42.svg)L'ecole 42![42](../zimg/42.svg)L'ecole 42![42](../zimg/42.svg)L'ecole 42![42](../zimg/42.svg)L'eco42![42](../zimg/42.svg)  
---
--- 
<p align="center"><img src="https://github.com/diegonmarcos/L-ecole-42/raw/main/zimg/tools.png" alt="" width="600"></p>

<p align="center">
	• <a href="#1">Coding Tools</a> •
	<a href="#2">Workspace</a> •
	<a href="#1">Designing and Doc</a> •
	<a href="#1">Learning</a> •


</p>

<br>
<br>
<br>
<br>
<br>
<br>

#### Essential Coding Tools for the 42 Curriculum

> To excel in the 42 coding curriculum
<br>
<br>
<br>



<h2>Table of Contents</h2>

<details>
  <summary>Coding Tools</summary>
  <ul>
    <li>
        <details>
            <summary>Tester - Memory Leak</summary>
            <ul>
                <li>AddressSanitizer (ASan)</li>
                <li>Valgrind</li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Debuggers</summary>
            <ul>
                <li>GDB (GNU Debugger)</li>
                <li>LLDB</li>
                <li>Valgrind</li>
                <li>ONLINE GDB</li>
                <li>PYTHONTU</li>
                <li>VS Code Debugger</li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Code Quality Tools and Others</summary>
            <ul>
                <li>Norminette</li>
                <li>Francinette (Paco)</li>
                <li>cppcheck</li>
                <li>clang-format</li>
            </ul>
        </details>
    </li>
  </ul>
</details>

<details>
  <summary>Workspace</summary>
  <ul>
    <li>
        <details>
            <summary>Shell Enhancements</summary>
            <ul>
                <li>Oh My Zsh</li>
                <li>Zsh Plugins
                    <ul>
                        <li>zsh-autosuggestions</li>
                        <li>zsh-syntax-highlighting</li>
                        <li>fzf</li>
                    </ul>
                </li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Editors and IDEs</summary>
            <ul>
                <li>Vim
                    <ul>
                        <li>.vimrc</li>
                        <li>.vimrc_42header</li>
                        <li>NeoVim</li>
                        <li>NERDtree - Vim Folder Side bar</li>
                    </ul>
                </li>
                <li>IDX GOOGLE and REPLIT</li>
                <li>JETBRAINS IDE</li>
                <li>Visual Studio Code
                    <ul>
                        <li>Tab indentation vs spaces</li>
                        <li>Extensions list
                            <ul>
                                <li>JetBrains VS CODE Plugin</li>
                            </ul>
                        </li>
                    </ul>
                </li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Custom Shell Scripts (Bash)</summary>
            <ul>
                <li>gcp.sh</li>
                <li>GCL</li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>UNIX</summary>
            <ul>
                <li>find</li>
                <li>sed & awk</li>
                <li>grep</li>
                <li>xargs</li>
            </ul>
        </details>
    </li>
  </ul>
</details>

<details>
  <summary>Designing and Documentation</summary>
  <ul>
    <li>General Tools</li>
    <li>
        <details>
            <summary>Flowcharts and Drawing</summary>
            <ul>
                <li>Excalidraw</li>
                <li>Diagrams</li>
                <li>Code Diagram</li>
                <li>ASCII FLOW</li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Documentation</summary>
            <ul>
                <li>Doxygen</li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Version Control</summary>
            <ul>
                <li>Git
                    <ul>
                        <li>.gitignore</li>
                        <li>.gitimodules</li>
                    </ul>
                </li>
                <li>Git GUIs (GitHub Desktop / GitKraken)</li>
            </ul>
        </details>
    </li>
  </ul>
</details>

<details>
  <summary>Learning Tools</summary>
  <ul>
    <li>
        <details>
            <summary>Games</summary>
            <ul>
                <li>CODINGAME</li>
                <li>CODEWARS</li>
                <li>SKYSCRAPPER - RUSH 01</li>
            </ul>
        </details>
    </li>
    <li>
        <details>
            <summary>Exercises</summary>
            <ul>
                <li>Grade.me</li>
            </ul>
        </details>
    </li>
  </ul>
</details> 


<br>
<br>
<br>

---


# CODING TOOLS

### Tester - Memory Leak
- AddressSanitizer (ASan)
- Valgrind <details>
- <summary>More</summary>
Valgrind is a powerful tool for detecting memory errors and leaks in your programs. Here's a breakdown of how to use it:

**1. Compile Your Program with Debugging Information**

* When you compile your program, include the `-g` flag to add debugging information. This will allow Valgrind to associate memory errors with specific lines in your code.

**2. Run Your Program Under Valgrind**

* Use Valgrind as a wrapper for your executable. The basic syntax is:
   ```bash
   valgrind [valgrind-options] your-program [program-arguments]
   ```

**3. Interpret Valgrind's Output**

* Valgrind will provide a detailed report of any memory errors or leaks it detects. Pay attention to:
    * **Error Messages:**  These will indicate the type of error (e.g., invalid read/write, use of uninitialized values), the memory address involved, and the stack trace leading to the error.
    * **Leak Summaries:** At the end of your program's execution, Valgrind will provide a summary of any memory leaks it found, including the number of bytes leaked and the functions responsible for the allocations.

**Important Valgrind Options**

* `--leak-check=full`:  Enables detailed leak checking.
* `--show-reachable=yes`:  Shows possibly lost memory (memory still reachable but potentially leaked).
* `--track-origins=yes`:  Tracks the origin of uninitialized values (can be slower).
* `--log-file=filename`:  Writes Valgrind's output to a specified file.

**Example**

```bash
gcc -g my_program.c -o my_program
valgrind --leak-check=full ./my_program
```

**Key Points**

* Valgrind is most effective when used with programs compiled in debug mode (`-g`).
* It can be helpful to run Valgrind with different options to get more detailed information about specific types of errors.
* Valgrind can be a bit slower than running your program normally, but the benefits of finding and fixing memory issues usually outweigh the performance impact.

**Additional Resources**

* The Valgrind Quick Start Guide: [https://valgrind.org/docs/manual/quick-start.html](https://valgrind.org/docs/manual/quick-start.html)
* The Valgrind User Manual: [https://valgrind.org/docs/manual/manual.html](https://valgrind.org/docs/manual/manual.html)

</ul>
</details
  
### [Debuggers ](Debugger.md)
- **GDB(GNU Debugger):** A robust debugger for dissecting your code's execution and hunting down those pesky bugs.
- **LLDB:** A similar debugger to GDB, offering an alternative for those who prefer it.
- **Valgrind:** An invaluable tool for detecting memory leaks and other memory-related issues.
- OLINE GDB - https://www.onlinegdb.com/online_c_compiler
- PYTHONTU - https://pythontutor.com/c.html#mode=edit
- VS Code Debugg
 
### [Code Quality Toolsa nd Others](CodeQuality.md)
- **Norminette:** The official 42 code style enforcer. Mastering it is crucial for adhering to the strict style guidelines.
- **Francinette (Paco):** An alternative to Norminette with automatic fixing capabilities and smoother integration with editors.
- **cppcheck:** A static analysis tool for C/C++ code to detect potential bugs and errors early on.
- **clang-format:** Automatically formats your code to maintain consistent style and readability.
<br>

<br>

<br>

# WORKSPACE
### [Shell Enhancements](Shell.md)

- **Oh My Zsh:** A framework that supercharges your Zsh shell with themes, plugins, and customizations.
- **Zsh Plugins:**
    - **zsh-autosuggestions:** Intelligently suggests commands as you type.
    - **zsh-syntax-highlighting:** Color-codes commands to easily spot errors.
    - **fzf:** A blazing-fast fuzzy finder for files, commands, and more.
https://github.com/junegunn/fzf  

## Editors and IDEs

- **Vim:** A highly configurable text editor renowned for its speed and efficiency.
	- [.vimrc](p.vimrc.md)
	- [.vimrc_42header](p.vimrc_42header.md)
   	- [NeoVim](https://github.com/neovim/neovim/blob/master/INSTALL.md)
   	- **NERDtree - Vim Folder Side bar**  
 		- [NERDtree](https://github.com/preservim/nerdtree)
- **IDX GOOGLE and REPLIT:** Cloud IDE  
- **JETBRAINS IDE:** A modern, user-friendly editor with a vast ecosystem of extensions for various languages and tools.
- **Visual Studio Code:** A modern, user-friendly editor with a vast ecosystem of extensions for various languages and tools.
	- [Tab indentation vs spaces](VSCode.md)
	- [Extensions list](ExtList.md)
 		- [JetBrains VS COODE Plugin](https://www.jetbrains.com/help/qodana/vscode.html))  

### **[Custom Shell Scripts (Bash) ](Scripts.md)** 

- **gcp.sh:** gitt add . git commit -m ¨message" git push
- **GCL:** Def Macro git clone = GCL

### UNIX
- **find:** A versatile command for locating files and directories based on various criteria.
- **sed & awk:** Text processing powerhouses for manipulating and transforming file contents or command output.
- **grep:** Quickly search through files for specific patterns or lines of text.
- **xargs:** Converts standard input into arguments for other commands, enabling powerful chaining and automation.

### **OS** 
### **[Linux](Linux.md)** 

<br>

<br>

<br>


# DESIGNING AND DOCUMENTATION
- [General Tools](General.md)


### Flowcharts and Drawning
- [Excalidraw](https://excalidraw.com/)
- [Diragrams](https://app.diagrams.net/)
- [Code Diagram](https://text-to-diagram.com/?b=mermaid&example=tables  )
- [ASCII FLOW](https://asciiflow.com/#/)

### Documentation
- **Doxygen:** Extract documentation directly from your code comments to create comprehensive guides and references.

### Version Control
- **Git:** The indispensable version control system at 42. Learn it inside-out for managing project history and collaborating effectively.
	- [.gitignore](p.gitignore.md)
	- [.gitimodules](p.gitmodules.md)
- **Git GUIs (GitHub Desktop / GitKraken)**




<br>

<br>

<br>


# LEARNING TOOLS

### Games
- [CODIGN GAME](https://www.codingame.com/start/)
- [CODE WARS](https://www.codewars.com/)
- [SKYSCARPPER - RUSH 01](https://es.puzzle-skyscrapers.com/)

### Exercises
- [**Grade.me** ](https://grademe.fr/) exams



<h2>OTHERS</h2>

<details>
  <summary>General 42 Information</summary>
  <ul>
    <li>Information and Facts</li>
    <li>Trivia</li>
    <li>Rewards</li>
    <li>Network</li>
    <li>Social</li>
  </ul>
</details>

<details>
  <summary>Curriculum & Learning</summary>
  <ul>
    <li>Piscine and Common Core</li>
    <li>Exams</li>
    <li>Peer-To-Peer</li>
  </ul>
</details>

<details>
  <summary>Tools & Resources</summary>
  <ul>
    <li>Websites & Guides</li>
    <li>Extensions</li>
    <li>Grammar</li>
    <li>Browser</li>
    <li>Apps</li>
    <li>Readme</li>
    <li>Productivity</li>
    <li>Others</li>
  </ul>
</details>

<details>
  <summary>Miscellaneous</summary>
  <ul>
    <li>Wikimedia Foundation</li>
    <li>Campuses</li>
    <li>Artificial Intelligence</li>
    <li>Educational Resources</li>
    <li>Design Tools</li>
    <li>Entertainment</li>
    <li>Development Tools</li>
    <li>Others</li>
  </ul>
</details>







