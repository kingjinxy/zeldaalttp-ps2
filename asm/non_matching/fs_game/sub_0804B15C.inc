	THUMB_FUNC_START sub_0804B15C
sub_0804B15C: @ 0x0804B15C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #112]
	sub r2, r3, #1
	add r1, r2, #0
	str r1, [r0, #112]
	mov r0, #1
	cmn r1, r0
	beq _0804B1F8
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #24]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _0804B1F2
	ldr r0, _0804B1F4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #23]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0804B1F2:
	b _0804B1FE
_0804B1F4:
	.4byte gUnknown_03006A30
_0804B1F8:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804B1FE:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804B15C

	.byte 0x00
	.byte 0x00
