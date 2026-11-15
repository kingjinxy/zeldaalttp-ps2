	THUMB_FUNC_START sub_0805EDA0
sub_0805EDA0: @ 0x0805EDA0
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
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
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805EE20  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805EE20  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	add r1, r7, #0
	add r1, r1, #10
	strh r0, [r1]
	ldr r0, _0805EE24  @ =gUnknown_081414FC
	str r0, [r7, #4]
_0805EE14:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _0805EE28  @ =0x0000FFFF
	cmp r1, r0
	bne _0805EE2C
	b _0805EE78
_0805EE20:
	.4byte gUnknown_03000450
_0805EE24:
	.4byte gUnknown_081414FC
_0805EE28:
	.4byte 0x0000FFFF
_0805EE2C:
	add r0, r7, #0
	add r0, r0, #10
	ldr r1, [r7, #4]
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0805EE70
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, _0805EE6C  @ =gUnknown_081414FC
	sub r2, r1, r3
	lsr r1, r2, #1
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #7
	bls _0805EE62
	mov r0, #16
	bl play_sound
_0805EE62:
	ldr r0, [r7]
	bl sub_0805F938
	b _0805EE7E
	.byte 0x00
	.byte 0x00
_0805EE6C:
	.4byte gUnknown_081414FC
_0805EE70:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	b _0805EE14
_0805EE78:
	ldr r0, [r7]
	bl DeleteThisEntity
_0805EE7E:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805EDA0

	.ALIGN 2, 0
