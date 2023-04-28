; File: hello.asm
; Assembly program to print "Hello, Holberton" using printf


        section .data
msg     db 'Hello, Holberton', 0
fmt:	db "%s", 10, 0

        section .text
	extern printf
	global main
main:
        ; Prepare arguments for printf
        mov     rdi, msg        ; Set first argument to address of message string
        xor     rax, rax        ; Clear rax register (no floating point arguments)
	mov eax, 0

        ; Call printf function
        call    printf

        ; Exit program
	mov eax, 0
        ret                     ; Return from main function
