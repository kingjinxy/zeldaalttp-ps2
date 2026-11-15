	THUMB_FUNC_START sub_08029FA0
sub_08029FA0: @ 0x08029FA0
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #88]
	ldrh r1, [r0, #50]
	strh r1, [r4, #50]
	ldrh r1, [r0, #54]
	strh r1, [r4, #54]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _08029FC6
	str r0, [r4, #116]
	add r1, r4, #0
	add r1, r1, #69
	mov r0, #0
	strb r0, [r1]
	mov r0, #163
	bl 0x08003DFC
_08029FC6:
	ldr r0, [r4, #116]
	sub r0, r0, #1
	str r0, [r4, #116]
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	bne _0802A00C
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	add r0, r4, #0
	bl sub_0802A028
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r2, #54
	ldrsh r1, [r4, r2]
	mov r3, #252
	lsl r3, r3, #1
	add r2, r3, #0
	bl 0x08003F54
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0802A00C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08029FA0

	.byte 0x00
	.byte 0x00
