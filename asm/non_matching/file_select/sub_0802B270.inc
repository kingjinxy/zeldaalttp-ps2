	THUMB_FUNC_START sub_0802B270
sub_0802B270: @ 0x0802B270
	push {r4-r6,lr}
	add r6, r0, #0
	ldr r0, _0802B318  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0802B29C
	ldr r2, _0802B31C  @ =gUnknown_08427718
	ldrb r0, [r6, #23]
	add r0, r0, #1
	strb r0, [r6, #23]
	mov r1, #255
	and r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r0, r0, #8
	strh r0, [r6, #58]
_0802B29C:
	add r0, r6, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802B310
	ldr r2, _0802B320  @ =gUnknown_03006A30
	ldr r0, [r6, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r5, #0
	mov r1, #8
	strb r1, [r0, #12]
	ldr r0, [r6, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	mov r1, #1
	strb r1, [r0]
	ldr r0, [r6, #76]
	ldrb r0, [r0, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	ldrb r2, [r1, #11]
	mov r4, #127
	add r0, r4, #0
	and r0, r0, r2
	strb r0, [r1, #11]
	mov r0, #60
	strb r0, [r6, #23]
	ldrb r0, [r6, #20]
	add r0, r0, #1
	strb r0, [r6, #20]
	add r0, r6, #0
	bl sub_0802B34C
	add r0, r6, #0
	add r0, r0, #46
	strb r5, [r0]
	add r1, r6, #0
	add r1, r1, #60
	ldrb r0, [r1]
	and r4, r4, r0
	strb r4, [r1]
	ldr r0, [r6, #76]
	ldrb r0, [r0, #10]
	mov r1, #1
	bl sub_0802C4F8
_0802B310:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802B318:
	.4byte gUnknown_03000E20
_0802B31C:
	.4byte gUnknown_08427718
_0802B320:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0802B270

