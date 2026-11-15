	THUMB_FUNC_START sub_0812FFB8
sub_0812FFB8: @ 0x0812FFB8
	push {lr}
	bl sub_08074370
	ldr r2, _0812FFE4  @ =gRam
	ldr r1, _0812FFE8  @ =0x000009AD
	add r0, r2, r1
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	ldr r1, _0812FFEC  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #27
	beq _0812FFD8
	cmp r0, #91
	bne _0812FFE0
_0812FFD8:
	ldr r0, _0812FFF0  @ =0x000009B5
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_0812FFE0:
	pop {r0}
	bx r0
_0812FFE4:
	.4byte gRam
_0812FFE8:
	.4byte 0x000009AD
_0812FFEC:
	.4byte 0x000009C6
_0812FFF0:
	.4byte 0x000009B5
	THUMB_FUNC_END sub_0812FFB8

