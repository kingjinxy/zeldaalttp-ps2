	THUMB_FUNC_START sub_08106430
sub_08106430: @ 0x08106430
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _0810645C  @ =gRam
	ldr r1, _08106460  @ =0x00000FD2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _0810646C
	ldr r2, _08106464  @ =gUnknown_0817BF0C
	ldr r1, _08106468  @ =0x00000FB2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	eor r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	bl sub_081064F8
	b _081064A4
_0810645C:
	.4byte gRam
_08106460:
	.4byte 0x00000FD2
_08106464:
	.4byte gUnknown_0817BF0C
_08106468:
	.4byte 0x00000FB2
_0810646C:
	ldr r2, _081064AC  @ =0x00001770
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #19
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #138
	add r0, r3, r2
	strb r1, [r0]
	mov r2, #184
	lsl r2, r2, #5
	add r0, r3, r2
	strb r1, [r0]
	sub r2, r2, #41
	add r0, r3, r2
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	ldr r0, _081064B0  @ =0x0000152C
	add r1, r3, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _081064B4  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
_081064A4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081064AC:
	.4byte 0x00001770
_081064B0:
	.4byte 0x0000152C
_081064B4:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_08106430

