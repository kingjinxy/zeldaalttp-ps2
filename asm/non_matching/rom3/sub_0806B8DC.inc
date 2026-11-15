	THUMB_FUNC_START sub_0806B8DC
sub_0806B8DC: @ 0x0806B8DC
	push {r4,r5,lr}
	ldr r1, _0806B944  @ =gUnknown_0814CA1C
	ldr r4, _0806B948  @ =gRam
	ldr r0, _0806B94C  @ =0x000009E8
	add r5, r4, r0
	ldrh r0, [r5]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r1, _0806B950  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0806B954  @ =0x00000A2C
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _0806B958  @ =0x00000958
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #149
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _0806B95C  @ =0x00000956
	add r0, r4, r1
	ldrh r0, [r0]
	add r2, r2, #4
	add r4, r4, r2
	strh r0, [r4]
	ldrh r0, [r5]
	sub r0, r0, #7
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bls _0806B938
	bl sub_080975B4
	bl sub_08096F30
_0806B938:
	bl sub_080A3EE0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B944:
	.4byte gUnknown_0814CA1C
_0806B948:
	.4byte gRam
_0806B94C:
	.4byte 0x000009E8
_0806B950:
	.4byte 0x00000952
_0806B954:
	.4byte 0x00000A2C
_0806B958:
	.4byte 0x00000958
_0806B95C:
	.4byte 0x00000956
	THUMB_FUNC_END sub_0806B8DC

