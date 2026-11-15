	THUMB_FUNC_START sub_080C5FB4
sub_080C5FB4: @ 0x080C5FB4
	push {r4,lr}
	ldr r2, _080C5FF4  @ =gRam
	ldr r0, _080C5FF8  @ =0x00000974
	add r4, r2, r0
	ldrb r0, [r4]
	ldr r1, _080C5FFC  @ =0x00000971
	add r3, r2, r1
	ldrb r1, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _080C6000  @ =0x00000958
	add r2, r2, r0
	ldrh r0, [r2]
	sub r0, r0, #16
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	strb r1, [r3]
	lsl r1, r1, #16
	lsr r0, r1, #24
	strb r0, [r4]
	asr r1, r1, #16
	mov r0, #255
	lsl r0, r0, #8
	and r1, r1, r0
	cmp r1, #0
	beq _080C5FEC
	mov r1, #1
_080C5FEC:
	add r0, r1, #0
	pop {r4}
	pop {r1}
	bx r1
_080C5FF4:
	.4byte gRam
_080C5FF8:
	.4byte 0x00000974
_080C5FFC:
	.4byte 0x00000971
_080C6000:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080C5FB4

