    format db "Hello, Holberton", 10, 0

    global main
    extern printf

main:
    sub rsp, 8
    mov rdi, format
    call printf

    add rsp, 8
    mov rax, 60
    xor rdi, rdi
    syscall
