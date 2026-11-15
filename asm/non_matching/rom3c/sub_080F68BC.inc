	THUMB_FUNC_START sub_080F68BC
sub_080F68BC: @ 0x080F68BC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080F68D8  @ =gRam
	ldr r1, _080F68DC  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r3, [r5]
	cmp r3, #0
	beq _080F68E0
	add r0, r4, #0
	bl sub_080F6974
	b _080F6956
_080F68D8:
	.4byte gRam
_080F68DC:
	.4byte 0x00000FC2
_080F68E0:
	ldr r0, _080F6914  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F6918  @ =0x00000F72
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _080F691C
	bl GetRandomInt
	mov r3, #31
	and r3, r3, r0
	mov r0, #32
	orr r3, r3, r0
	strb r3, [r5]
	mov r0, #7
	and r3, r3, r0
	b _080F6932
_080F6914:
	.4byte 0x00000F52
_080F6918:
	.4byte 0x00000F72
_080F691C:
	strb r3, [r1]
	mov r0, #48
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F695C  @ =gUnknown_08179A30
	add r0, r0, r1
	ldrb r3, [r0]
_080F6932:
	ldr r2, _080F6960  @ =gRam
	ldr r0, _080F6964  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080F6968  @ =gUnknown_08179A20
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F696C  @ =0x00000F12
	add r2, r2, r1
	add r2, r4, r2
	ldr r0, _080F6970  @ =gUnknown_08179A28
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080F6974
_080F6956:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F695C:
	.4byte gUnknown_08179A30
_080F6960:
	.4byte gRam
_080F6964:
	.4byte 0x00000F22
_080F6968:
	.4byte gUnknown_08179A20
_080F696C:
	.4byte 0x00000F12
_080F6970:
	.4byte gUnknown_08179A28
	THUMB_FUNC_END sub_080F68BC

