# pwn

**NOTE**: Solve miscellaneous challenges first and then come to pwn.

**NOTE**: The architecture executables are build for vary from challenge to challenge. Suppose a 64-bit executable is given, but you have a 32-bit machine, refer to the challenge's README's Compilation steps to get the 32-bit executable.

Exploits for 32-bit and 64-bit variants are generally different. You first need to see its architecture and then get to exploit dev.

Some challenges become inherently hard to exploit when we try their 64-bit variant. Try understanding why it happens.

## 0. Enabling ASLR

```
$ sudo su root
[sudo] password for adwi:
# echo 2 > /proc/sys/kernel/randomize_va_space
#
```

## 1. Disabling ASLR
```
$ sudo su root
[sudo] password for adwi:
# echo 0 > /proc/sys/kernel/randomize_va_space
#
```

## 2. How to get 32-bit executable on a 64-bit machine?
```
$ sudo apt-get install gcc-multilib
$ gcc source_file.c -o source_file -m32
```
