	THUMB_FUNC_START sub_080EA064
sub_080EA064: @ 0x080EA064
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080EA100  @ =gRam
	ldr r1, _080EA104  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080EA0FA
	ldr r2, _080EA108  @ =0x000016C4
	add r0, r4, r2
	ldrb r1, [r0]
	ldr r6, _080EA10C  @ =0x000016C5
	add r0, r4, r6
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r3, r3, #8
	sub r2, r2, #162
	add r0, r4, r2
	ldrb r2, [r0]
	sub r6, r6, #162
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	orr r1, r1, r3
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #192
	lsl r0, r0, #14
	add r1, r1, r0
	asr r1, r1, #16
	cmp r1, #95
	bgt _080EA0FA
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080EA110  @ =0x000016C1
	add r0, r4, r2
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r3, r3, #8
	add r6, r6, #1
	add r0, r4, r6
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	orr r1, r1, r3
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r0, #192
	lsl r0, r0, #14
	add r1, r1, r0
	asr r1, r1, #16
	cmp r1, #95
	bgt _080EA0FA
	ldr r2, _080EA114  @ =0x00000F52
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r6, _080EA118  @ =0x00000FC2
	add r0, r4, r6
	add r0, r5, r0
	mov r1, #31
	strb r1, [r0]
_080EA0FA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EA100:
	.4byte gRam
_080EA104:
	.4byte 0x00000996
_080EA108:
	.4byte 0x000016C4
_080EA10C:
	.4byte 0x000016C5
_080EA110:
	.4byte 0x000016C1
_080EA114:
	.4byte 0x00000F52
_080EA118:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080EA064

