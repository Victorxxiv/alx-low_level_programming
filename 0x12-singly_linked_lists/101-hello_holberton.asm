section .data
	hello db "Hello, Holberton", 10, 0
	format db "%s", 0

section .text
	global main

extern printf

main:
	push rbp
	mov rdi, format
	mov rsi, hello
	call printf
	add rsp, 8  ; Clean up the stack
	xor eax, eax ; Return 0 (success)
	pop rbp
	ret

