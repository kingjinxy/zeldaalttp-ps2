	THUMB_FUNC_START sub_08020EBC
sub_08020EBC: @ 0x08020EBC
	push {r4-r6,lr}
	add r4, r0, #0
	mov r5, #0
	add r2, r4, #0
	add r2, r2, #112
	ldrh r0, [r2]
	add r0, r0, #8
	strh r0, [r2]
	add r3, r4, #0
	add r3, r3, #114
	ldrh r0, [r3]
	sub r0, r0, #8
	strh r0, [r3]
	ldrh r1, [r2]
	ldr r6, _08020F54  @ =gUnknown_0813B8F0
	ldrb r0, [r4, #10]
	lsl r0, r0, #3
	add r0, r0, r6
	ldr r0, [r0]
	cmp r1, r0
	blt _08020EEA
	strh r0, [r2]
	mov r5, #1
_08020EEA:
	ldrh r1, [r3]
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r6
	ldr r0, [r0]
	cmp r1, r0
	bgt _08020F04
	strh r0, [r3]
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
_08020F04:
	ldr r0, [r4, #56]
	ldr r1, _08020F58  @ =0xFFFF8000
	add r0, r0, r1
	str r0, [r4, #56]
	ldr r1, _08020F5C  @ =gUnknown_0813B8CC
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	mov r2, #58
	ldrsh r1, [r4, r2]
	ldr r0, [r0]
	cmp r0, r1
	blt _08020F2C
	strh r0, [r4, #58]
	cmp r5, #2
	bne _08020F2C
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #1
	strb r0, [r4, #23]
_08020F2C:
	ldr r0, _08020F60  @ =gUnknown_03000488
	add r1, r4, #0
	add r1, r1, #112
	ldrh r1, [r1]
	mov r2, #0
	strh r1, [r0]
	add r1, r4, #0
	add r1, r1, #114
	ldrh r1, [r1]
	strh r1, [r0, #2]
	strh r2, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	add r0, r4, #0
	bl 0x08003828
	pop {r4-r6}
	pop {r0}
	bx r0
_08020F54:
	.4byte gUnknown_0813B8F0
_08020F58:
	.4byte 0xFFFF8000
_08020F5C:
	.4byte gUnknown_0813B8CC
_08020F60:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08020EBC

