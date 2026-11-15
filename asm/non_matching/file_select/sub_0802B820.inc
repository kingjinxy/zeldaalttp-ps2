	THUMB_FUNC_START sub_0802B820
sub_0802B820: @ 0x0802B820
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0802B83C  @ =gUnknown_0202A770
	ldr r5, [r0, #16]
	add r0, r4, #0
	mov r1, #4
	bl sub_08012F84
	add r3, r0, #0
	cmp r3, #0
	bne _0802B858
	b _0802B8CA
	.byte 0x00
	.byte 0x00
_0802B83C:
	.4byte gUnknown_0202A770
_0802B840:
	ldr r0, _0802B850  @ =gUnknown_0202A770
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r2, _0802B854  @ =gUnknown_08429480
	add r1, r1, r2
	str r1, [r0, #20]
	mov r0, #1
	b _0802B8CC
_0802B850:
	.4byte gUnknown_0202A770
_0802B854:
	.4byte gUnknown_08429480
_0802B858:
	ldrb r0, [r3]
	cmp r0, #255
	beq _0802B8CA
	ldr r0, _0802B8AC  @ =gUnknown_0201EFF8
	lsl r1, r4, #2
	add r2, r1, r0
	ldrh r7, [r2]
	add r0, r0, #2
	add r1, r1, r0
	ldrh r6, [r1]
_0802B86C:
	ldrb r0, [r3]
	lsl r0, r0, #4
	add r0, r7, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrb r1, [r3, #1]
	lsl r1, r1, #4
	add r1, r6, r1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5, #50]
	sub r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrh r0, [r5, #54]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldrb r1, [r3, #2]
	lsl r1, r1, #4
	ldrb r0, [r3, #3]
	lsl r0, r0, #4
	cmp r2, r1
	bcs _0802B8C2
	cmp r4, r0
	bcs _0802B8C2
	ldr r1, _0802B8B0  @ =gUnknown_03006C80
	ldrb r0, [r1, #1]
	cmp r0, #2
	bne _0802B8B4
	ldrb r1, [r1, #3]
	b _0802B8B8
_0802B8AC:
	.4byte gUnknown_0201EFF8
_0802B8B0:
	.4byte gUnknown_03006C80
_0802B8B4:
	ldrb r0, [r1, #6]
	sub r1, r0, #1
_0802B8B8:
	add r0, r3, #4
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #0
	bne _0802B840
_0802B8C2:
	add r3, r3, #8
	ldrb r0, [r3]
	cmp r0, #255
	bne _0802B86C
_0802B8CA:
	mov r0, #0
_0802B8CC:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0802B820

	.byte 0x00
	.byte 0x00
