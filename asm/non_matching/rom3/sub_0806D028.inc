	THUMB_FUNC_START sub_0806D028
sub_0806D028: @ 0x0806D028
	push {r4,lr}
	ldr r3, _0806D0B8  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r1, [r0]
	add r1, r1, #12
	mov r2, #252
	lsl r2, r2, #1
	add r0, r2, #0
	and r1, r1, r0
	lsl r1, r1, #3
	mov r0, #150
	lsl r0, r0, #4
	add r4, r3, r0
	ldr r2, _0806D0BC  @ =0x000016C4
	add r0, r3, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r0, r0, #8
	mov r2, #252
	lsl r2, r2, #1
	and r0, r0, r2
	asr r0, r0, #3
	orr r1, r1, r0
	strh r1, [r4]
	mov r0, #0
	ldrsh r1, [r4, r0]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806D072
	mov r0, #128
	lsl r0, r0, #5
	orr r1, r1, r0
_0806D072:
	ldr r2, _0806D0C0  @ =gUnknown_0200CBA0
	add r0, r1, r2
	ldrb r1, [r0]
	mov r2, #0
	cmp r1, #0
	beq _0806D0A8
	cmp r1, #9
	beq _0806D0A8
	mov r2, #1
	mov r0, #142
	and r1, r1, r0
	cmp r1, #128
	beq _0806D0A8
	cmp r1, #138
	beq _0806D0A8
	mov r2, #2
	cmp r1, #130
	beq _0806D0A8
	mov r2, #3
	cmp r1, #132
	beq _0806D0A8
	cmp r1, #136
	beq _0806D0A8
	mov r2, #4
	cmp r1, #134
	beq _0806D0A8
	mov r2, #2
_0806D0A8:
	ldr r1, _0806D0C4  @ =0x00001703
	add r0, r3, r1
	strb r2, [r0]
	add r0, r2, #0
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0806D0B8:
	.4byte gRam
_0806D0BC:
	.4byte 0x000016C4
_0806D0C0:
	.4byte gUnknown_0200CBA0
_0806D0C4:
	.4byte 0x00001703
	THUMB_FUNC_END sub_0806D028

