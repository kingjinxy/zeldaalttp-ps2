	THUMB_FUNC_START sub_08024370
sub_08024370: @ 0x08024370
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0802438E
	mov r0, #11
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024BDC
	b _08024410
_0802438E:
	add r0, r4, #0
	add r0, r0, #65
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080243B6
	ldr r1, [r4, #76]
	ldrb r0, [r1, #10]
	cmp r0, #3
	bhi _080243B6
	ldr r2, _08024408  @ =gUnknown_03006A30
	add r1, r0, #0
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r4, #100]
_080243B6:
	ldrb r0, [r4, #23]
	sub r1, r0, #1
	strb r1, [r4, #23]
	lsl r0, r1, #24
	cmp r0, #0
	beq _0802440C
	mov r0, #3
	and r1, r1, r0
	cmp r1, #0
	bne _08024400
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_08009EA4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_080040C4
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
	beq _08024400
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl sub_08003870
_08024400:
	add r0, r4, #0
	bl sub_0803CC20
	b _08024410
_08024408:
	.4byte gUnknown_03006A30
_0802440C:
	mov r0, #10
	strb r0, [r4, #20]
_08024410:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024370

	.byte 0x00
	.byte 0x00
