	THUMB_FUNC_START sub_08018378
sub_08018378: @ 0x08018378
	push {r4,lr}
	add r4, r0, #0
	bl sub_08018514
	add r0, r4, #0
	bl sub_08018514
	ldr r1, _080183C8  @ =gUnknown_03005E10
	ldr r0, [r4, #88]
	ldrb r0, [r0, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0801839C
	ldrb r0, [r4, #24]
	add r0, r0, #1
	strb r0, [r4, #24]
_0801839C:
	ldrb r0, [r4, #24]
	cmp r0, #55
	bhi _080183BE
	ldr r0, _080183CC  @ =gUnknown_03006C80
	ldr r2, [r4, #88]
	ldrb r1, [r2, #10]
	lsl r1, r1, #2
	add r0, r0, #12
	add r1, r1, r0
	ldr r0, [r1]
	cmp r0, #0
	beq _080183BE
	add r0, r2, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _080183D0
_080183BE:
	add r0, r4, #0
	bl sub_08018528
	b _0801843E
	.byte 0x00
	.byte 0x00
_080183C8:
	.4byte gUnknown_03005E10
_080183CC:
	.4byte gUnknown_03006C80
_080183D0:
	add r0, r2, #0
	bl 0x080074C0
	ldr r2, _08018444  @ =gUnknown_03006A30
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
	ldr r1, [r4, #88]
	add r0, r4, #0
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	ldr r3, [r4, #88]
	ldr r2, _08018448  @ =gUnknown_0813979B
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r1, #0
	strh r0, [r3, #58]
	ldr r0, [r4, #88]
	add r0, r0, #46
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #124
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801843E
	mov r0, #45
	strb r0, [r1]
	ldr r0, [r4, #88]
	ldr r2, _0801844C  @ =gUnknown_08139798
	ldrb r1, [r4, #10]
	add r1, r1, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	bl sub_0802C53C
_0801843E:
	pop {r4}
	pop {r0}
	bx r0
_08018444:
	.4byte gUnknown_03006A30
_08018448:
	.4byte gUnknown_0813979B
_0801844C:
	.4byte gUnknown_08139798
	THUMB_FUNC_END sub_08018378

