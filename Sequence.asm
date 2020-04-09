segment .data
start   dq 1    ;Starting integer
end     dq 5   ;Ending integer
sum     dq 0    ;Sum of integers

segment .text
    global main     ;Tell linker about main
    
main:  
    ;move variables to registers
mov rax,[start] ;Start/Sum
mov rbx,[end]   ;End
mov rcx,[start] ;Incrementor

start_loop:
    cmp rcx, rbx    ;Check if incerementor is = to end
    jge end_loop    ;If rxc >= rbx end loop
    inc rcx         ;increment incrementor
    add rax, rcx    ; add incerementor to sum
    jmp start_loop  ;Keep looping
    
    end_loop:
      mov [sum],rax ;save answer to sum variable
