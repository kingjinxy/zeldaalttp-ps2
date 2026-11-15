	THUMB_FUNC_START sub_080C8388
sub_080C8388: @ 0x080C8388
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080C1F70
	ldr r6, _080C83AC  @ =gRam
	ldr r1, _080C83B0  @ =0x0000141C
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bne _080C83B4
	add r0, r4, #0
	bl sub_080C7EE8
	b _080C83FE
_080C83AC:
	.4byte gRam
_080C83B0:
	.4byte 0x0000141C
_080C83B4:
	add r0, r5, #0
	bl SpriteActive_Main
	ldr r1, _080C8404  @ =0x000010E2
	add r0, r6, r1
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #1
	bne _080C83FE
	ldr r1, _080C8408  @ =0x00000FA2
	add r0, r6, r1
	add r0, r5, r0
	mov r2, #0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _080C840C  @ =0x00000F72
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	mov r0, #96
	strb r0, [r3]
	ldr r1, _080C8410  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	ldr r0, _080C8414  @ =0x00001032
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #16
	orr r0, r0, r2
	strb r0, [r1]
	ldr r0, _080C8418  @ =0x00001792
	add r1, r6, r0
	mov r0, #2
	strb r0, [r1]
_080C83FE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080C8404:
	.4byte 0x000010E2
_080C8408:
	.4byte 0x00000FA2
_080C840C:
	.4byte 0x00000F72
_080C8410:
	.4byte 0x00001152
_080C8414:
	.4byte 0x00001032
_080C8418:
	.4byte 0x00001792
	THUMB_FUNC_END sub_080C8388

