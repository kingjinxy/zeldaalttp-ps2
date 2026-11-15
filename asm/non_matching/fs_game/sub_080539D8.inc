	THUMB_FUNC_START sub_080539D8
sub_080539D8: @ 0x080539D8
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08053A90
	ldr r0, _08053A98  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08053A98  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _08053A9C  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #10]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _08053A8A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #82
	ldrb r0, [r1]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #0
	bl sub_08012F84
	ldr r1, _08053AA0  @ =gUnknown_0201EFF8
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r3, r1, r2
	ldrh r1, [r3]
	ldr r2, _08053AA0  @ =gUnknown_0201EFF8
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, #2
	add r3, r2, r3
	ldrh r2, [r3]
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	bl sub_08013C8C
_08053A8A:
	ldr r0, [r7]
	bl DeleteThisEntity
_08053A90:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_08053A98:
	.4byte gUnknown_0201F000
_08053A9C:
	.4byte gUnknown_08137B10
_08053AA0:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_080539D8

