	THUMB_FUNC_START sub_08024778
sub_08024778: @ 0x08024778
	push {r4,lr}
	add r4, r0, #0
	add r2, r4, #0
	add r2, r2, #110
	ldrh r1, [r2]
	mov r0, #192
	and r0, r0, r1
	cmp r0, #192
	bne _080247A4
	mov r0, #16
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024BDC
	add r0, r4, #0
	bl sub_08024C90
	ldr r0, [r4, #88]
	add r1, r4, #0
	bl sub_0803D3D0
	b _0802482C
_080247A4:
	mov r0, #63
	and r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080247D2
	ldr r1, [r4, #76]
	ldrb r0, [r1, #10]
	cmp r0, #3
	bhi _080247D2
	ldr r2, _08024824  @ =gUnknown_03006A30
	add r1, r0, #0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r4, #100]
_080247D2:
	ldrb r0, [r4, #23]
	sub r1, r0, #1
	strb r1, [r4, #23]
	lsl r0, r1, #24
	cmp r0, #0
	beq _08024828
	mov r0, #3
	and r1, r1, r0
	cmp r1, #0
	bne _0802481C
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x080040C4
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #2
	asr r1, r0, #2
	mov r0, #7
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _0802481C
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl 0x08003870
_0802481C:
	add r0, r4, #0
	bl sub_0803CC20
	b _0802482C
_08024824:
	.4byte gUnknown_03006A30
_08024828:
	mov r0, #21
	strb r0, [r4, #20]
_0802482C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024778

	.byte 0x00
	.byte 0x00
