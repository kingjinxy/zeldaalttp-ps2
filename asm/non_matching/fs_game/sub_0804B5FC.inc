	THUMB_FUNC_START sub_0804B5FC
sub_0804B5FC: @ 0x0804B5FC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	cmp r1, #0
	beq _0804B628
	mov r1, #128
	lsl r1, r1, #6
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	bne _0804B626
	ldr r0, [r7]
	bl DeleteThisEntity
_0804B626:
	b _0804B700
_0804B628:
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
	beq _0804B6FA
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	mov r1, #58
	ldrsh r0, [r0, r1]
	mov r3, #58
	ldrsh r1, [r2, r3]
	cmp r0, r1
	ble _0804B680
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #58]
	sub r1, r2, #1
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	b _0804B6A8
_0804B680:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #121
	ldrb r0, [r1]
	cmp r0, #4
	bne _0804B6A8
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
_0804B6A8:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	mov r1, #50
	ldrsh r0, [r0, r1]
	mov r3, #50
	ldrsh r1, [r2, r3]
	cmp r0, r1
	bne _0804B6F8
	ldr r1, [r7]
	mov r2, #54
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	mov r3, #54
	ldrsh r1, [r2, r3]
	add r2, r1, #0
	add r2, r2, #8
	cmp r0, r2
	bne _0804B6F8
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r7]
	mov r2, #0
	mov r3, #8
	bl sub_0803CEF0
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
	bl sub_0803CC20
_0804B6F8:
	b _0804B700
_0804B6FA:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804B700:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804B5FC

