	THUMB_FUNC_START sub_0800E3B0
sub_0800E3B0: @ 0x0800E3B0
	push {r4-r6,lr}
	sub sp, sp, #4
	add r5, r0, #0
	cmp r5, #0
	beq _0800E3CA
	ldr r0, _0800E420  @ =gTextbox
	ldr r1, _0800E424  @ =0x00000109
	add r2, r0, r1
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	mov r5, #2
_0800E3CA:
	mov r0, #1
	neg r0, r0
	str r0, [sp]
	ldr r1, _0800E428  @ =gUnknown_02002490
	ldr r2, _0800E42C  @ =0x010001A0
	mov r0, sp
	bl CpuFastSet
	ldr r4, _0800E420  @ =gTextbox
	ldr r0, _0800E424  @ =0x00000109
	add r6, r4, r0
	ldrb r0, [r6]
	bl sub_0800EB08
	ldrb r0, [r6]
	mov r3, #204
	cmp r0, #0
	bne _0800E3F0
	mov r3, #152
_0800E3F0:
	add r1, r4, #0
	add r1, r1, #212
	add r0, r5, r1
	mov r2, #0
	strb r3, [r0]
	add r0, r5, #1
	add r0, r0, r1
	add r1, r3, #1
	strb r1, [r0]
	add r0, r4, #0
	add r0, r0, #91
	strb r2, [r0]
	add r0, r0, #164
	ldrb r0, [r0]
	mov r1, #64
	orr r1, r1, r0
	add r0, r4, #0
	bl sub_0800DFC4
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800E420:
	.4byte gTextbox
_0800E424:
	.4byte 0x00000109
_0800E428:
	.4byte gUnknown_02002490
_0800E42C:
	.4byte 0x010001A0
	THUMB_FUNC_END sub_0800E3B0

