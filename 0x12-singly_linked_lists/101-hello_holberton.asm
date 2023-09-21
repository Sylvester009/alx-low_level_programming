    format db 'Hello, Holberton', 0
    
global main
    extern printf

main:
    xor   eax, eax
    lea   rdi, [format]
    call  printf
    mov   eax, 0
    ret

