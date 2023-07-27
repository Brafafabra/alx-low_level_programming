section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0

section .text
    extern printf

global main

main:
    ; Save callee-saved registers (rbx, rbp, r12-r15)
    push rbx
    push rbp
    push r12
    push r13
    push r14
    push r15

    ; Push the format specifier onto the stack
    mov rdi, format
    ; Push the address of hello onto the stack
    mov rsi, hello
    ; Call printf
    call printf

    ; Restore callee-saved registers
    pop r15
    pop r14
    pop r13
    pop r12
    pop rbp
    pop rbx

    ; Return 0 from the main function
    xor rax, rax
    ret
