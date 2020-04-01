.MODEL SMALL
.STACK 100H
.DATA
PROMPT  DB  'The lower Case Letters from a to z are : $'
.CODE
MAIN PROC
MOV AX, @DATA                 
MOV DS, AX
LEA DX, PROMPT                
MOV AH, 9
INT 21H
MOV CX, 26                   
MOV AH, 2                    
MOV DL, 97                  
@DO_WHILE_LOOP:              
INT 21H                    
INC DL                     
DEC CX                     
JNZ @DO_WHILE_LOOP                
MOV AH, 4CH                  
INT 21H
MAIN ENDP
END MAIN