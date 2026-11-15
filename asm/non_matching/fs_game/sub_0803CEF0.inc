	THUMB_FUNC_START sub_0803CEF0
sub_0803CEF0: @ 0x0803CEF0
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r1, r2, #0
	add r0, r3, #0
	add r2, r7, #0
	add r2, r2, #8
	strb r1, [r2]
	add r1, r7, #0
	add r1, r1, #9
	strb r0, [r1]
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, [r7, #4]
	add r3, r7, #0
	add r3, r3, #8
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r3, r4, #0
	ldrh r2, [r2, #50]
	add r3, r3, r2
	add r2, r3, #0
	lsl r3, r2, #16
	asr r2, r3, #16
	ldr r3, [r7, #4]
	add r4, r7, #0
	add r4, r4, #9
	mov r5, #0
	ldrsb r5, [r4, r5]
	add r4, r5, #0
	ldrh r3, [r3, #54]
	add r4, r4, r3
	add r3, r4, #0
	lsl r4, r3, #16
	asr r3, r4, #16
	bl 0x08003F54
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _0803CF4E
_0803CF4E:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803CEF0

	.byte 0x00
	.byte 0x00
