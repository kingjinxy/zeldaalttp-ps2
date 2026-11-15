	THUMB_FUNC_START sub_08052494
sub_08052494: @ 0x08052494
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _08052518  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0805250E
	mov r0, #13
	mov r1, #10
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805250E
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	mov r3, #7
	and r2, r2, r3
	ldrh r1, [r1, #50]
	add r1, r1, r2
	add r2, r1, #0
	sub r1, r2, #3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	mov r3, #7
	and r2, r2, r3
	ldrh r1, [r1, #54]
	add r1, r1, r2
	add r2, r1, #0
	sub r1, r2, #3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_0805250E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08052518:
	.4byte gUnknown_03000948
	THUMB_FUNC_END sub_08052494

