	THUMB_FUNC_START sub_080F4C3C
sub_080F4C3C: @ 0x080F4C3C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080F50D4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F4CAC
	ldr r3, _080F4C90  @ =gRam
	ldr r1, _080F4C94  @ =0x00000FC2
	add r0, r3, r1
	add r1, r4, r0
	ldrb r5, [r1]
	cmp r5, #0
	bne _080F4CAC
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080F4C98  @ =gUnknown_081796EC
	ldr r2, _080F4C9C  @ =0x00000F62
	add r0, r3, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F4CA4
	ldr r5, _080F4CA0  @ =0x00000F92
	add r0, r3, r5
	add r0, r4, r0
	strb r1, [r0]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	b _080F4CAC
	.byte 0x00
	.byte 0x00
_080F4C90:
	.4byte gRam
_080F4C94:
	.4byte 0x00000FC2
_080F4C98:
	.4byte gUnknown_081796EC
_080F4C9C:
	.4byte 0x00000F62
_080F4CA0:
	.4byte 0x00000F92
_080F4CA4:
	ldr r1, _080F4CB4  @ =0x00000FA2
	add r0, r3, r1
	add r0, r6, r0
	strb r5, [r0]
_080F4CAC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4CB4:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F4C3C

