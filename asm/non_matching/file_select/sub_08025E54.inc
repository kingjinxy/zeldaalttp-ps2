	THUMB_FUNC_START sub_08025E54
sub_08025E54: @ 0x08025E54
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldr r1, [r4, #12]
	ldr r0, _08025EB0  @ =0x000007FF
	cmp r1, r0
	bgt _08025E6A
	add r0, r1, #0
	add r0, r0, #32
	str r0, [r4, #12]
_08025E6A:
	ldrh r5, [r4, #50]
	ldrh r6, [r4, #54]
	ldr r0, [r4, #84]
	add r0, r0, #42
	ldrb r0, [r0]
	lsl r0, r0, #3
	sub r0, r0, #8
	mov r1, #24
	and r0, r0, r1
	mov r1, #43
	add r1, r1, r4
	mov r8, r1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0802614C
	ldrh r0, [r4, #50]
	sub r0, r0, r5
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #16
	bhi _08025EB4
	strh r5, [r4, #50]
	strh r6, [r4, #54]
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #32
	strb r0, [r4, #23]
	ldr r2, [r4, #84]
	ldrb r0, [r2, #24]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #24]
	b _08025ED6
_08025EB0:
	.4byte 0x000007FF
_08025EB4:
	lsl r0, r5, #16
	asr r0, r0, #16
	lsl r1, r6, #16
	asr r1, r1, #16
	mov r3, #50
	ldrsh r2, [r4, r3]
	mov r7, #54
	ldrsh r3, [r4, r7]
	bl 0x08003F54
	mov r1, r8
	strb r0, [r1]
	strh r5, [r4, #50]
	strh r6, [r4, #54]
	add r0, r4, #0
	bl sub_0803CC20
_08025ED6:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025E54

