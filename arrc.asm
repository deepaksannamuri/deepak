Data Segment
  arr1 dw 'G','L','S','I','C','T'
  arrlen1 dw $-arr1
  arr2 dw 20 dup(''),'$'
  arrlen2 dw $-arr2
Data Ends

Code Segment
  Assume cs:code, ds:data
  Begin:
    mov ax, data
    mov ds, ax
    mov es, ax
    mov cx, arrlen1    
    std           
    lea si, arr1+10
    lea di, arr2+10
    rep movsw

    Print:
       mov ah, 09h
       lea dx, arr2
       int 21h

    Exit:
       mov ax, 4c00h
       int 21h
Code Ends
End Begin
