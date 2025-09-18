# Libft
![42 Project](https://img.shields.io/badge/42-Project-blue)
![Language](https://img.shields.io/badge/C-0E7FC0?logo=c)

---

## 📌 Summary

- [About](#about)
- [Functions](#functions)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Directories structure](#directories-structure)
- [Author](#author)

---

<a id="about"></a>
## 📖 About

**Libft** is a project of 42 school.
It's about recoding a C library with many default functions like strlen or atoi. This project is the first of the Common Core in 42, who is usefull in many future projects.

---

<a id="functions"></a>
## ✨ Functions

| Function        | Man (link)                                                                 | Description |
|-----------------|----------------------------------------------------------------------------|-------------|
| ft_atoi         | [atoi](https://man7.org/linux/man-pages/man3/atoi.3.html)                  | transform ascii to int |
| ft_bzero        | [bzero](https://man7.org/linux/man-pages/man3/bzero.3.html)                | erases the data on the memory |
| ft_calloc       | [calloc](https://man7.org/linux/man-pages/man3/calloc.3.html)              | allocate memory and set all to NULL |
| ft_isalnum      | [isalnum](https://man7.org/linux/man-pages/man3/isalnum.3.html)            | check if the ascii value is alpha or numeric |
| ft_isalpha      | [isalpha](https://man7.org/linux/man-pages/man3/isalpha.3.html)            | check if the ascii value is alpha |
| ft_isascii      | [isascii](https://man7.org/linux/man-pages/man3/isascii.3.html)            | check if the value is ascii |
| ft_isdigit      | [isdigit](https://man7.org/linux/man-pages/man3/isdigit.3.html)            | check if the ascii value is numeric |
| ft_isprint      | [isprint](https://man7.org/linux/man-pages/man3/isprint.3.html)            | check if the ascii value is printable |
| ft_itoa         | —                                                                          | transform int to ascii (fonction perso) |
| ft_lstadd_back  | —                                                                          | add an element at the end of a linked list |
| ft_lstadd_front | —                                                                          | add an element at the begin of a linked list |
| ft_lstclear     | —                                                                          | clear a linked list |
| ft_lstdelone    | —                                                                          | delete an element of a linked list |
| ft_lstiter      | —                                                                          | apply a function on each element of a linked list |
| ft_lstlast      | —                                                                          | return the last element of a linked list |
| ft_lstmap       | —                                                                          | return a new linked list with transformed values |
| ft_lstnew       | —                                                                          | create a list with a content |
| ft_lstsize      | —                                                                          | return the size of the linked list |
| ft_memchr       | [memchr](https://man7.org/linux/man-pages/man3/memchr.3.html)              | scan memory until a char is found |
| ft_memcmp       | [memcmp](https://man7.org/linux/man-pages/man3/memcmp.3.html)              | compare two memory areas |
| ft_memcpy       | [memcpy](https://man7.org/linux/man-pages/man3/memcpy.3.html)              | copy memory (non-overlapping areas) |
| ft_memmove      | [memmove](https://man7.org/linux/man-pages/man3/memmove.3.html)            | copy memory (safe even if overlapping) |
| ft_memset       | [memset](https://man7.org/linux/man-pages/man3/memset.3.html)              | fill memory with a byte value |
| ft_putchar_fd   | [write](https://man7.org/linux/man-pages/man2/write.2.html)                | write a char in a fd |
| ft_putendl_fd   | —                                                                          | write a string with a newline in a fd (fonction perso) |
| ft_putnbr_fd    | —                                                                          | write a number in a fd (fonction perso) |
| ft_putstr_fd    | —                                                                          | write a string in a fd (fonction perso) |
| ft_split        | —                                                                          | split a string at each iteration of a char (fonction perso) |
| ft_strchr       | [strchr](https://man7.org/linux/man-pages/man3/strchr.3.html)              | return pointer to first occurrence of a char in a string |
| ft_strdup       | [strdup](https://man7.org/linux/man-pages/man3/strdup.3.html)              | duplicate a string (malloc + copy) |
| ft_striteri     | —                                                                          | apply a function on each char of string with its index (fonction perso) |
| ft_strjoin      | —                                                                          | concatenate two strings into a new one (malloc) |
| ft_strlcat      | [strlcat](https://man7.org/linux/man-pages/man3/strlcat.3.html)            | append string safely with size limit |
| ft_strlcpy      | [strlcpy](https://man7.org/linux/man-pages/man3/strlcpy.3.html)            | copy string safely with size limit |
| ft_strlen       | [strlen](https://man7.org/linux/man-pages/man3/strlen.3.html)              | return the size of the string |
| ft_strmapi      | —                                                                          | create a new string where each char is transformed by a function (fonction perso) |
| ft_strncmp      | [strncmp](https://man7.org/linux/man-pages/man3/strncmp.3.html)            | compare two strings up to n characters |
| ft_strnstr      | [strstr](https://man7.org/linux/man-pages/man3/strstr.3.html)              | find a substring in a string, up to n chars |
| ft_strrchr      | [strrchr](https://man7.org/linux/man-pages/man3/strrchr.3.html)            | return pointer to last occurrence of a char in a string |
| ft_strtrim      | —                                                                          | remove all characters from start/end of string that are in a charset (fonction perso) |
| ft_substr       | —                                                                          | extract a substring from a string (fonction perso) |
| ft_tolower      | [tolower](https://man7.org/linux/man-pages/man3/tolower.3.html)            | transform uppercase in lowercase |
| ft_toupper      | [toupper](https://man7.org/linux/man-pages/man3/toupper.3.html)            | transform lowercase in uppercase | 

---

<a id="installation"></a>
## ⚙️ Installation

**1. Clone the repository**

Clone the repository at the root of your project.

```bash
git clone git@github.com:qxxel/Libft.git;
cd Libft
```

**2. Compile the project**

```bash
make
```

---

<a id="utilisation"></a>
## 🕹️ Utilisation

**1. If you don't want to update the Libft or recompile each time**

You have to use the `.a` that you get from the `make` to compile with your program who use this library.

Exemple: `cc [your_file.c] libft/libft.a -o [your_project_name]`

Then you can launch your program and use the Libft !

**2. If you want to deeply connect your project with Libft**

You can add some lines in your `Makefile` to compile the Libft with your project.

```Makefile
# Add variables
LIBFTDIR = Libft
LIBFT = $(LIBFTDIR)/libft.a

[...]

# Check Libft files to recompile only if it's usefull
LIBFT_SRC = $(wildcard $(LIBFTDIR)/*.c) $(wildcard $(LIBFTDIR)/**/*.c)
LIBFT_HDR = $(wildcard $(LIBFTDIR)/*.h) $(wildcard $(LIBFTDIR)/**/*.h)
LIBFT_DEPS = $(LIBFT_SRC) $(LIBFT_HDR)

[...]

# Add the Libft rule to call its Makefile
$(LIBFT): $(LIBFT_DEPS)
	$(MAKE) -C $(LIBFTDIR)

[...]

# Add the libft.a in the compilation of your project
$(NAME): [your_objects] $(LIBFT)
	$(CC) $(CFLAGS) [your_objects] $(LIBFT) -o $@

# Call the clean of the Libft's Makefile
clean:
	[...]
	$(MAKE) -C $(LIBFTDIR) clean

# Call the fclean of the Libft's Makefile
fclean: clean
	[...]
	$(MAKE) -C $(LIBFTDIR) $@
```

Then you can launch `make` at the root of your project to compile it with Libft. Don't forget to `make` another time if you modify a file in ./Libft/

---

<a id="directories-structure"></a>
## 📂 Directories structure

```plaintext
📂 Libft
 ┣ 📂 includes     → headers files (.h)
 ┣ 📂 srcs         → sources files (.c)
 ┃  ┣ 📂 checkers  → functions who check a char
 ┃  ┣ 📂 display   → functions that use write
 ┃  ┣ 📂 list      → functions that apply on list
 ┃  ┣ 📂 memory    → functions who use directly memory
 ┃  ┣ 📂 others    → functions who do not enter on others categories
 ┃  ┗ 📂 string    → functions that take string as arguments
 ┣ Makefile
 ┗ README.md
```

---

<a id="author"></a>
## 👤 Author

* Axel – [GitHub](https://gitub.com/qxxel)
* 42 student - login: *agerbaud*