.data 
massege1:.asciiz "please enter factorial number:\n"
massege2:.asciiz "the number is wrong!!"
massege3:.asciiz"the factorial is: "
.text 
	main:
	addi $t0,$0,1
	 li $v0, 4
   	 la $a0, massege1
    syscall
    li $v0 ,5
    syscall
    move $a1,$v0
    bltz $a1,exit
    bne $a1,$0,factorial
    addi $a1,$0,1
    	 li $v0, 4
   	 la $a0, massege3
    syscall
    add $a0,$0,$a1
     li $v0, 1
    syscall
    j end
    
factorial:
blez $a1,fmass
mul $t0,$t0,$a1
addi $a1,$a1,-1
j factorial
fmass:

    add $a0,$t0,$0
     li $v0, 1
    syscall
    j end


exit:
	    li $v0, 4
   	 la $a0, massege2
    syscall
    j end
end:
	 li $v0, 10
    syscall
