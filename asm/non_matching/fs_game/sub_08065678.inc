	THUMB_FUNC_START sub_08065678
sub_08065678: @ 0x08065678
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08003828
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
	mov r0, #32
	cmn r1, r0
	blt _080656E6
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _080656F0  @ =0x00000902
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_080656E6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080656F0:
	.4byte 0x00000902
	THUMB_FUNC_END sub_08065678

