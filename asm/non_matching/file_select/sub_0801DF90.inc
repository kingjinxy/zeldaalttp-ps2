	THUMB_FUNC_START sub_0801DF90
sub_0801DF90: @ 0x0801DF90
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	bne _0801DFFC
	ldr r2, [r4, #76]
	ldrb r1, [r2, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	ldr r1, _0801DFF8  @ =gUnknown_03006A30
	add r1, r0, r1
	add r0, r1, #0
	add r0, r0, #38
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801E03C
	ldrh r1, [r1, #54]
	mov r0, #200
	lsl r0, r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0801E03C
	str r2, [r4, #88]
	ldrb r0, [r2, #10]
	lsl r0, r0, #1
	add r0, r0, #1
	mov r1, #1
	lsl r1, r1, r0
	mov r2, #213
	lsl r2, r2, #1
	add r0, r2, #0
	eor r1, r1, r0
	add r0, r4, #0
	add r0, r0, #92
	strh r1, [r0]
	mov r0, #4
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #112
	mov r0, #30
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #120
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #6
	bl sub_08003870
	b _0801E03C
	.byte 0x00
	.byte 0x00
_0801DFF8:
	.4byte gUnknown_03006A30
_0801DFFC:
	ldrb r0, [r4, #20]
	cmp r0, #4
	bne _0801E024
	mov r0, #1
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #92
	ldr r0, _0801E04C  @ =0x000021FF
	strh r0, [r1]
	add r2, r4, #0
	add r2, r2, #80
	ldrh r1, [r2]
	mov r3, #192
	lsl r3, r3, #8
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl sub_08008DD8
_0801E024:
	add r1, r4, #0
	add r1, r1, #66
	mov r0, #24
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	lsr r1, r1, #4
	add r1, r1, #4
	add r0, r4, #0
	bl sub_08003870
_0801E03C:
	ldr r1, _0801E050  @ =gUnknown_0813AC78
	add r0, r4, #0
	bl sub_080098A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801E04C:
	.4byte 0x000021FF
_0801E050:
	.4byte gUnknown_0813AC78
	THUMB_FUNC_END sub_0801DF90

