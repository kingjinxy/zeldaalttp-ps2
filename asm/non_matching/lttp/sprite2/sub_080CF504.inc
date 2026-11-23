	.ALIGN 2, 0
	.GLOBAL sub_080CF504
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080CF504, function
sub_080CF504:
 
	push {r4,lr} 
	lsl r0, r0, #24 
	lsr r0, r0, #24 
	ldr r2, _080CF544  @ =gRam 
	lsl r3, r0, #1 
	ldr r4, _080CF548  @ =0x00001192 
	add r1, r2, r4 
	add r3, r3, r1 
	ldr r4, _080CF54C  @ =0x00001002 
	add r1, r2, r4 
	add r1, r0, r1 
	ldrb r1, [r1] 
	strh r1, [r3] 
	ldr r1, _080CF550  @ =0x00000AA8 
	add r4, r2, r1 
	ldr r3, _080CF554  @ =gUnknown_08174A18 
	ldr r1, _080CF558  @ =0x00000E85 
	add r2, r2, r1 
	add r2, r0, r2 
	ldrb r1, [r2] 
	add r1, r1, r3 
	ldrb r1, [r1] 
	lsl r1, r1, #8 
	ldrh r2, [r4] 
	orr r1, r1, r2 
	strh r1, [r4] 
	bl sub_080CB9D4 
	pop {r4} 
	pop {r0} 
	bx r0 
	.byte 0x00 
	.byte 0x00 
_080CF544: 
	.4byte gRam 
_080CF548: 
	.4byte 0x00001192 
_080CF54C: 
	.4byte 0x00001002 
_080CF550: 
	.4byte 0x00000AA8 
_080CF554: 
	.4byte gUnknown_08174A18 
_080CF558: 
	.4byte 0x00000E85 
    
