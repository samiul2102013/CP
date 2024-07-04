include 'emu8086.inc'
.model small
.stack 100h   

.data 
    array1 db 1, 2, 3, 4
    array2 db 4 dup(?)


.code 
    
    main proc 
        
        mov ax,@data
        mov ds, ax
        
        mov si, offset array1
        mov di, offset array2         
        
        mov cx, 4
        
        loopx:
            mov al, [si]
            mov [di], al
            
            inc si
            inc di
            
            loop loopx 
            
            
            print 'Value in New Memory Blocks'
            
            mov cx, 4
            
            mov di, offset array2
            
            loop loo2:
                mov dl, [di]
                add dl, 48
                
                mov ah, 02h
                int 21h
                
                mov dl, 32
                mov ah, 02h
                int 21h
                
                inc di
                
                loop loo2
        
    main endp

end main