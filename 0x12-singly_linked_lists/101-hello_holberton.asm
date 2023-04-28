section .data
	;The string i want to print is followed by a newline and the null byte
	text db "Hello, Holberton", 10,0

section .text
	global _start

_start:
	mov rdi, format	;moves address of format string to rdi
	mov rsi, text	;moves the address of text string to rsi
	xor eax, eax	;clear eax register to zero
	call printf	;printf called to print the formatted string
	mov eax, 60	;syscall exit number
	xor rdi, rdi	;exit code
	syscall		;call the kernel

format:
	db "String: %s", 10, 0	;string with newline and null byte
