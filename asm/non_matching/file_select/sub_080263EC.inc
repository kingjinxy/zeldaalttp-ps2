	THUMB_FUNC_START sub_080263EC
sub_080263EC: @ 0x080263EC
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08026450  @ =gUnknown_03005E10
	ldr r0, [r4, #88]
	ldrb r0, [r0, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08026406
	ldrb r0, [r4, #24]
	add r0, r0, #1
	strb r0, [r4, #24]
_08026406:
	ldrb r0, [r4, #24]
	cmp r0, #45
	bhi _08026418
	ldr r1, [r4, #88]
	add r0, r1, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	beq _080264AC
_08026418:
	ldr r0, [r4, #88]
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802646A
	bl 0x0800099C
	ldr r2, [r4, #88]
	add r2, r2, #62
	ldr r3, _08026454  @ =gUnknown_0813C694
	mov r1, #1
	and r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
	ldr r2, [r4, #88]
	add r1, r2, #0
	add r1, r1, #61
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _08026458
	ldrb r0, [r1]
	lsr r0, r0, #1
	add r1, r1, #5
	b _08026468
_08026450:
	.4byte gUnknown_03005E10
_08026454:
	.4byte gUnknown_0813C694
_08026458:
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	add r1, r2, #0
	add r1, r1, #66
_08026468:
	strb r0, [r1]
_0802646A:
	ldr r3, _080264A8  @ =gUnknown_03006A30
	ldr r0, [r4, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r3
	mov r1, #0
	strb r1, [r0, #10]
	ldr r0, [r4, #88]
	ldrb r0, [r0, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r3
	ldrh r2, [r1, #54]
	mov r0, #239
	and r0, r0, r2
	strh r0, [r1, #54]
	ldr r0, [r4, #88]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r3
	mov r1, #20
	strh r1, [r0, #8]
	add r0, r4, #0
	bl sub_080264E0
	b _080264D6
_080264A8:
	.4byte gUnknown_03006A30
_080264AC:
	add r0, r1, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r0, [r4, #52]
	add r0, r0, #1
	str r0, [r4, #52]
	ldr r0, [r4, #88]
	bl 0x080074C0
	ldr r2, _080264DC  @ =gUnknown_03006A30
	ldr r0, [r4, #88]
	ldrb r0, [r0, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	ldrb r2, [r1, #26]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1, #26]
_080264D6:
	pop {r4}
	pop {r0}
	bx r0
_080264DC:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080263EC

