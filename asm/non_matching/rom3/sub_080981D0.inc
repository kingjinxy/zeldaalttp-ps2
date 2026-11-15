	THUMB_FUNC_START sub_080981D0
sub_080981D0: @ 0x080981D0
	push {r4,r5,lr}
	ldr r5, _08098220  @ =gRam
	ldr r1, _08098224  @ =0x000016FC
	add r0, r5, r1
	ldrb r0, [r0]
	mov r1, #15
	add r4, r1, #0
	and r4, r4, r0
	cmp r4, #0
	bne _0809829C
	ldr r2, _08098228  @ =0x00000545
	add r0, r5, r2
	ldrb r0, [r0]
	add r4, r1, #0
	and r4, r4, r0
	cmp r4, #0
	bne _0809829C
	ldr r3, _0809822C  @ =0x000016D6
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _08098230  @ =0x000016D7
	add r0, r5, r1
	strb r4, [r0]
	bl sub_08097F04
	ldr r2, _08098234  @ =0x000017DA
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08098280
	ldr r3, _08098238  @ =0x00001804
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08098240
	ldr r1, _0809823C  @ =0x000017CE
	add r0, r5, r1
	ldrb r4, [r0]
	b _0809829C
	.byte 0x00
	.byte 0x00
_08098220:
	.4byte gRam
_08098224:
	.4byte 0x000016FC
_08098228:
	.4byte 0x00000545
_0809822C:
	.4byte 0x000016D6
_08098230:
	.4byte 0x000016D7
_08098234:
	.4byte 0x000017DA
_08098238:
	.4byte 0x00001804
_0809823C:
	.4byte 0x000017CE
_08098240:
	ldr r2, _08098270  @ =0x000017CA
	add r0, r5, r2
	ldr r3, _08098274  @ =0x000017CC
	add r1, r5, r3
	ldrh r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080982E6
	ldr r1, _08098278  @ =0x000016FA
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _0809827C  @ =0x00001750
	add r0, r5, r2
	strb r4, [r0]
	add r3, r3, #19
	add r0, r5, r3
	strb r4, [r0]
	add r1, r1, #188
	add r0, r5, r1
	strb r4, [r0]
	bl sub_08092B0C
	b _080982E6
_08098270:
	.4byte 0x000017CA
_08098274:
	.4byte 0x000017CC
_08098278:
	.4byte 0x000016FA
_0809827C:
	.4byte 0x00001750
_08098280:
	ldr r2, _08098294  @ =0x00001718
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #4
	beq _080982E6
	ldr r3, _08098298  @ =0x000016D4
	add r0, r5, r3
	strb r4, [r0]
	b _080982E6
	.byte 0x00
	.byte 0x00
_08098294:
	.4byte 0x00001718
_08098298:
	.4byte 0x000016D4
_0809829C:
	ldr r2, _0809832C  @ =gRam
	ldr r5, _08098330  @ =0x000017CE
	add r3, r2, r5
	ldrb r0, [r3]
	cmp r4, r0
	beq _080982C2
	ldr r1, _08098334  @ =0x000016D0
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	sub r5, r5, #253
	add r0, r2, r5
	strb r1, [r0]
	add r5, r5, #90
	add r0, r2, r5
	strb r1, [r0]
	sub r5, r5, #49
	add r0, r2, r5
	strb r1, [r0]
_080982C2:
	strb r4, [r3]
	ldr r1, _08098338  @ =0x000017DA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080982DE
	ldr r3, _0809833C  @ =0x000017C2
	add r0, r2, r3
	mov r1, #192
	lsl r1, r1, #1
	strh r1, [r0]
	ldr r5, _08098340  @ =0x000017C4
	add r0, r2, r5
	strh r1, [r0]
_080982DE:
	bl sub_08097A74
	bl sub_08097D70
_080982E6:
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _080982FA
	bl sub_0809380C
	bl sub_08094460
_080982FA:
	ldr r4, _0809832C  @ =gRam
	ldr r0, _08098344  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	mov r5, #0
	strb r0, [r2]
	bl sub_0809380C
	bl sub_080975B4
	bl sub_0809407C
	bl sub_08096F30
	ldr r1, _08098348  @ =0x0000178B
	add r4, r4, r1
	strb r5, [r4]
	bl sub_0809E394
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809832C:
	.4byte gRam
_08098330:
	.4byte 0x000017CE
_08098334:
	.4byte 0x000016D0
_08098338:
	.4byte 0x000017DA
_0809833C:
	.4byte 0x000017C2
_08098340:
	.4byte 0x000017C4
_08098344:
	.4byte 0x00001727
_08098348:
	.4byte 0x0000178B
	THUMB_FUNC_END sub_080981D0

