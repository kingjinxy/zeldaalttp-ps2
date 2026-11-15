	THUMB_FUNC_START sub_0804A3D4
sub_0804A3D4: @ 0x0804A3D4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	mov r1, #192
	lsl r1, r1, #5
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	bne _0804A42A
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	mov r1, #224
	lsl r1, r1, #8
	str r1, [r0, #16]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #92
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804A434  @ =0x000021AA
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_0804A42A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804A434:
	.4byte 0x000021AA
	THUMB_FUNC_END sub_0804A3D4

