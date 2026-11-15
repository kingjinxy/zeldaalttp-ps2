	THUMB_FUNC_START sub_080681D0
sub_080681D0: @ 0x080681D0
	push {r4-r6,lr}
	mov r12, r0
	mov r4, #192
	lsl r4, r4, #18
	add r0, r0, #36
	ldrb r0, [r0]
	strb r0, [r4, #6]
	mov r0, r12
	add r0, r0, #37
	ldrb r0, [r0]
	strb r0, [r4, #7]
	mov r0, r12
	ldr r2, [r0]
	mov r0, #8
	and r0, r0, r2
	lsl r0, r0, #4
	mov r1, #4
	and r2, r2, r1
	orr r0, r0, r2
	strb r0, [r4, #8]
	mov r3, #0
	mov r0, r12
	ldrb r1, [r0, #8]
	cmp r1, #0
	beq _08068236
	add r6, r4, #0
	ldr r2, _0806821C  @ =gUnknown_0300000A
	ldr r5, _08068220  @ =gUnknown_0814C6CC
	mov r4, r12
	add r4, r4, #8
_0806820C:
	ldrb r0, [r6, #5]
	cmp r0, #0
	bne _08068224
	add r0, r1, r5
	ldrb r0, [r0]
	strb r0, [r2]
	b _08068226
	.byte 0x00
	.byte 0x00
_0806821C:
	.4byte gUnknown_0300000A
_08068220:
	.4byte gUnknown_0814C6CC
_08068224:
	strb r1, [r2]
_08068226:
	add r2, r2, #1
	add r3, r3, #1
	cmp r3, #5
	bgt _08068236
	add r0, r4, r3
	ldrb r1, [r0]
	cmp r1, #0
	bne _0806820C
_08068236:
	mov r0, #192
	lsl r0, r0, #18
	strb r3, [r0, #9]
	ldrb r0, [r0, #5]
	mov r1, #32
	cmp r0, #0
	bne _08068246
	mov r1, #255
_08068246:
	cmp r3, #5
	bgt _08068256
	ldr r2, _0806825C  @ =gUnknown_0300000A
_0806824C:
	add r0, r3, r2
	strb r1, [r0]
	add r3, r3, #1
	cmp r3, #5
	ble _0806824C
_08068256:
	pop {r4-r6}
	pop {r0}
	bx r0
_0806825C:
	.4byte gUnknown_0300000A
	THUMB_FUNC_END sub_080681D0

