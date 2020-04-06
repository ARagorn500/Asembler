segment .data
voltage     dq  0   ;the value to calculate
amperage    dq  8   ;The amperage input
resistance  dq  4   ;the resistance input

        segment .text
        global main     ;Tell linker about main
main:
;move variable to registers
mov rax,[voltage]
mov rbx,[amperage]
mov rcx,[resistance]

;if amperage is zero, calculate it
amperage_section:
cmp rbx, 0              ;see if we are calculating amperage by testing
jne resistance_section  ;if we are not calculating amperage go to next test
mov rdx,0               ;clear the rdx register
idiv rcx                ;how you divide numbers. Takes rax/rcx. Stores quotient in rax. Stores remainder in rdx.
mov [amperage],rax      ;move the quotient back into amperage
jmp end                 ;you're done. Jump to end

;if resistance is zero, calculate it
resistance_section:
cmp rcx, 0              ;see if we are calculating resistance by testing
jne voltage_section     ;if we are not calculating resistance go to next test
mov rdx,0               ;clear the rdx register
idiv rbx                ;how you divide numbers. Takes rax/rbx. Stores quotient in rax. Stores remainder in rdx.
mov [resistance],rax    ;move the quotient back into resistance
jmp end                 ;you're done. Jump to end


;if voltage is zero, calculate it
voltage_section:
imul rbx, rcx           ;multiply resistance and amperage. Stores quotientin rax.
mov [voltage],rbx       ;move the quotient back into voltage

end:
