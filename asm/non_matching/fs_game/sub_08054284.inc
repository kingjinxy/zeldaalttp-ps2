	THUMB_FUNC_START sub_08054284
sub_08054284: @ 0x08054284
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08054292:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #11
	bls _0805429C
	b _08054330
_0805429C:
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r2, [r1]
	add r3, r2, #0
	lsl r1, r3, #1
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldr r1, _08054328  @ =gUnknown_081409F0
	add r2, r7, #4
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r2, r1, r3
	ldrh r1, [r2]
	ldr r2, _0805432C  @ =gUnknown_0201EFF8
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, r3
	ldrh r3, [r2]
	add r2, r1, r3
	asr r1, r2, #4
	ldr r2, _08054328  @ =gUnknown_081409F0
	add r3, r7, #4
	ldrb r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r4, #1
	add r4, r3, #0
	lsl r3, r4, #1
	add r4, r2, r3
	ldrh r2, [r4]
	ldr r3, _0805432C  @ =gUnknown_0201EFF8
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #82
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #2
	add r3, r3, #2
	add r4, r3, r4
	ldrh r3, [r4]
	add r2, r2, r3
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08054292
	.byte 0x00
	.byte 0x00
_08054328:
	.4byte gUnknown_081409F0
_0805432C:
	.4byte gUnknown_0201EFF8
_08054330:
	ldr r0, [r7]
	mov r1, #1
	mov r2, #0
	bl sub_080124EC
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0805434E
	ldr r0, [r7]
	ldr r1, [r7, #8]
	str r1, [r0, #76]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	str r1, [r0, #76]
_0805434E:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08054284

