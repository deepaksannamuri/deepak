.MODEL SMALL
 .STACK 100H

 .DATA
   PROMPT        DB  'Enter the Number of Cents (C) 0<=C<=99 = $'
   ILLEGAL       DB  0DH,0AH,'Invalid number of Cents. Try again = $'
   HALF_DOLLARS  DB  0DH,0AH,'Number of Half-Dollars = $'
   QUARTERS      DB  0DH,0AH,'Number of Quarters     = $'
   DIMES         DB  0DH,0AH,'Number of Dimes        = $'
   NICKELS       DB  0DH,0AH,'Number of Nickels      = $'
   PENNIES       DB  0DH,0AH,'Number of Pennies      = $'
 
 .CODE
   MAIN PROC
     MOV AX, @DATA                ; initialize DS
     MOV DS, AX

     LEA DX, PROMPT               ; load and print the string PROMPT
     MOV AH, 9
     INT 21H

     JMP @START_AGAIN             ; jump to label @START_AGAIN

     @ILLEGAL:                    ; jump label

     LEA DX, ILLEGAL              ; load and display the string ILLEGAL
     MOV AH, 9
     INT 21H
     @START_AGAIN:                ; jump label

     CALL INDEC                   ; call the procedure INDEC

     CMP AX, 0                    ; compare AX with 0
     JL @ILLEGAL                  ; jump to label @ILLEGAL if AX<0

     CMP AX, 99                   ; compare AX with 99
     JG @ILLEGAL                  ; jump to label @ILLEGAl if AX>99

     MOV BL, 50                   ; set BL=50
     DIV BL                       ; set AL=AX/BL , AH=AX%BL

     MOV BH, AH                   ; set BH=AH
     XOR AH, AH                   ; clear AH

     PUSH AX                      ; push AX onto the STACK

     LEA DX, HALF_DOLLARS         ; load and display the string HALF_DOLLARS
     MOV AH, 9
     INT 21H

     POP AX                       ; pop a value from STACK into AX

     CALL OUTDEC                  ; call the procedure OUTDEC

     XOR AX, AX                   ; clear AX
     MOV AL, BH                   ; set AL=BH
     MOV BL, 25                   ; set BL=25

     DIV BL                       ; set AL=AX/BL , AH=AX%BL

     MOV BH, AH                   ; set BH=AH
     XOR AH, AH                   ; clear AH

     PUSH AX                      ; push AX onto the STACK

     LEA DX, QUARTERS             ; load and display the string QUARTERS
     MOV AH, 9
     INT 21H

     POP AX                       ; pop a value from STACK into AX

     CALL OUTDEC                  ; call the procedure OUTDEC

     XOR AX, AX                   ; clear AX
     MOV AL, BH                   ; set AL=BH
     MOV BL, 10                   ; set BL=10

     DIV BL                       ; set AL=AX/BL , AH=AX%BL

     MOV BH, AH                   ; set BH=AH
     XOR AH, AH                   ; clear AH

     PUSH AX                      ; pop a value from STACK into AX
     LEA DX, DIMES                ; load and display the string DIMES
     MOV AH, 9
     INT 21H

     POP AX                       ; pop a value from STACK into AX

     CALL OUTDEC                  ; call the procedure OUTDEC

     XOR AX, AX                   ; clear AX
     MOV AL, BH                   ; set AL=BH
     MOV BL, 5                    ; set BL=5 

     DIV BL                       ; set AL=AX/BL , AH=AX%BL

     MOV BH, AH                   ; set BH=AH
     XOR AH, AH                   ; clear AH

     PUSH AX                      ; push AX onto the STACK

     LEA DX, NICKELS              ; load and display the string NICKELS
     MOV AH, 9
     INT 21H

     POP AX                       ; pop a value from STACK into AX

     CALL OUTDEC                  ; call the procedure OUTDEC

     XOR AX, AX                   ; clear AX
     MOV AL, BH                   ; set AL=BH
     PUSH AX                      ; push AX onto the STACK

     LEA DX, PENNIES              ; load and display the string PENNIES
     MOV AH, 9
     INT 21H

     POP AX                       ; pop a value from STACK into AX

     CALL OUTDEC                  ; call the procedure OUTDEC

     MOV AH, 4CH                  ; return control to DOS
     INT 21H
   MAIN ENDP
