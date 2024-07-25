<a id="top"></a>

![](/zimg/42.svg)L'eco 42![42](/zimg/42.svg)L'ecole 42![42](/zimg/42.svg)L'ecole 42![42](/zimg/42.svg)L'ecole 42![42](/zimg/42.svg)L'eco42![42](/zimg/42.svg)  
---
--- 
<p align="center"><img src="https://github.com/diegonmarcos/L-ecole-42/raw/main/zimg/peng.jpg" alt="" width="600"></p>

<p align="center">
	• <a href="#1">About the School</a> •
	<a href="#2">The Curricullum</a> •
	<a href="#3">School Procedures</a> •

</p>

# Table of Content
```
42 School/
├── About 42
│  ├── Pedagogy
│  │  └── Peer-to-Peer Learning
│  ├── Curriculum Overview
│  │  └── The Piscine
│  └── Campuses Worldwide
│    └── ...
├── The Piscine
│  ├── Admission Requirements
│  ├── Piscine Timeline
│  ├── Piscine Projects
│  │  └── ...
│  └── Evaluation Process
├── Common Core Curriculum
│  ├── Branches
│  │  └── Algorithms
│  │  └── Graphics
│  │  └── ... 
│  ├── Projects
│  │  └── ...
│  └── Exams
└── Specializations
  ├── Available Tracks
  │  └── AI
  │  └── Cybersecurity
  │  └── ...
  └── Choosing a Path
```

---

<h1 id="1">About the School</h1>

- # ![](zimg/42.svg): The Code Odyssey 🚀
    Welcome to my 42 journey! This ain't your average school. We're diving deep into code, collaboration, and peer-driven learning.
  - ### About 42: Where the Wild Things Code 🌐
    42 is a global network of tuition-free coding schools.  Think of it as a coding bootcamp on steroids – intense, hands-on, and focused on real-world skills. There are no teachers, no lectures... just you, your peers, and a mountain of challenges.Learn more on the official [42 website](https://42.fr/en).
  - ### The Piscine: Sink or Swim 🏊‍♀️
     Admission starts with the "Piscine" (French for swimming pool). It's a month-long coding immersion experience designed to test your grit, problem-solving, and ability to learn independently.  It's tough, but those who make it through emerge as resilient coders.

![](up2u.png)
---


---
- ## The ![](zimg/42.svg) Curriculum: Your Code Adventure 🗺️ - 
  Once you've survived the Piscine, the real adventure begins! The curriculum is split into phases:

- ### Common Core: 18 Months 🏗️
  This is where you build your foundation with C and C++, tackling projects that cover:  
  Skills:
  - **Algorithms & Data Structures**: The building blocks of efficient code.
  - **Unix & Systems Programming**: Understanding the inner workings of your computer.
  - **Imperative Programming (C)**: The language that gets you close to the metal.
  - **Object-Oriented Programming (C++)**: A powerful paradigm for complex systems.
  - **Networking & Web Development:**  From sockets to building web apps.
  - **Databases & Graphical Programming:** Storing and visualizing data.  
 
  ![GIF](zimg/skills.gif)
>Skills to be developed.

  
- ### Professional Experience: 4-6 Months 💼
  A internship that solidifies your skills and builds your network.

- ### Specialization: 18 Months 🎯
  Choose a path to become a master in one of these areas:
  -**Operating Systems**
  - **Artificial Intelligence**
  - **Cybersecurity**
  - **Game Development**
  - **Graphical Programming**
  - **Web and Mobile Development**


- ### Final Internship: 6 Months 🚀
  Launch your career with a final internship that solidifies your skills and builds your network.

---

Let's code!

```C
#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len);
	return (str);
}
```

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>


<h1 id="2">The Curricullum</h1>

## Projects by Topic

### Topics:

- **Fundamental C Libraries & Tools**  
- **System Administration & Networking**  
- **Algorithms & Data Structures**  
- **Graphics & Visualization**  
- **Unix Processes & Communication**  
- **Concurrency & Parallelism**  
- **Game Development & AI**  
- **Object-Oriented Programming (C++)**
<br>
<br>
<br>

### Fundamental C Libraries & Tools

*   **Reloaded:**  _Piscine functions._
*   **Libft:**  _Your very own C library. Recreate essential functions like string manipulation, memory management, and linked lists._
*   **get_next_line (GNL):**  _Learn to read files efficiently, line by line. A key skill for working with large datasets or input streams._
*   **ft_printf:**  _Craft your own version of the standard printf function. Deep dive into formatting output and variadic functions._

### System Administration & Networking

*   **Born2BeRoot (B2BR):**  _Get hands-on experience setting up a virtual machine from scratch, configuring services, and hardening it for security._
*   **NetPractice:**  _A series of exercises covering network protocols, sockets, and inter-process communication (IPC). Build simple clients and servers._
*   **Inception:**  _A unique project involving virtual machines and system-level programming. It tests your understanding of memory management and processes._
  *   **Philosophers:**  _Implement a classic synchronization problem with dining philosophers. Learn to avoid deadlocks and race conditions. Concurrency & Parallelism._
*  _Choose a networking project to practice concurrent programming:_
    *   **Webserv:** _Build a basic web server that handles multiple client requests._
    *   **ft_IRC:** _Create your own Internet Relay Chat (IRC) server for real-time messaging._

### Algorithms & Data Structures

*   **push_swap:**  _Implement a sorting algorithm using only two stacks and a limited set of operations. A challenging puzzle to test your problem-solving skills._

### Graphics & Visualization

*   _Choose one to explore basic 2D graphics:_
    *   **fdf:** _Visualize wireframe models in 3D using isometric projection._
    *   **so_long:** _Create a simple 2D game using a graphics library._
    *   **fract-ol:** _Generate beautiful fractal images (Mandelbrot, Julia sets, etc.)._
*   _Choos one to Dive into 3D graphics!_
    *   **Cub3D:** _Build a "Doom"-like first-person perspective engine with raycasting._
    *   **MiniRT:** _Create a ray tracer to render realistic 3D scenes with lighting effects._

### Unix Processes & Communication

*   _Choose a project focused on inter-process communication:_
    *   **pipex:** _Work with pipes to chain commands and redirect input/output._
    *   **minitalk:** _Explore signal handling and bitwise operations for basic communication between processes._
*   **Minishell:**  _Craft your own simplified Unix shell. Handle commands, arguments, pipes, redirections, and environment variables._


### Game Development & AI

*   **Transcendence:**  _Design and build a multiplayer online role-playing game (MMORPG). A massive project encompassing game logic, networking, and UI design._

### Object-Oriented Programming (C++)

*   **CPP 00-04** & **CPP 05-09:**  _A series of modules introducing C++ concepts like classes, inheritance, templates, and the Standard Template Library (STL)._
  <br>
<details>
<summary>📚 More info</summary>
	
[Back to Top](#top)  

</details>  

[Back to Top](#top)
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>


<h1 id="3">Curriculum Hours</h1>

| Topic                               | Hours | Months | Percentage |
| ----------------------------------- | ----- | ------ | --------- |
| _Piscine_                              | 100   | 1     |           |
| _Common Core_                          | 1,958 | 11    | 63%       |
| _Specialization_                       | 1,029 | 6     | 33%       |
| **Total**                            | **3,087** | **17** | **100%**   |
|                                     |      |      |           |

| Topic                               | Hours | Months | Percentage |
| ----------------------------------- | ----- | ------ | --------- |
| _Fundamental C Libraries & Tools_     | 38   | 3     | 12%       |
| _Unix Processes & Communication_   | 260  | 1     | 8%        |
| _System Administration & Networking_ | 55   | 1     | 3%        |
| | | | |
| _Algorithms & Data Structures_       | 630  | 0     | 2%        |
| _Object-Oriented Programming (C++)_  | 210  | 1     | 7%        |
| | | | |
| _Game Development & AI_             | 25   | 1     | 1%        |
| _Graphics & Visualization_           | 340  | 2     | 11%       |
|                                     |      |      |           |
| _Specialization_                       | 1,029 | 6     | 33%       |


|_Hours Per day average_  | 6 |  
<br>
 <details>
<summary>📚 More info</summary>
	
[Back to Top](#top)  

</details> 

[Back to Top](#top)

<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

<h1 id="3">School Procedures</h1>

---
## NORMINETTE
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

* [42 Norms](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool to respect the code norm, made by 42. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

---



<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>



---



---
<br>




# About me
<a href='https://profile.intra.42.fr/users/dnepomuc' target="_blank"><img alt='42' src='https://img.shields.io/badge/Profile-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>  

<a href='https://github.com/diegonmarcos' target="_blank"><img alt='42 profile' height="22" src='https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://github.com/diegonmarcos'/></a>  
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>
<br>

[![dnepomuc's 42 stats](https://badge.mediaplus.ma/darkblue/dnepomuc?1337Badge=off&UM6P=off)](https://profile.intra.42.fr/users/dnepomuc)
