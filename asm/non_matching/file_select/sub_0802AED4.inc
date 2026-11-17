	THUMB_FUNC_START sub_0802AED4
sub_0802AED4: @ 0x0802AED4
	push {r4,r5,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802AF90
	mov r0, #30
	strb r0, [r4, #23]
	bl sub_0800099C
	ldr r2, [r4, #76]
	add r2, r2, #62
	ldr r3, _0802AF3C  @ =gUnknown_084276F4
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
	bl sub_0800099C
	mov r1, #7
	and r0, r0, r1
	mov r1, #240
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #70
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #252
	strb r0, [r1]
	ldrb r1, [r4, #10]
	cmp r1, #1
	bne _0802AF8A
	ldr r0, _0802AF40  @ =gUnknown_03005AD8
	ldrb r0, [r0]
	cmp r0, #111
	bhi _0802AF8A
	strb r1, [r4, #11]
	ldr r2, [r4, #108]
	ldr r0, _0802AF44  @ =0x0000012B
	cmp r2, r0
	bhi _0802AF48
	mov r1, #1
	b _0802AF62
	.byte 0x00
	.byte 0x00
_0802AF3C:
	.4byte gUnknown_084276F4
_0802AF40:
	.4byte gUnknown_03005AD8
_0802AF44:
	.4byte 0x0000012B
_0802AF48:
	ldr r0, _0802AF54  @ =0x000001DF
	cmp r2, r0
	bhi _0802AF58
	mov r1, #2
	b _0802AF62
	.byte 0x00
	.byte 0x00
_0802AF54:
	.4byte 0x000001DF
_0802AF58:
	ldr r0, _0802B000  @ =0x00000383
	mov r1, #8
	cmp r2, r0
	bhi _0802AF62
	mov r1, #3
_0802AF62:
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _0802AF8A
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803D3D0
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	mov r1, #128
	add r2, r5, #0
	add r2, r2, #43
	orr r0, r0, r1
	strb r0, [r2]
_0802AF8A:
	mov r0, #140
	bl sub_08003DFC
_0802AF90:
	ldrb r0, [r4, #10]
	cmp r0, #1
	bne _0802AFC8
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _0802AFC8
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802AFB2
	mov r0, #60
	strb r0, [r4, #24]
	ldr r0, [r4, #104]
	sub r0, r0, #1
	str r0, [r4, #104]
_0802AFB2:
	ldr r0, [r4, #108]
	add r0, r0, #1
	str r0, [r4, #108]
	ldr r0, [r4, #104]
	cmp r0, #0
	bne _0802AFC8
	strb r0, [r4, #10]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_0802AFC8:
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _0802B008
	sub r0, r0, #1
	strb r0, [r4, #23]
	ldr r0, _0802B004  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r5, #3
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0802B010
	bl sub_0800099C
	ldr r1, [r4, #96]
	and r0, r0, r5
	add r1, r1, r0
	sub r1, r1, #2
	strh r1, [r4, #50]
	bl sub_0800099C
	ldr r1, [r4, #100]
	and r0, r0, r5
	add r1, r1, r0
	sub r1, r1, #2
	strh r1, [r4, #54]
	b _0802B010
	.byte 0x00
	.byte 0x00
_0802B000:
	.4byte 0x00000383
_0802B004:
	.4byte gUnknown_03000E20
_0802B008:
	ldr r0, [r4, #96]
	strh r0, [r4, #50]
	ldr r0, [r4, #100]
	strh r0, [r4, #54]
_0802B010:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802AED4

	.byte 0x00
	.byte 0x00
