# no_one_will_mprotect_you

**NOTE**: There are multiple ways to solve the challenge. But exploiting it the way explained in the description will help you unlock a new way of exploitation, one which is more practical.

## 0. Description

You probably bypassed W^X in the **ropshellcode** challenge. Can you **defeat** it here?

Hint: You somehow need to run shellcode. The clue of how to do it is somewhere here :P

## 1. Points: 500

## 2. Compilation
```
$ gcc no_one_will_mprotect_you.c -o no_one_will_mprotect_you -fno-stack-protector --static
```

