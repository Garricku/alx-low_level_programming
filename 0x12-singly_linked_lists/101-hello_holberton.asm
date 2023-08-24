%include "stdio.h"

section .data
	hello db 'Hello, Holberton', 0

section .text
	global _start

_start:
	; call printf to print the string
	push hello
	call printf
	add esp, 4

	;exit the program
	mov eax, 1
	xor ebx, ebx
	int 0x80
