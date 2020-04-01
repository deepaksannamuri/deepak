.model small
.stack 100h
.data
str1 db "copy a string$"
msg db 'the copied string is: $'
str2 db 14 dup(?)
.code
main proc
mov ax,@data
mov ds,ax
mov es,ax
mov si,offset str1
mov di,offset str2
mov cx,14
cld
rep movsb
lea dx,msg               
mov ah,9
int 21h
mov dl,offset str2
mov ah,9
int 21h
mov ah,4ch
int 21h
main endp
end main
