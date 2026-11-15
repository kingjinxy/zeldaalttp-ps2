	THUMB_FUNC_START sub_080D1C58
sub_080D1C58: @ 0x080D1C58
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r6, _080D1CD4  @ =gRam
	ldr r2, _080D1CD8  @ =0x00000F92
	add r0, r6, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _080D1C74
	add r0, r1, #0
	bl sub_080D1E5C
_080D1C74:
	ldr r4, _080D1CDC  @ =0x00001122
	add r2, r6, r4
	add r2, r5, r2
	ldrb r0, [r2]
	mov r1, #191
	and r1, r1, r0
	ldr r3, _080D1CE0  @ =gUnknown_08174B68
	ldr r4, _080D1CE4  @ =0x00000FB2
	add r0, r6, r4
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080D1CE8  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080D1CEC  @ =0x00001012
	add r4, r6, r0
	add r4, r5, r4
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C6240
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C99DC
	ldr r1, _080D1CF0  @ =gUnknown_08174B6C
	ldr r2, _080D1CF4  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	pop {r4-r6}
	pop {r0}
	bx r0
_080D1CD4:
	.4byte gRam
_080D1CD8:
	.4byte 0x00000F92
_080D1CDC:
	.4byte 0x00001122
_080D1CE0:
	.4byte gUnknown_08174B68
_080D1CE4:
	.4byte 0x00000FB2
_080D1CE8:
	.4byte gUnknown_03003E74
_080D1CEC:
	.4byte 0x00001012
_080D1CF0:
	.4byte gUnknown_08174B6C
_080D1CF4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D1C58

