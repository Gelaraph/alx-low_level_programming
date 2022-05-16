# 0x0F. C - Function pointers

## Learning Objectives

General

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks

### [0. What's my name](./0-print_name.c)

- Write a function that prints a name.
  - Prototype: `void print_name(char *name, void (*f)(char *))`;

```
