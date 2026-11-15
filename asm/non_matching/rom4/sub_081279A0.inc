	THUMB_FUNC_START sub_081279A0
sub_081279A0: @ 0x081279A0
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r4, _081279D4  @ =gRam
	ldr r1, _081279D8  @ =0x0000098E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _081279E8
	ldr r2, _081279DC  @ =0x00001AF8
	add r0, r4, r2
	ldr r0, [r0]
	sub r2, r2, #34
	add r1, r4, r2
	ldrh r1, [r1]
	add r1, r5, r1
	add r1, r1, #4
	bl sub_08129E0C
	ldr r2, _081279E0  @ =0x00001AD2
	add r1, r4, r2
	ldrh r1, [r1]
	ldr r2, _081279E4  @ =gTextPointer
	add r1, r1, r2
	b _08127A08
_081279D4:
	.4byte gRam
_081279D8:
	.4byte 0x0000098E
_081279DC:
	.4byte 0x00001AF8
_081279E0:
	.4byte 0x00001AD2
_081279E4:
	.4byte gTextPointer
_081279E8:
	ldr r1, _08127A38  @ =0x00001AF8
	add r0, r4, r1
	ldr r0, [r0]
	ldr r2, _08127A3C  @ =0x00001AD6
	add r1, r4, r2
	ldrh r1, [r1]
	add r1, r5, r1
	add r1, r1, #4
	bl sub_08129E0C
	ldr r2, _08127A40  @ =0x00001AD2
	add r1, r4, r2
	ldrh r1, [r1]
	ldr r2, _08127A44  @ =gTextPointer
	add r1, r1, r2
	sub r0, r0, #103
_08127A08:
	strb r0, [r1]
	ldr r4, _08127A48  @ =gRam
	ldr r1, _08127A38  @ =0x00001AF8
	add r0, r4, r1
	ldr r0, [r0]
	ldr r2, _08127A3C  @ =0x00001AD6
	add r1, r4, r2
	ldrh r1, [r1]
	add r1, r5, r1
	add r1, r1, #5
	bl sub_08129E0C
	ldr r1, _08127A40  @ =0x00001AD2
	add r4, r4, r1
	ldrh r1, [r4]
	ldr r2, _08127A4C  @ =gUnknown_02005481
	add r1, r1, r2
	strb r0, [r1]
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08127A38:
	.4byte 0x00001AF8
_08127A3C:
	.4byte 0x00001AD6
_08127A40:
	.4byte 0x00001AD2
_08127A44:
	.4byte gTextPointer
_08127A48:
	.4byte gRam
_08127A4C:
	.4byte gUnknown_02005481
	THUMB_FUNC_END sub_081279A0

