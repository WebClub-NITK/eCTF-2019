#!/usr/bin/env python3

import socket
import sys

def are_you_endian() : 

    print("Are you a true endian? Let us see!", flush = True)

    c = 0x98
    s = 56392
    i = 395639461
    l = 876556789986567

    true_endian = False

    while True: 
        print("What is the little-endian version of ", hex(c), " : ", end = '', flush = True)
        X = int(input())
        if X != c : 
            true_endian = False
            break

        
        print("What is the big-endian version of ", hex(s), " : ", end = '', flush = True)
        X = int(input())
        if X != socket.htons(s) : 
            true_endian = False
            break
        
        print("What is the little-endian version of ", hex(i), " : ", end = '', flush = True)
        X = int(input())
        if X != socket.ntohl(i) : 
            true_endian = False
            break

        true_endian = True

    if true_endian == True: 
        print("You are a true endian!! There you go!", flush = True)
        print("eCTF{b31ng_4_tru3_end1an_l$_6amn_1mp0rt4nt_0xanmkser}", flush = True)
    
    else: 
        print("You are an anti-endian :P . Try again!", flush = True)

    sys.exit()


if __name__ == '__main__' : 
    
    are_you_endian()
