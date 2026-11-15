	THUMB_FUNC_START sub_0806E150
sub_0806E150: @ 0x0806E150
	push {lr}
	ldr r1, _0806E198  @ =gRam
	ldr r2, _0806E19C  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	add r2, r1, #0
	cmp r0, #7
	beq _0806E16E
	cmp r0, #23
	bne _0806E182
	ldr r1, _0806E1A0  @ =0x00000A42
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #5
	beq _0806E182
_0806E16E:
	ldr r0, _0806E1A4  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0806E182
	ldr r0, _0806E1A8  @ =0x00000A3C
	add r1, r2, r0
	ldr r0, _0806E1AC  @ =0x0000FFF1
	strh r0, [r1]
_0806E182:
	ldr r1, _0806E1B0  @ =0x00000B0A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806E1B8
	ldr r0, _0806E1B4  @ =0x00000B0C
	add r1, r2, r0
	mov r0, #106
	b _0806E1BE
_0806E198:
	.4byte gRam
_0806E19C:
	.4byte 0x000009DA
_0806E1A0:
	.4byte 0x00000A42
_0806E1A4:
	.4byte gPendantCount
_0806E1A8:
	.4byte 0x00000A3C
_0806E1AC:
	.4byte 0x0000FFF1
_0806E1B0:
	.4byte 0x00000B0A
_0806E1B4:
	.4byte 0x00000B0C
_0806E1B8:
	ldr r0, _0806E1D0  @ =0x00000B0C
	add r1, r2, r0
	mov r0, #88
_0806E1BE:
	strh r0, [r1]
	ldr r0, _0806E1D4  @ =0x00000A4C
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	bl sub_0806D93C
	pop {r0}
	bx r0
_0806E1D0:
	.4byte 0x00000B0C
_0806E1D4:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0806E150

