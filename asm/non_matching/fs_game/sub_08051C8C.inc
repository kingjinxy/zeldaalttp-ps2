	THUMB_FUNC_START sub_08051C8C
sub_08051C8C: @ 0x08051C8C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #22]
	cmp r1, #0
	bne _08051D0E
	ldr r1, [r7]
	mov r2, #54
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #96
	ldrh r1, [r2]
	add r2, r1, #0
	sub r2, r2, #56
	cmp r0, r2
	bge _08051D0E
	ldr r0, [r7]
	ldrb r1, [r0, #22]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #22]
	mov r0, #13
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08051D0E
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	add r1, r1, #64
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
_08051D0E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08051C8C

	.byte 0x00
	.byte 0x00
