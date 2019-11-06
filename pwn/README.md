# pwn

**NOTE**: Solve miscellaneous challenges first and then come to pwn.

**NOTE**: The architecture executables are build for vary from challenge to challenge. Suppose a 64-bit executable is given, but you have a 32-bit machine, refer to the challenge's README's Compilation steps to get the 32-bit executable.

Exploits for 32-bit and 64-bit variants are generally different. You first need to see its architecture and then get to exploit dev.

Some challenges become inherently hard to exploit when we try their 64-bit variant. Try understanding why it happens.

List of challenges in increasing order of difficulty.

1. [be0](./be0)
2. [jump_anywhere](./jump_anywhere)
2. [bof0](./bof0)
3. [bof2](./bof2)
4. [bof1](./bof1)
5. [can_you_fake_it](./can_you_fake_it)
6. [data_write](./data_write)
7. [shellcode](./shellcode)
8. [write_anywhere](./write_anywhere)
9. [good_is_bad](./good_is_bad)
10. [catch_the_canary](./catch_the_canary)
11. [ropshellcode](./ropshellcode)
12. [fake_n_chain](./fake_n_chain)
14. [no_one_will_mprotect_you](./no_one_will_mprotect_you)
15. [ForGOT_this](./ForGOT_this)



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
