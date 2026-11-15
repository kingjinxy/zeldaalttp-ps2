	THUMB_FUNC_START sub_080CAA64
sub_080CAA64: @ 0x080CAA64
	push {r4-r7,lr}
	lsl r0, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	ldr r3, _080CAAE4  @ =gRam
	mov r2, #176
	lsl r2, r2, #5
	add r1, r3, r2
	ldrb r2, [r1]
	ldr r4, _080CAAE8  @ =0x00001601
	add r1, r3, r4
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	lsr r6, r0, #16
	asr r0, r0, #16
	sub r0, r0, r2
	lsl r4, r0, #16
	asr r1, r4, #16
	ldr r7, _080CAAEC  @ =0x000015FC
	add r0, r3, r7
	ldrh r0, [r0]
	cmp r1, r0
	bge _080CAADC
	cmp r1, #0
	blt _080CAADC
	ldr r1, _080CAAF0  @ =0x00001602
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080CAAF4  @ =0x00001603
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r0, r5, #16
	asr r0, r0, #16
	sub r0, r0, r1
	lsl r1, r0, #16
	asr r2, r1, #16
	add r7, r7, #2
	add r0, r3, r7
	ldrh r0, [r0]
	cmp r2, r0
	bge _080CAADC
	cmp r2, #0
	blt _080CAADC
	lsr r0, r4, #24
	lsr r1, r1, #24
	lsl r1, r1, #2
	orr r0, r0, r1
	lsl r0, r0, #24
	mov r2, #240
	and r2, r2, r5
	lsl r1, r6, #24
	lsr r1, r1, #28
	orr r2, r2, r1
	lsr r0, r0, #16
	orr r0, r0, r2
	bl sub_080CBD44
_080CAADC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CAAE4:
	.4byte gRam
_080CAAE8:
	.4byte 0x00001601
_080CAAEC:
	.4byte 0x000015FC
_080CAAF0:
	.4byte 0x00001602
_080CAAF4:
	.4byte 0x00001603
	THUMB_FUNC_END sub_080CAA64

