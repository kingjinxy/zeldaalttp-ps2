	THUMB_FUNC_START sub_08034058
sub_08034058: @ 0x08034058
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r3, [r4, #88]
	mov r0, #50
	ldrsh r1, [r3, r0]
	mov r2, #50
	ldrsh r0, [r4, r2]
	cmp r1, r0
	bne _0803407E
	mov r5, #54
	ldrsh r0, [r3, r5]
	sub r0, r0, #32
	mov r2, #54
	ldrsh r1, [r4, r2]
	cmp r0, r1
	bne _0803407E
	mov r0, #2
	strb r0, [r4, #20]
	b _080340A2
_0803407E:
	mov r5, #50
	ldrsh r0, [r4, r5]
	mov r2, #54
	ldrsh r1, [r4, r2]
	mov r5, #50
	ldrsh r2, [r3, r5]
	ldrh r3, [r3, #54]
	sub r3, r3, #32
	lsl r3, r3, #16
	asr r3, r3, #16
	bl 0x08003F54
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0803CC20
_080340A2:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034058

