	THUMB_FUNC_START sub_08018C4C
sub_08018C4C: @ 0x08018C4C
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #24]
	sub r0, r0, #1
	strb r0, [r2, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08018C60
	mov r0, #3
	strb r0, [r2, #20]
_08018C60:
	ldrb r1, [r2, #10]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08018C8C
	ldr r1, _08018C88  @ =gUnknown_0201F000
	add r0, r2, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #120]
	and r0, r0, r1
	cmp r0, r1
	bne _08018CAC
	add r0, r2, #0
	bl DeleteThisEntity
	b _08018CAC
_08018C88:
	.4byte gUnknown_0201F000
_08018C8C:
	lsl r0, r1, #24
	lsr r3, r0, #24
	cmp r3, #1
	bne _08018CAC
	ldr r1, _08018CB0  @ =gUnknown_0201F000
	add r0, r2, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #116]
	and r0, r0, r1
	cmp r0, r1
	beq _08018CAC
	strb r3, [r2, #20]
_08018CAC:
	pop {r0}
	bx r0
_08018CB0:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08018C4C

