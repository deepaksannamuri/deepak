.model small
.stack 100h
.data
r db ?
PROMPT_1 DB 'The value is: $'
.code 
main proc
mov ax,26
mov bl,5
div bl
mov r,ah
mov dl,r
add dl,48
mov ah,2
int 21h
mov ah,4ch
int 21h
main endp
end main
