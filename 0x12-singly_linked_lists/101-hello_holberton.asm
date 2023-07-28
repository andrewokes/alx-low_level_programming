section .data
hello db 'Hello, Holberton', 0xA  ; The message to be printed followed by a new line character
len equ $ - hello                ; Calculate the length of the message

section .text
global main

main:
; Write to standard output (file descriptor 1)
mov rdi, 1              ; File descriptor 1 (stdout)
mov rax, 1              ; System call number 1 for sys_write
mov rsi, hello          ; Pointer to the message
mov rdx, len            ; Length of the message
syscall                 ; Call the kernel to perform the write

; Exit the program
mov rax, 60             ; System call number 60 for sys_exit
xor rdi, rdi            ; Exit code 0
syscall                 ; Call the kernel to exit

