	THUMB_FUNC_START sub_081327E0
sub_081327E0: @ 0x081327E0
	push {r4-r7,lr}
	ldr r0, _081327F4  @ =gRam
	ldr r2, _081327F8  @ =0x00000B66
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _081327FC
	sub r0, r0, #1
	strb r0, [r1]
	b _08132830
_081327F4:
	.4byte gRam
_081327F8:
	.4byte 0x00000B66
_081327FC:
	mov r4, #0
	ldr r6, _08132838  @ =gUnknown_02000C00
	ldr r7, _0813283C  @ =0x0000FFE0
	mov r5, #31
_08132804:
	add r0, r4, #0
	add r0, r0, #130
	asr r0, r0, #1
	lsl r0, r0, #1
	add r3, r0, r6
	ldrh r2, [r3]
	add r1, r5, #0
	and r1, r1, r2
	cmp r1, #31
	beq _0813281A
	add r1, r1, #1
_0813281A:
	add r0, r7, #0
	and r0, r0, r2
	orr r1, r1, r0
	strh r1, [r3]
	add r0, r4, #2
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #14
	bne _08132804
	bl sub_08132840
_08132830:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132838:
	.4byte gUnknown_02000C00
_0813283C:
	.4byte 0x0000FFE0
	THUMB_FUNC_END sub_081327E0

