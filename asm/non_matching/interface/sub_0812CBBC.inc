	THUMB_FUNC_START sub_0812CBBC
sub_0812CBBC: @ 0x0812CBBC
	push {lr}
	add r2, r0, #0
	ldrh r0, [r2]
	ldr r1, _0812CBD4  @ =0xFFFFFD00
	add r0, r0, r1
	cmp r0, #4
	bhi _0812CC1E
	lsl r0, r0, #2
	ldr r1, _0812CBD8  @ =0x0812CBDC
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0812CBD4:
	.4byte 0xFFFFFD00
_0812CBD8:
	.4byte 0x0812CBDC
	.4byte _0812CC10
	.4byte _0812CBF0
	.4byte _0812CBFA
	.4byte _0812CC04
	.4byte _0812CC18
_0812CBF0:
	ldr r0, [r2, #8]
	ldr r1, [r2, #4]
	bl _call_via_r1
	b _0812CC1E
_0812CBFA:
	ldr r1, _0812CC00  @ =gUnknown_03000184
	b _0812CC06
	.byte 0x00
	.byte 0x00
_0812CC00:
	.4byte gUnknown_03000184
_0812CC04:
	ldr r1, _0812CC0C  @ =gUnknown_03000180
_0812CC06:
	ldr r0, [r2, #4]
	str r0, [r1]
	b _0812CC1E
_0812CC0C:
	.4byte gUnknown_03000180
_0812CC10:
	ldrb r0, [r2, #4]
	bl sub_0812AF5C
	b _0812CC1E
_0812CC18:
	ldrb r0, [r2, #4]
	bl sub_0812AF6C
_0812CC1E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812CBBC

	.byte 0x00
	.byte 0x00
