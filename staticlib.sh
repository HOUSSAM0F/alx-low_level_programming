#!/bin/bash

cp */0-isupper.c */0-memset.c */0-strcat.c */1-isdigit.c */1-memcpy.c */1-strncat.c */100-atoi.c */2-strchr.c */2-strlen.c */2-strncpy.c */3-islower.c */3-puts.c */3-strcmp.c */3-strspn.c */4-isalpha.c */4-strpbrk.c */5-strstr.c */6-abs.c */9-strcpy.c */_putchar.c ./0x09-static_libraries/
cd 0x09-static_libraries
echo "#ifndef MAIN_H" > main.h
echo "#define MAIN_H" >> main.h
echo "" >> main.h
echo "int _putchar(char c);" >> main.h
echo "int _islower(int c);" >> main.h
echo "int _isalpha(int c);" >> main.h
echo "int _abs(int n);" >> main.h
echo "int _isupper(int c);" >> main.h
echo "int _isdigit(int c);" >> main.h
echo "int _strlen(char *s);" >> main.h
echo "void _puts(char *s);" >> main.h
echo "char *_strcpy(char *dest, char *src);" >> main.h
echo "int _atoi(char *s);" >> main.h
echo "char *_strcat(char *dest, char *src);" >> main.h
echo "char *_strncat(char *dest, char *src, int n);" >> main.h
echo "char *_strncpy(char *dest, char *src, int n);" >> main.h
echo "int _strcmp(char *s1, char *s2);" >> main.h
echo "char *_memset(char *s, char b, unsigned int n);" >> main.h
echo "char *_memcpy(char *dest, char *src, unsigned int n);" >> main.h
echo "char *_strchr(char *s, char c);" >> main.h
echo "unsigned int _strspn(char *s, char *accept);" >> main.h
echo "char *_strpbrk(char *s, char *accept);" >> main.h
echo "char *_strstr(char *haystack, char *needle);" >> main.h
echo "" >> main.h
echo "#endif /* MAIN_H */" >> main.h
gcc -c *.c
ar rcs libmy.a *.o
