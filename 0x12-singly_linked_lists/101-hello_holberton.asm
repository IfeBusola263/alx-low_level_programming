section .data
	text db "Hello, Holberton", 10,0

section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, 14
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
