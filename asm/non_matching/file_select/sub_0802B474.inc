	THUMB_FUNC_START sub_0802B474
sub_0802B474: @ 0x0802B474
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _0802B534
	ldr r0, _0802B4A4  @ =gUnknown_0200002C
	ldr r1, [r0]
	cmp r1, #0
	beq _0802B4AC
	ldr r0, [r4, #88]
	cmp r0, r1
	bne _0802B4AC
	ldr r0, _0802B4A8  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	ldr r2, [r4, #124]
	orr r0, r0, r2
	str r0, [r1]
	b _0802B572
	.byte 0x00
	.byte 0x00
_0802B4A4:
	.4byte gUnknown_0200002C
_0802B4A8:
	.4byte gUnknown_0201F000
_0802B4AC:
	ldr r0, _0802B528  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r2, [r4, #124]
	ldr r0, [r1]
	bic r0, r0, r2
	str r0, [r1]
	add r0, r4, #0
	add r0, r0, #71
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r1, #0
	beq _0802B572
	ldr r2, _0802B52C  @ =gUnknown_03006A30
	ldrb r1, [r6]
	sub r1, r1, #1
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r5, [r0]
	ldr r0, [r5, #108]
	bl sub_0800C004
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802B50C
	ldr r0, [r5, #108]
	ldr r2, _0802B530  @ =gUnknown_0200002C
	ldr r1, [r0, #88]
	ldr r0, [r2]
	cmp r1, r0
	bne _0802B50C
	mov r0, #3
	strb r0, [r1, #20]
	ldr r1, [r2]
	mov r0, #2
	strb r0, [r1, #23]
	ldr r0, [r2]
	str r0, [r4, #88]
	str r4, [r0, #84]
	add r0, r4, #0
	bl sub_08003E44
_0802B50C:
	ldr r2, _0802B52C  @ =gUnknown_03006A30
	ldrb r1, [r6]
	sub r1, r1, #1
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrb r2, [r0, #11]
	mov r1, #127
	and r1, r1, r2
	mov r2, #0
	strb r1, [r0, #11]
	strb r2, [r6]
	b _0802B572
_0802B528:
	.4byte gUnknown_0201F000
_0802B52C:
	.4byte gUnknown_03006A30
_0802B530:
	.4byte gUnknown_0200002C
_0802B534:
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _0802B540
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _0802B546
_0802B540:
	add r0, r4, #0
	bl sub_080077D0
_0802B546:
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802B572
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
	bl sub_0800099C
	mov r1, #240
	and r0, r0, r1
	add r0, r0, #1
	add r1, r4, #0
	add r1, r1, #40
	strb r0, [r1]
_0802B572:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B474

