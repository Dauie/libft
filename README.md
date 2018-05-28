# libft

Libft is a personal standard library written in C. I am continuously adding to it as I write the majority of my projects with it. The reason I did this is to learn from the ground up the basics of the C programming language. I've written it all with the intent of it being as human readable as possible, but you can find a description for the majority of the function below. 

#Libft - Descriptions

#### ft_memset:

Function will allocate space in memory equal to size of n and set the
 entire region to the given value, regardless of the data type.

#### ft_bzero:

This function will zero bytes of the string. if length is zero bzero()
does nothing.

#### ft_memccpy:

copies n bytes from string one to string two unless character c
occurs in s2. The function returns pointer to space after the first occurrence
of character c  or pointer to NULL.

#### ft_memmove:

Function copies n bytes from string two to string one, regardless
of data type. Function returns string one.

#### ft_memchr:

searches the given string for n bytes and locates the first occurrence of
character c. The function returns pointer to the first found occurrence character c
or pointer to NULL.

#### ft_memcmp:

compares string one against string two for n bytes. Returns zero if
the strings are identical, or difference between first two differing bytes.

#### ft_strlen:

Takes in a string and returns a count of characters until a
terminating '\0' character.

#### ft_strdup:

Function allocates sufficient memory for a copy of the given
string, does the copy, and returns a pointer to it.

#### ft_strcpy:

copies string two into the string on (including terminating '\0'
character). The function returns string one.

#### ft_strncpy:

copies n characters from string two into string one. If the length
string two is less than string one the remainder of string one is filled with
'\0' characters. else string one is not terminated. The function returns s1.

#### ft_strcat:

Function append a copy of the null-terminated string two to the end
of null-terminated string one then adds a '\0' character.

#### ft_strncat:

Function appends n characters of string two to string one and
terminate. The function returns string one.

#### ft_strlcat:

Functions append at max (size - strlen(dst) - 1) characters of
dst string to src string and NULL-terminates the string. Function return total
length of string it tried to create.

#### ft_strchr:

locates the first occurrence of character c within s string. A null
character is part of the string. Return pointer to the first occurrence of c
character or NULL.

#### ft_strrchr:

locates the last occurrence of character c within s string. a null
character is part of the string. Function return pointer to the last occurrence of
character c or NULL.

#### ft_strstr:

Locates the first occurrence of string two inside of string one. Returns
string one if string two is empty. Returns NULL if no match, else pointer to
start of string one.

#### ft_strnstr:

Locates the first occurrence of string two inside of string one for n
bytes of string two. Returns string one if string two is empty. Returns NULL if
no match, else pointer to start of string one.

#### ft_strcmp:

lexicographically comparison of string one and string two. Returns 0
if strings are identical to each other, one if the comparison fails.

#### ft_strncmp:

lexicographical comparison of string one and string two for n
bytes. Returns 0 if strings are identical to each other, one if the comparison
fails.

#### ft_atoi:

Function converts given string to integer.

#### ft_isalpha:

Function tests for any character in the alphabet, upper or lower case.

#### ft_isdigit:

Function tests for decimal digit character from '0' to '9'.

#### ft_isalnum:

Function tests for alpha or digit character.

#### ft_isascii:

Function tests for any character between 0 and octal 0177 inclusive.

#### ft_isprint:

Function tests for any printing character from octal 040 to 176
inclusive.

#### ft_toupper:

Function converts lower-case alpha to upper-case.

#### ft_tolower:

Function converts upper-case alpha to lower-case

#### ft_memalloc:

The function allocates memory equal to the size of 'size'. Returns a
pointer to the new address of allocated space.

#### ft_memdel:

Function utilizes free() to return memory that is pointed to by
**ap. Function is of void return type.

#### ft_strnew:

The function allocates new memory space of size 'size' and fills it
with '\0'. Returns pointer to new space.

#### ft_strdel:

Function utilizes free() on character array given and places pointer
to NULL. No return.

#### ft_strclr:

Function fills given memory area with '\0'. No return.

#### ft_striter:

Function applies provided f(char *) to every character in array s.
No return.

#### ft_striteri:

Function applies f(unsigned int, char *) to every character in
array s. No return.

#### ft_strmap:

The function applies *f(char) to every character in the array and creates
a fresh string to store the return of *f() on each character. The function returns
a pointer to the new string.

#### ft_strmapi:

Function applies f*(unsigned int, char) to every character in
array and creates a fresh string to store the return of *f() on each character.
The function returns a pointer to the fresh string.

#### ft_strequ:

The function does a lexicographical comparison between string one and
string two. Function returns (1) if strings equal, else returns (0).

#### ft_strnequ:

The function does a lexicographical comparison of strings for n byres.
Function returns (1) if strings are equal, else returns (0).

#### ft_strsub:

The function allocates memory equal to size of s, and copies n bytes.
Return copy of s.

#### ft_strjoin:

The function allocates memory equal to the size of the combined
lengths of the strings and returns the string one and string two concatenated
and null-terminated. Returns result or NULL.

#### ft_strtrim:

The function allocates memory equal to the size of the given string
without space at the beginning or end, then copies the string without space at
the beginning or end. Returns the trimmed string, or NULL.

#### ft_strsplit:

The function takes in a string, separates it into entities according
to the delimiter c and returns a list of arrays. if no c, the list is  
composed of a single array. Return new array or NULL.

#### ft_itoa:

Function takes int n converts it to a character string and returns
a new array of chars.

#### ft_putchar:

Function puts the single character to the standard output.

#### ft_tbldup:

The function receives a char** and a length. ft_tbldup will then allocate a new
memory space the same size as the table given, copy over the contents, and
return a pointer at the beginning of the new table.

#### ft_tblrmline:

Table manipulation function that will take a char** tbl, a char *rm,
and an int len. ft_tblrmline will allocate a new space the size
of the table given minus one line, then proceed to copy over 
the contents excluding lines identically matching char *rm.

#### ft_crafttbl

This is a variadic function that will take in an int len, and len
number of char *s. A new char ** will be allocated the length of len
and all char *s entered as arguments will be copied into the table
and returned.

#### ft_tbllen

Function will take a char** as an argument and return an int representing
the length of the table.

#### ft_tblrepline

ft_tblrepline will take in a char **tbl, a char * substr, and a char *
repline. If char *substr is found in char **tbl, it will be replaced in-place.
Nothing is returned.

#### ft_printf

see 'man printf'

#### gnl

The gnl function will take a const int fd, and a char **line.
gnl will open the file descriptor given, and read from it until
a newline character is found. Content up to the newline character
will be given to 'line'.
Either a 1, 0, or -1 will be returned.
1 in the case there is more content to be had from fd.
0 in the case of EOF or end of the file.
-1 in the case of error.


## slowly going to get all of the documentation done.

/***
This code is unlicensed.
The code is free to be used and modified, but please pay mention to its author.
All code authored by Robert Wyatt Lutt - Ausdauerr@gmail.com
***/
