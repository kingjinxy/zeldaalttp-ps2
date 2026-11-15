	THUMB_FUNC_START sub_08108B84
sub_08108B84: @ 0x08108B84
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _08108BD4  @ =gRam
	ldr r3, _08108BD8  @ =0x00000FC2
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	mov r1, #26
	mov r12, r2
	ldr r7, _08108BDC  @ =gUnknown_020109B0
	mov r6, #64
	ldr r5, _08108BE0  @ =gUnknown_020109D0
	mov r3, #0
	ldr r2, _08108BE4  @ =gUnknown_020109F0
_08108BA2:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r1, r0, r7
	strb r6, [r1]
	add r1, r0, r5
	strb r3, [r1]
	add r1, r0, r2
	strb r3, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _08108BA2
	ldr r0, _08108BE8  @ =0x00001052
	add r0, r0, r12
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_08107520
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08108BD4:
	.4byte gRam
_08108BD8:
	.4byte 0x00000FC2
_08108BDC:
	.4byte gUnknown_020109B0
_08108BE0:
	.4byte gUnknown_020109D0
_08108BE4:
	.4byte gUnknown_020109F0
_08108BE8:
	.4byte 0x00001052
	THUMB_FUNC_END sub_08108B84

