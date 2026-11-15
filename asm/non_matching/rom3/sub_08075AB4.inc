	THUMB_FUNC_START sub_08075AB4
sub_08075AB4: @ 0x08075AB4
	push {lr}
	ldr r0, _08075AD8  @ =gRam
	ldr r1, _08075ADC  @ =0x00000AB2
	add r0, r0, r1
	ldrh r2, [r0]
	asr r0, r2, #1
	lsl r0, r0, #1
	ldr r1, _08075AE0  @ =gUnknown_020023CE
	add r0, r0, r1
	ldr r3, _08075AE4  @ =gUnknown_020023EA
	ldrh r1, [r3]
	strh r1, [r0]
	cmp r2, #8
	beq _08075AD4
	mov r0, #0
	strh r0, [r3]
_08075AD4:
	pop {r0}
	bx r0
_08075AD8:
	.4byte gRam
_08075ADC:
	.4byte 0x00000AB2
_08075AE0:
	.4byte gUnknown_020023CE
_08075AE4:
	.4byte gUnknown_020023EA
	THUMB_FUNC_END sub_08075AB4

