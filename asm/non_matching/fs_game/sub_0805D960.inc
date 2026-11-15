	THUMB_FUNC_START sub_0805D960
sub_0805D960: @ 0x0805D960
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _0805D98C
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _0805D9B6
_0805D98C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	ldr r0, _0805D9C0  @ =0x00000197
	cmp r1, r0
	ble _0805D9B6
	ldr r0, [r7]
	bl DeleteThisEntity
_0805D9B6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805D9C0:
	.4byte 0x00000197
	THUMB_FUNC_END sub_0805D960

