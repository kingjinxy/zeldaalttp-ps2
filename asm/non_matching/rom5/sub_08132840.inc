	THUMB_FUNC_START sub_08132840
sub_08132840: @ 0x08132840
	push {r4,lr}
	ldr r2, _0813286C  @ =gRam
	ldr r0, _08132870  @ =0x0000099B
	add r1, r2, r0
	mov r3, #0
	mov r0, #1
	strb r0, [r1]
	ldr r4, _08132874  @ =0x00000B68
	add r1, r2, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bls _08132878
	sub r4, r4, #2
	add r0, r2, r4
	strb r3, [r0]
	strb r3, [r1]
	b _08132880
	.byte 0x00
	.byte 0x00
_0813286C:
	.4byte gRam
_08132870:
	.4byte 0x0000099B
_08132874:
	.4byte 0x00000B68
_08132878:
	ldr r0, _08132888  @ =0x00000B66
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
_08132880:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132888:
	.4byte 0x00000B66
	THUMB_FUNC_END sub_08132840

