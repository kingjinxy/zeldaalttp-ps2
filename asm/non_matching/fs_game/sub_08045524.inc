	THUMB_FUNC_START sub_08045524
sub_08045524: @ 0x08045524
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_080660BC
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	mov r3, #128
	lsl r3, r3, #8
	add r1, r2, r3
	str r1, [r0, #56]
	ldr r0, [r7]
	mov r2, #58
	ldrsh r1, [r0, r2]
	mov r0, #48
	cmn r1, r0
	bne _080455A6
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r1, _080455B0  @ =0x00000904
	add r0, r1, #0
	bl sub_0800D67C
_080455A6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080455B0:
	.4byte 0x00000904
	THUMB_FUNC_END sub_08045524

