; INCLUDE Irvine32.inc
.data
E1 DWORD ?
E2 DWORD ?
E3 DWORD ?
E4 DWORD ?
E5 DWORD ?
prompt1 BYTE "Enter the Details of Employee 1: ",0
prompt2 BYTE "Enter the Details of Employee 2: ",0
prompt3 BYTE "Enter the Details of Employee 3: ",0
prompt4 BYTE "Enter the Details of Employee 4: ",0
prompt5 BYTE "Enter the Details of Employee 5: ",0
name1 BYTE "Enter the Name of Employee 1: ",0
name2 BYTE "Enter the Name of Employee 2: ",0
name3 BYTE "Enter the Name of Employee 3: ",0
name4 BYTE "Enter the Name of Employee 4: ",0
name5 BYTE "Enter the Name of Employee 5: ",0
ID1 BYTE "Enter the Employee ID of Employee 1: ",0
ID2 BYTE "Enter the Employee ID of Employee 2: ",0
ID3 BYTE "Enter the Employee ID of Employee 3: ",0
ID4 BYTE "Enter the Employee ID of Employee 4: ",0
ID5 BYTE "Enter the Employee ID of Employee 5: ",0
YOB1 BYTE "Enter the Year of Birth of Employee 1: ",0
YOB2 BYTE "Enter the Year of Birth of Employee 2: ",0
YOB3 BYTE "Enter the Year of Birth of Employee 3: ",0
YOB4 BYTE "Enter the Year of Birth of Employee 4: ",0
YOB5 BYTE "Enter the Year of Birth of Employee 5: ",0
AS1 BYTE "Enter the Annual Salary of Employee 1: ",0
AS2 BYTE "Enter the Annual Salary of Employee 2: ",0
AS3 BYTE "Enter the Annual Salary of Employee 3: ",0
AS4 BYTE "Enter the Annual Salary of Employee 4: ",0
AS5 BYTE "Enter the Annual Salary of Employee 5: ",0
eid1 DWORD ?
eid2 DWORD ?
eid3 DWORD ?
eid4 DWORD ?
eid5 DWORD ?
n1 DWORD 21 DUP(?) 
n1c DWORD ?
n2 DWORD 21 DUP(?) 
n2c DWORD ?
n3 DWORD 21 DUP(?) 
n3c DWORD ?
n4 DWORD 21 DUP(?) 
n4c DWORD ?
n5 DWORD 21 DUP(?) 
n5c DWORD ?
YB1 DWORD ?
YB2 DWORD ?
YB3 DWORD ?
YB4 DWORD ?
YB5 DWORD ?
eas1 DWORD ?
eas2 DWORD ?
eas3 DWORD ?
eas4 DWORD ?
eas5 DWORD ?
.code 
main PROC
mov eax, lightRed + (black * 16)
call SetTextColor

mov edx,OFFSET prompt1
call WriteString
call crlf

mov edx,OFFSET ID1
call WriteString
call crlf

call ReadInt
mov eid1,eax
mov E1,eax

mov edx,OFFSET name1
call WriteString
call crlf

mov edx,OFFSET n1 ; 
mov ecx,SIZEOF n1 ; 
call ReadString ; 
mov n1c,eax
mov eax,n1
mov E1+2,eax

mov edx,OFFSET YOB1
call WriteString
call crlf

call ReadInt
mov YB1,eax
mov E1+2,eax

mov edx,OFFSET AS1
call WriteString
call crlf

call ReadInt
mov eas1,eax
mov E1+3,eax

mov edx,OFFSET prompt2
call WriteString
call crlf

mov edx,OFFSET ID2
call WriteString
call crlf

call ReadInt
mov eid2,eax
mov E2,eax

mov edx,OFFSET name2
call WriteString
call crlf

mov edx,OFFSET n2 ; 
mov ecx,SIZEOF n2 ; 
call ReadString ; 
mov n2c,eax
mov eax,n2
mov E2+2,eax

mov edx,OFFSET YOB2
call WriteString
call crlf

call ReadInt
mov YB2,eax
mov E2+2,eax

mov edx,OFFSET AS2
call WriteString
call crlf

call ReadInt
mov eas2,eax
mov E2+3,eax
mov edx,OFFSET prompt3
call WriteString
call crlf

mov edx,OFFSET ID3
call WriteString
call crlf

call ReadInt
mov eid3,eax
mov E3,eax

mov edx,OFFSET name3
call WriteString
call crlf

mov edx,OFFSET n3 ; 
mov ecx,SIZEOF n3 ; 
call ReadString ; 
mov n3c,eax
mov eax,n3
mov E3+2,eax

mov edx,OFFSET YOB3
call WriteString
call crlf

call ReadInt
mov YB3,eax
mov E3+2,eax

mov edx,OFFSET AS3
call WriteString
call crlf

call ReadInt
mov eas3,eax
mov E3+3,eax

mov edx,OFFSET prompt4
call WriteString
call crlf

mov edx,OFFSET ID4
call WriteString
call crlf

call ReadInt
mov eid4,eax
mov E4,eax

mov edx,OFFSET name4
call WriteString
call crlf

mov edx,OFFSET n4 ; 
mov ecx,SIZEOF n4 ; 
call ReadString ; 
mov n4c,eax
mov eax,n4
mov E4+2,eax

mov edx,OFFSET YOB4
call WriteString
call crlf

call ReadInt
mov YB4,eax
mov E4+2,eax

mov edx,OFFSET AS4
call WriteString
call crlf

call ReadInt
mov eas4,eax
mov E4+3,eax

mov edx,OFFSET prompt5
call WriteString
call crlf

mov edx,OFFSET ID5
call WriteString
call crlf

call ReadInt
mov eid5,eax
mov E5,eax

mov edx,OFFSET name5
call WriteString
call crlf

mov edx,OFFSET n5 ; 
mov ecx,SIZEOF n5 ; 
call ReadString ; 
mov n5c,eax
mov eax,n1
mov E5+2,eax

mov edx,OFFSET YOB5
call WriteString
call crlf

call ReadInt
mov YB5,eax
mov E5+2,eax

mov edx,OFFSET AS5
call WriteString
call crlf

call ReadInt
mov eas5,eax
mov E5+3,eax

mov eax,0
mov eax,E1+3
add eax,E2+3
add eax,E3+3
add eax,E4+3
add eax,E5+3
call WriteDec
;Call DumpRegs
exit
main ENDP
END main