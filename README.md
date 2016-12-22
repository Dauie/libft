# libft

This started as my 1st Project @ 42USA but is now just a continuously growing
library that is product of my time here at 42.
Please use my code for anything you like. Modify it for your own use, etc.
If you have suggestions for improvements, those are welcome just the same.
My email can be found at the top of each file and at the bottom of this
document.

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

searches given string for n bytes and locates first occurrence of
character c. Function returns pointer to the first found occurrence character c
or  pointer to NULL.

#### ft_memcmp:

compares string one against string two for n bytes. Returns zero if
the strings are identical, or difference between first two differing bytes.

#### ft_strlen:

Takes in a string and returns an count of characters until a
terminating '\0' character.

#### ft_strdup:

Function allocates sufficient memory for a copy of the given
string, does the copy, and returns a pointer to it.

#### ft_strcpy:

copies string two into string on (including terminating '\0'
character). Function returns string one.

#### ft_strncpy:

copies n characters from string two into string one. If the length
string two is less than string one the remainder of string one is filled with
'\0' characters. else string one is not terminated. Function returns s1.

#### ft_strcat:

Function append a copy of the null-terminated string two to the end
of null-terminated string one then adds a '\0' character.

#### ft_strncat:

Function appends n characters of string two to string one and
terminate. Function returns string one.

#### ft_strlcat:

Functions appends at max (size - strlen(dst) - 1) characters of
dst string to src string and NULL-terminates the string. Function return total
length of string it tried to create.

#### ft_strchr:

locates first occurrence of character c within s string. null
character is part of the string. Return pointer to the first occurrence of c
character or NULL.

#### ft_strrchr:

locates last occurrence of character c within s string. null
character is part of string. Function return pointer to last occurrence of
character c or NULL.

#### ft_strstr:

Locates first occurrence of string two inside of string one. Returns
string one if string two is empty. Returns NULL if no match, else pointer to
start of string one.

#### ft_strnstr:

Locates first occurrence of string two inside of string one for n
bytes of string two. Returns string one if string two is empty. Returns NULL if
no match, else pointer to start of string one.

#### ft_strcmp:

lexicographically comparison of string one and string two. Returns 0
if strings are identical to each other, one if the comparison fails.

#### ft_strncmp:

lexicographically comparison of string one and string two for n
bytes. Returns 0 if strings are identical to each other, one if the comparison
fails.

#### ft_atoi:

Function converts given string to integer.

#### ft_isalpha:

Function tests for any character in alphabet, upper or lower case.

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

Function allocates memory equal to size of 'size'. Returns a
pointer to new address of allocated space.

#### ft_memdel:

Function utilizes free() to return memory that is pointed to by
**ap. Function is of void return type.

#### ft_strnew:

Function allocates new memory space of size 'size' and fills it
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

Function applies *f(char) to every character in array and creates
a fresh string to store the return of *f() on each character. Function returns
a pointer to new string.

#### ft_strmapi:

Function applies f*(unsigned int, char) to every character in
array and creates fresh string to store the return of *f() on each character.
Function returns pointer to the fresh string.

#### ft_strequ:

Function does lexicographical comparison between string one and
string two. Function returns (1) if strings equal, else returns (0).

#### ft_strnequ:

Function does lexicographical comparison of strings for n byres.
Function returns (1) if strings are equal, else returns (0).

#### ft_strsub:

Function allocates memory equal to size of s, and copies n bytes.
Return copy of s.

#### ft_strjoin:

Function allocates memory equal to the size of the combined
lengths of the strings and returns the string one and string two concatenated
and null-terminated. Returns result or NULL.

#### ft_strtrim:

Function allocates memory equal to the size of the given string
without space at the beginning or end, then copies the string without space at
the beginning or end. Returns the trimmed string, or NULL.

#### ft_strsplit:

Function takes in a string, separates it into entities according
to the delimeter c and returns list of arrays. if no c, list is composed of
single array. Return new array or NULL.

#### ft_itoa:

Function takes int n converts it to a character string and returns
new array of chars.

#### ft_putchar:

Function puts single character to the standard output.

/***
This code is unlicensed.
Code is free to be used and modified, but please pay mention to its author.
All code authored by Robert Wyatt Lutt - Ausdauerr@gmail.com
***/