	THUMB_FUNC_START sub_0812CA30
sub_0812CA30: @ 0x0812CA30
	push {r4-r6,lr}
	add r3, r0, #0
	ldr r4, [r3, #4]
	lsr r0, r4, #16
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _0812CA58  @ =gUnknown_03001C88
	add r1, r1, r0
	mov r5, #0
	ldrh r2, [r3]
	ldr r0, _0812CA5C  @ =0x00000101
	cmp r2, r0
	beq _0812CB14
	cmp r2, r0
	bgt _0812CA60
	sub r0, r0, #1
	cmp r2, r0
	beq _0812CA70
	b _0812CB44
_0812CA58:
	.4byte gUnknown_03001C88
_0812CA5C:
	.4byte 0x00000101
_0812CA60:
	mov r0, #129
	lsl r0, r0, #1
	cmp r2, r0
	beq _0812CAA2
	add r0, r0, #1
	cmp r2, r0
	beq _0812CAD4
	b _0812CB44
_0812CA70:
	lsl r0, r4, #24
	lsr r2, r0, #24
	ldr r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	mov r4, #1
	add r1, r1, #8
_0812CA7E:
	and r0, r0, r4
	cmp r0, #0
	beq _0812CA8E
	ldr r0, [r1]
	cmp r0, #0
	beq _0812CA8E
	add r0, r0, #74
	strb r2, [r0]
_0812CA8E:
	add r1, r1, #4
	add r5, r5, #1
	ldr r0, [r3, #8]
	lsr r0, r0, #1
	str r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	cmp r5, #9
	ble _0812CA7E
	b _0812CB44
_0812CAA2:
	lsl r0, r4, #24
	lsr r2, r0, #24
	ldr r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	mov r4, #1
	add r1, r1, #8
_0812CAB0:
	and r0, r0, r4
	cmp r0, #0
	beq _0812CAC0
	ldr r0, [r1]
	cmp r0, #0
	beq _0812CAC0
	add r0, r0, #78
	strb r2, [r0]
_0812CAC0:
	add r1, r1, #4
	add r5, r5, #1
	ldr r0, [r3, #8]
	lsr r0, r0, #1
	str r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	cmp r5, #9
	ble _0812CAB0
	b _0812CB44
_0812CAD4:
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r4
	lsr r2, r0, #8
	lsl r0, r4, #24
	lsr r4, r0, #24
	ldr r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	mov r6, #1
	add r1, r1, #8
_0812CAEA:
	and r0, r0, r6
	cmp r0, #0
	beq _0812CB00
	ldr r0, [r1]
	cmp r0, #0
	beq _0812CB00
	add r0, r0, #80
	strb r2, [r0]
	ldr r0, [r1]
	add r0, r0, #79
	strb r4, [r0]
_0812CB00:
	add r1, r1, #4
	add r5, r5, #1
	ldr r0, [r3, #8]
	lsr r0, r0, #1
	str r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	cmp r5, #9
	ble _0812CAEA
	b _0812CB44
_0812CB14:
	lsl r0, r4, #24
	lsr r2, r0, #24
	ldr r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	mov r4, #1
	add r1, r1, #8
_0812CB22:
	and r0, r0, r4
	cmp r0, #0
	beq _0812CB32
	ldr r0, [r1]
	cmp r0, #0
	beq _0812CB32
	add r0, r0, #75
	strb r2, [r0]
_0812CB32:
	add r1, r1, #4
	add r5, r5, #1
	ldr r0, [r3, #8]
	lsr r0, r0, #1
	str r0, [r3, #8]
	cmp r0, #0
	beq _0812CB44
	cmp r5, #9
	ble _0812CB22
_0812CB44:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812CA30

	.byte 0x00
	.byte 0x00
