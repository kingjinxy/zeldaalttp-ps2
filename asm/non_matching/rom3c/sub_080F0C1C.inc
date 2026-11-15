	THUMB_FUNC_START sub_080F0C1C
sub_080F0C1C: @ 0x080F0C1C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080F0C3C  @ =gRam
	ldr r1, _080F0C40  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F0C44
	add r0, r4, #0
	bl sub_080F0DD4
	b _080F0C78
	.byte 0x00
	.byte 0x00
_080F0C3C:
	.4byte gRam
_080F0C40:
	.4byte 0x00000FC2
_080F0C44:
	add r0, r4, #0
	bl sub_080F0E04
	add r0, r4, #0
	bl sub_080F0E3C
	ldr r1, _080F0C64  @ =0x00000F62
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _080F0C68
	sub r0, r1, #1
	strb r0, [r2]
	b _080F0C78
	.byte 0x00
	.byte 0x00
_080F0C64:
	.4byte 0x00000F62
_080F0C68:
	mov r0, #255
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080F0C80  @ =0x00001082
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
_080F0C78:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0C80:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080F0C1C

