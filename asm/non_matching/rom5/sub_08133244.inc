	THUMB_FUNC_START sub_08133244
sub_08133244: @ 0x08133244
	push {r4,lr}
	ldr r4, _0813328C  @ =gRam
	ldr r1, _08133290  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _081332A4
	ldr r1, _08133294  @ =gUnknown_0822BB64
	ldr r2, _08133298  @ =0x00000CA9
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r1, _0813329C  @ =gUnknown_02030210
	add r2, r0, r1
	mov r1, #202
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r4, _081332A0  @ =gUnknown_02000AD0
	add r1, r0, r4
_0813327A:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _0813327A
	b _081332A8
	.byte 0x00
	.byte 0x00
_0813328C:
	.4byte gRam
_08133290:
	.4byte 0x000009B2
_08133294:
	.4byte gUnknown_0822BB64
_08133298:
	.4byte 0x00000CA9
_0813329C:
	.4byte gUnknown_02030210
_081332A0:
	.4byte gUnknown_02000AD0
_081332A4:
	bl sub_081301B8
_081332A8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08133244

	.byte 0x00
	.byte 0x00
