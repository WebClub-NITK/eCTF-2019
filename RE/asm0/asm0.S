;
; Challenge: asm0

section .text
global _start

_start: 
	mov eax, 0x00
	mov ebx, 0x00
	mov ecx, 0x00
	mov edx, 0x00
	mov esi, 0x00
	mov edi, 0x00
	
	mov eax, 0x123456
	add ebx, 0x3333
	mul ebx
	imul eax, edx
	mov edi, 0x66543456
	add ecx, 10
	idiv ecx
	
	; What is the value of eax in hexadecimal at this point?

	call _exit

_exit: 
	mov eax, 0x01
	mov ebx, 0x00
	int 0x80
