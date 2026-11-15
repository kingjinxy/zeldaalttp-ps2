	THUMB_FUNC_START sub_080B01D0
sub_080B01D0: @ 0x080B01D0
	push {r4,r5,lr}
	mov r2, #1
	ldr r0, _080B020C  @ =gRam
	ldr r1, _080B0210  @ =0x00001A4A
	add r3, r0, r1
	add r1, r1, #1
	add r0, r0, r1
	ldrb r1, [r3]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _080B0206
	add r5, r3, #0
_080B01EA:
	lsl r1, r2, #24
	asr r4, r1, #24
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B01FC
	lsr r0, r1, #24
	bl sub_080AFF7C
_080B01FC:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080B01EA
_080B0206:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B020C:
	.4byte gRam
_080B0210:
	.4byte 0x00001A4A
	THUMB_FUNC_END sub_080B01D0

