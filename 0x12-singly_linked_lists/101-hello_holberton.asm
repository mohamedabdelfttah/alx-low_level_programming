; File: hello.asm
; Assembly program to print "Hello, Holberton" using printf

        global  main
        extern  printf

        section .data
msg     db      'Hello, Holberton', 0

        section .text
main:
        ; Prepare arguments for printf
        mov     rdi, msg        ; Set first argument to address of message string
        xor     rax, rax        ; Clear rax register (no floating point arguments)

        ; Call printf function
        call    printf

        ; Exit program
        xor     rax, rax        ; Return value is 0
        ret                     ; Return from main function
