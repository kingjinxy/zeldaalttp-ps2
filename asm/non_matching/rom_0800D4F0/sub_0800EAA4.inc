	THUMB_FUNC_START sub_0800EAA4
sub_0800EAA4: @ 0x0800EAA4
	ldr r2, _0800EAF4  @ =gTextbox
	mov r1, #134
	lsl r1, r1, #1
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _0800EAF0
	ldr r1, _0800EAF8  @ =0x0000010B
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _0800EAF0
	ldr r0, _0800EAFC  @ =gUnknown_03000420
	ldrb r2, [r0, #3]
	lsl r3, r2, #11
	ldr r0, _0800EB00  @ =gUnknown_020309C0
	lsl r2, r2, #3
	add r2, r2, r0
	ldrb r0, [r2, #5]
	lsl r0, r0, #5
	ldrb r1, [r2, #4]
	add r0, r0, r1
	lsl r0, r0, #1
	ldr r1, _0800EB04  @ =gBG0Buffer
	add r0, r0, r1
	add r3, r3, r0
	ldrb r0, [r2, #7]
	add r0, r0, #1
	lsl r0, r0, #5
	sub r0, r0, #2
	ldrb r2, [r2, #6]
	add r0, r0, r2
	lsl r0, r0, #1
	add r3, r3, r0
	mov r0, #151
	strh r0, [r3]
_0800EAF0:
	bx lr
	.byte 0x00
	.byte 0x00
_0800EAF4:
	.4byte gTextbox
_0800EAF8:
	.4byte 0x0000010B
_0800EAFC:
	.4byte gUnknown_03000420
_0800EB00:
	.4byte gUnknown_020309C0
_0800EB04:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_0800EAA4

