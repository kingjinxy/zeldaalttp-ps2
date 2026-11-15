	THUMB_FUNC_START sub_0801F6BC
sub_0801F6BC: @ 0x0801F6BC
	add r2, r0, #0
	add r1, r2, #0
	add r1, r1, #126
	ldrb r0, [r1]
	cmp r0, #0
	beq _0801F6CE
	sub r0, r0, #1
	strb r0, [r1]
	b _0801F6E0
_0801F6CE:
	mov r0, #8
	strb r0, [r1]
	ldr r1, [r2, #12]
	ldr r0, _0801F6E4  @ =0x000001FF
	cmp r1, r0
	bgt _0801F6E0
	add r0, r1, #0
	add r0, r0, #32
	str r0, [r2, #12]
_0801F6E0:
	bx lr
	.byte 0x00
	.byte 0x00
_0801F6E4:
	.4byte 0x000001FF
	THUMB_FUNC_END sub_0801F6BC

