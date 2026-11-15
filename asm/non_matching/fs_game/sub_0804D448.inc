	THUMB_FUNC_START sub_0804D448
sub_0804D448: @ 0x0804D448
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #128
	bne _0804D4E8
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #3
	bhi _0804D4E2
	add r0, r7, #0
	add r0, r0, #9
	ldr r1, _0804D4F0  @ =gUnknown_0814747C
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r1, r1, r3
	ldrb r2, [r1]
	strb r2, [r0]
	add r4, r7, #0
	add r4, r4, #8
	bl sub_0800099C
	ldr r1, _0804D4F4  @ =gUnknown_0814744C
	add r2, r7, #0
	add r2, r2, #9
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, _0804D4F8  @ =gUnknown_03006C80
	ldr r5, [r7]
	ldrb r3, [r5, #23]
	add r5, r2, #0
	add r2, r2, #84
	add r3, r2, r3
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	ldr r3, [r1]
	add r1, r2, r3
	mov r2, #31
	and r0, r0, r2
	ldr r1, [r1]
	add r0, r0, r1
	ldrb r1, [r0]
	strb r1, [r4]
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #255
	beq _0804D4E2
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _0804D4E2
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D4E2
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804D4E2:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804D4E8:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0804D4F0:
	.4byte gUnknown_0814747C
_0804D4F4:
	.4byte gUnknown_0814744C
_0804D4F8:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0804D448

