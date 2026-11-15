	THUMB_FUNC_START sub_0812AB30
sub_0812AB30: @ 0x0812AB30
	push {r4-r6,lr}
	add r4, r2, #0
	lsl r1, r1, #24
	lsr r6, r1, #24
	ldr r1, _0812AB98  @ =gUnknown_030003CC
	ldr r3, [r1]
	ldr r2, [r0, #8]
	add r1, r0, #0
	add r1, r1, #64
	ldrh r1, [r1]
	ldr r2, [r2]
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	ldr r2, [r3, #4]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	add r3, r2, r1
	add r0, r0, #66
	ldrh r0, [r0]
	lsl r0, r0, #1
	add r0, r3, r0
	ldrh r0, [r0]
	add r5, r3, r0
	mov r0, #0
	strb r0, [r4, #17]
	strb r0, [r4, #18]
	ldrb r1, [r5]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #0
	beq _0812ABE0
	add r0, r1, #0
	cmp r0, #16
	bne _0812AB9C
	ldrh r2, [r5, #2]
	add r2, r3, r2
	ldrb r0, [r5, #4]
	sub r0, r6, r0
	lsl r0, r0, #24
	mov r1, #1
	strb r1, [r4, #17]
	lsr r0, r0, #22
	add r0, r0, r2
	ldrb r1, [r0, #2]
	strb r1, [r4, #16]
	ldrh r0, [r0]
	add r0, r3, r0
	str r0, [r4]
	ldrh r0, [r0, #4]
	b _0812ABE4
_0812AB98:
	.4byte gUnknown_030003CC
_0812AB9C:
	cmp r0, #17
	bne _0812ABC4
	ldrh r1, [r5, #2]
	add r1, r3, r1
	ldr r2, _0812ABBC  @ =gUnknown_03000158
	lsl r0, r6, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r2, #2]
	str r2, [r4]
	ldr r0, _0812ABC0  @ =gUnknown_08198EB4
	str r0, [r4, #4]
	mov r0, #1
	strb r0, [r4, #18]
	b _0812ABE8
	.byte 0x00
	.byte 0x00
_0812ABBC:
	.4byte gUnknown_03000158
_0812ABC0:
	.4byte gUnknown_08198EB4
_0812ABC4:
	cmp r0, #18
	bne _0812ABE8
	ldrh r0, [r5, #2]
	add r0, r3, r0
	b _0812ABD0
_0812ABCE:
	add r0, r0, #4
_0812ABD0:
	ldrb r1, [r0]
	cmp r6, r1
	bhi _0812ABCE
	ldrh r0, [r0, #2]
	add r0, r3, r0
	str r0, [r4]
	ldrh r0, [r0, #4]
	b _0812ABE4
_0812ABE0:
	str r5, [r4]
	ldrh r0, [r5, #4]
_0812ABE4:
	add r0, r3, r0
	str r0, [r4, #4]
_0812ABE8:
	ldr r2, [r4]
	ldrb r0, [r2]
	cmp r0, #3
	bne _0812ABF6
	ldrh r0, [r5, #2]
	add r0, r3, r0
	str r0, [r4, #12]
_0812ABF6:
	ldrb r1, [r2, #1]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812AC06
	ldrh r0, [r2, #2]
	add r0, r3, r0
	str r0, [r4, #8]
_0812AC06:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812AB30

