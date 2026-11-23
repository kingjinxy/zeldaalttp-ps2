	.ALIGN 2, 0
	.GLOBAL sub_080CF244
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF244, function
sub_080CF244:
 
	push {r4,r5,lr} 
	sub sp, sp, #8 
	lsl r0, r0, #24 
	lsr r0, r0, #24 
	lsl r1, r1, #24 
	lsr r1, r1, #24 
	lsl r2, r2, #24 
	lsr r2, r2, #24 
	ldr r4, _080CF280  @ =gRam 
	ldr r5, _080CF284  @ =0x00000952 
	add r3, r4, r5 
	ldrb r3, [r3] 
	sub r0, r0, r3 
	lsl r0, r0, #16 
	ldr r3, _080CF288  @ =0x00000958 
	add r4, r4, r3 
	ldrb r3, [r4] 
	sub r1, r1, r3 
	lsl r1, r1, #16 
	lsr r0, r0, #16 
	orr r0, r0, r1 
	str r0, [sp] 
	add r0, r2, #0 
	mov r1, sp 
	bl sub_0812A324 
	add sp, sp, #8 
	pop {r4,r5} 
	pop {r0} 
	bx r0 
_080CF280: 
	.4byte gRam 
_080CF284: 
	.4byte 0x00000952 
_080CF288: 
	.4byte 0x00000958 
    
