section .data
	;The string i want to print is followed by a newline and the null byte
	text db "Hello, Holberton", 10,0

section .text
	global _start

_start:
	; Use the syscall to write to stdot
	mov rax, 1	;syscall number for write
	mov rdi, 1	;file descriptor - stdot
	mov rsi, text	;Pointer to the string to be printed
	mov rdx, 16	;length of the string, newline  and null byte
	syscall

	;syscall to exit the program
	mov rax, 60	; Exit number with syscall
	xor rdi, rdi	; Exit point
	syscall
