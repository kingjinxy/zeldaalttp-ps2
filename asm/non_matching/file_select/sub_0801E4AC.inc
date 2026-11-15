	THUMB_FUNC_START sub_0801E4AC
sub_0801E4AC: @ 0x0801E4AC
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	mov r1, #127
	and r1, r1, r0
	cmp r1, #26
	bhi _0801E57C
	lsl r0, r1, #2
	ldr r1, _0801E4C8  @ =0x0801E4CC
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0801E4C8:
	.4byte 0x0801E4CC
	.4byte _0801E538
	.4byte _0801E544
	.4byte _0801E544
	.4byte _0801E544
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E57C
	.4byte _0801E544
	.4byte _0801E57C
	.4byte _0801E544
	.4byte _0801E544
	.4byte _0801E544
_0801E538:
	ldrb r0, [r4, #20]
	cmp r0, #3
	bne _0801E57C
	mov r0, #1
	strb r0, [r4, #23]
	b _0801E57C
_0801E544:
	ldrb r0, [r4, #20]
	cmp r0, #5
	bhi _0801E57C
	mov r1, #0
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r4, #16]
	mov r0, #192
	str r0, [r4, #12]
	add r0, r4, #0
	add r0, r0, #62
	ldrb r0, [r0]
	add r2, r4, #0
	add r2, r2, #43
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #66
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #47
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #9
	bl 0x08003870
_0801E57C:
	ldr r1, _0801E58C  @ =gUnknown_0813AD7C
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801E58C:
	.4byte gUnknown_0813AD7C
	THUMB_FUNC_END sub_0801E4AC

