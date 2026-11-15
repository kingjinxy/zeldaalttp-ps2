	THUMB_FUNC_START sub_0805E40C
sub_0805E40C: @ 0x0805E40C
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0805E43C
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
_0805E43C:
	ldr r0, _0805E4BC  @ =gUnknown_030004A0
	ldr r1, _0805E4BC  @ =gUnknown_030004A0
	ldr r2, _0805E4C0  @ =gUnknown_084292D0
	ldr r3, [r7]
	ldrb r4, [r3, #23]
	add r3, r4, #0
	lsl r4, r3, #1
	add r2, r2, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #22]
	add r1, r2, r3
	ldrh r2, [r0, #22]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #22]
	ldr r0, _0805E4BC  @ =gUnknown_030004A0
	ldr r1, _0805E4BC  @ =gUnknown_030004A0
	ldr r2, _0805E4C0  @ =gUnknown_084292D0
	ldr r3, [r7]
	ldrb r4, [r3, #23]
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r4, #1
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #24]
	add r1, r2, r3
	ldrh r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #24]
	ldr r0, _0805E4C4  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #15
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0805E4D8
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	cmp r2, #23
	beq _0805E4C8
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r3, r2, #1
	add r1, r3, #0
	b _0805E4CA
	.byte 0x00
	.byte 0x00
_0805E4BC:
	.4byte gUnknown_030004A0
_0805E4C0:
	.4byte gUnknown_084292D0
_0805E4C4:
	.4byte gUnknown_03000948
_0805E4C8:
	mov r1, #0
_0805E4CA:
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_0805E4D8:
	ldr r0, _0805E4F4  @ =gUnknown_02016D60
	ldr r1, [r7]
	ldrb r0, [r0, #8]
	ldrb r1, [r1, #11]
	cmp r0, r1
	beq _0805E4EA
	ldr r0, [r7]
	bl DeleteThisEntity
_0805E4EA:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805E4F4:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0805E40C

