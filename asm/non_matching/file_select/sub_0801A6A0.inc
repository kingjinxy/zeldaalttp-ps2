	THUMB_FUNC_START sub_0801A6A0
sub_0801A6A0: @ 0x0801A6A0
	push {r4-r6,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r5, r4, #0
	add r5, r5, #41
	ldrb r1, [r5]
	add r6, r1, #0
	cmp r6, #1
	bne _0801A6F2
	add r0, r4, #0
	bl sub_080093A4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	beq _0801A6E8
	mov r0, #0
	strb r0, [r5]
	add r1, r4, #0
	add r1, r1, #92
	ldr r0, _0801A6E0  @ =0x00002055
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #63
	strb r6, [r0]
	ldr r0, _0801A6E4  @ =gUnknown_08139E58
	str r0, [r4, #72]
	add r0, r4, #0
	bl sub_0801A70C
	b _0801A706
_0801A6E0:
	.4byte 0x00002055
_0801A6E4:
	.4byte gUnknown_08139E58
_0801A6E8:
	add r1, r4, #0
	add r1, r1, #69
	mov r0, #0
	strb r0, [r1]
	b _0801A706
_0801A6F2:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801A706
	mov r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #4
	bl sub_08003870
_0801A706:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A6A0

