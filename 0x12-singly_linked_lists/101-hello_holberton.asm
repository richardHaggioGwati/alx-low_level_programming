section .data
    hello: db "Hello, Holberton", 10 ; '\n' character

section .text
    global _start

_start:
    ; Write message to stdout
    mov rax, 1      ; write system call
    mov rdi, 1      ; stdout file descriptor
    mov rsi, hello  ; message address
    mov rdx, 16     ; message length
    syscall

    ; Exit with status 0
    mov eax, 60     ; exit system call
    xor rdi, rdi    ; exit status 0
    syscall