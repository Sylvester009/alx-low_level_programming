section .data
format: db `Hello, Holberton\n`,0
section .text
global main
extern printf
extern exit
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
