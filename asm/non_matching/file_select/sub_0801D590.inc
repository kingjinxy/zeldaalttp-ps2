	THUMB_FUNC_START sub_0801D590
sub_0801D590: @ 0x0801D590
	push {r4,lr}
	add r4, r0, #0
	ldr r2, _0801D5CC  @ =gUnknown_0813A8BC
	ldr r0, _0801D5D0  @ =gUnknown_03000E20
	ldrh r0, [r0]
	ldrb r1, [r4, #24]
	add r0, r0, r1
	mov r1, #48
	and r0, r0, r1
	asr r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	strh r0, [r4, #58]
	add r0, r4, #0
	bl 0x08003828
	ldr r1, _0801D5D4  @ =gUnknown_0813A898
	ldrb r0, [r4, #21]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801D5CC:
	.4byte gUnknown_0813A8BC
_0801D5D0:
	.4byte gUnknown_03000E20
_0801D5D4:
	.4byte gUnknown_0813A898
	THUMB_FUNC_END sub_0801D590

