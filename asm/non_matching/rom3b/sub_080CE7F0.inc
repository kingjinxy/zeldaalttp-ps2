	THUMB_FUNC_START sub_080CE7F0
sub_080CE7F0: @ 0x080CE7F0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080CE81C  @ =gRam
	ldr r1, _080CE820  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	mov r1, #2
	strb r1, [r0]
	ldr r3, _080CE824  @ =0x00000FC2
	add r0, r5, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #32
	beq _080CE828
	add r1, r0, #0
	add r0, r4, #0
	bl sub_080CE9A8
	b _080CE8CC
	.byte 0x00
	.byte 0x00
_080CE81C:
	.4byte gRam
_080CE820:
	.4byte 0x000010F2
_080CE824:
	.4byte 0x00000FC2
_080CE828:
	ldr r1, _080CE868  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r3, _080CE86C  @ =0x00001770
	add r0, r5, r3
	strb r2, [r0]
	ldr r1, _080CE870  @ =0x00001716
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _080CE85E
	bl sub_080CAEC0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080CE85E
	ldr r3, _080CE874  @ =0x00000FF2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #213
	bls _080CE87C
	ldr r0, _080CE878  @ =0x00000A3C
	add r1, r5, r0
	mov r0, #23
	strh r0, [r1]
_080CE85E:
	add r0, r4, #0
	mov r1, #0
	bl sub_080CE9A8
	b _080CE8CC
_080CE868:
	.4byte 0x00000FA2
_080CE86C:
	.4byte 0x00001770
_080CE870:
	.4byte 0x00001716
_080CE874:
	.4byte 0x00000FF2
_080CE878:
	.4byte 0x00000A3C
_080CE87C:
	cmp r0, #122
	beq _080CE8C0
	ldr r1, _080CE8AC  @ =0x000009DA
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #205
	beq _080CE896
	cmp r0, #105
	beq _080CE896
	cmp r0, #173
	beq _080CE896
	cmp r0, #236
	bne _080CE8B8
_080CE896:
	ldr r0, _080CE8B0  @ =gRam
	ldr r3, _080CE8B4  @ =0x00000AA8
	add r0, r0, r3
	ldrh r2, [r0]
	mov r3, #128
	lsl r3, r3, #8
	add r1, r3, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _080CE8CC
	.byte 0x00
	.byte 0x00
_080CE8AC:
	.4byte 0x000009DA
_080CE8B0:
	.4byte gRam
_080CE8B4:
	.4byte 0x00000AA8
_080CE8B8:
	add r0, r4, #0
	bl sub_080CE8D4
	b _080CE8CC
_080CE8C0:
	bl sub_08075804
	add r0, r4, #0
	mov r1, #0
	bl sub_080CE9A8
_080CE8CC:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CE7F0

	.byte 0x00
	.byte 0x00
