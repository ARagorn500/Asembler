segment .data
voltage     dq  0   ;the value to calculate
amperage    dq  10  ;The amperage input
resistance  dq  5   ;the resistance input

        segment .text
        global main     ;Tell linker about main
main:
;move variable to registers
mov rax,[amperage]
mov rbx,[resistance]

;do computation
imul rax,rbx
;store answer in the voltage variable
mov [voltage],rax

;untrash everything
mov rax,0
mov rbx,0
