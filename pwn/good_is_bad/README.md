# good_is_bad

**NOTE**: If you try to exploit the 64-bit executable, it comes with an unexpected twist :P

## 0. Description

Can your own family go rogue?

Hint: Using "good" functions to do "bad" things.
Hint1: Have you heard of ret2libc?

**NOTE**: Disable ASLR for this challenge.

## 1. Points: 350

## 2. Compilation
```
$ gcc good_is_bad.c -o good_is_bad.c -fno-stack-protector
```
