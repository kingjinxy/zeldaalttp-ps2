	.ALIGN 2, 0
	.GLOBAL sub_080CF480
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF480, function
sub_080CF480:
 
	push {lr} 
	lsl r0, r0, #24 
	lsr r0, r0, #24 
	ldr r2, _080CF4AC  @ =gShield 
	ldr r1, _080CF4B0  @ =gRam 
	ldr r3, _080CF4B4  @ =0x00001002 
	add r1, r1, r3 
	add r0, r0, r1 
	ldrb r1, [r0] 
	strb r1, [r2] 
	ldrb r0, [r0] 
	cmp r0, #3 
	bne _080CF4A6 
	ldr r1, _080CF4B8  @ =gUnknown_020023F1 
	ldrb r0, [r1] 
	cmp r0, #0 
	beq _080CF4A6 
	mov r0, #0 
	strb r0, [r1] 
_080CF4A6: 
	pop {r0} 
	bx r0 
	.byte 0x00 
	.byte 0x00 
_080CF4AC: 
	.4byte gShield 
_080CF4B0: 
	.4byte gRam 
_080CF4B4: 
	.4byte 0x00001002 
_080CF4B8: 
	.4byte gUnknown_020023F1 
    
