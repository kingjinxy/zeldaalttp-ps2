	THUMB_FUNC_START sub_08102A78
sub_08102A78: @ 0x08102A78
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _08102AA8  @ =gRam
	ldr r1, _08102AAC  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _08102AB4
	sub r1, r1, #48
	add r2, r2, r1
	add r2, r4, r2
	ldr r3, _08102AB0  @ =gUnknown_0817B7EA
	lsr r0, r0, #26
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _08102ADA
	.byte 0x00
	.byte 0x00
_08102AA8:
	.4byte gRam
_08102AAC:
	.4byte 0x00000FC2
_08102AB0:
	.4byte gUnknown_0817B7EA
_08102AB4:
	ldr r1, _08102AE0  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _08102AE4  @ =0x00001172
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r1, r1, #48
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	add r1, r1, #16
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	mov r0, #63
	strb r0, [r5]
_08102ADA:
	pop {r4,r5}
	pop {r0}
	bx r0
_08102AE0:
	.4byte 0x00000F52
_08102AE4:
	.4byte 0x00001172
	THUMB_FUNC_END sub_08102A78

