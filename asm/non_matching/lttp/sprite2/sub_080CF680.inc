	.ALIGN 2, 0
	.GLOBAL sub_080CF680
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF680, function
sub_080CF680:
 
	push {lr} 
	lsl r0, r0, #24 
	lsr r3, r0, #24 
	ldr r2, _080CF68C  @ =gUnknown_08174900 
	b _080CF69A 
	.byte 0x00 
	.byte 0x00 
_080CF68C: 
	.4byte gUnknown_08174900 
_080CF690: 
	add r2, r2, #1 
	cmp r1, r3 
	bne _080CF69A 
	mov r0, #1 
	b _080CF6A4 
_080CF69A: 
	ldrb r1, [r2] 
	add r0, r1, #0 
	cmp r0, #255 
	bne _080CF690 
	mov r0, #0 
_080CF6A4: 
	pop {r1} 
	bx r1 
    
