	THUMB_FUNC_START sub_080E4160
sub_080E4160: @ 0x080E4160
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E41A8
	ldr r2, _080E4198  @ =gRam
	ldr r1, _080E419C  @ =0x00001172
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080E41A0  @ =gUnknown_081772F0
	ldr r0, _080E41A4  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	mov r0, #0
	b _080E41AA
_080E4198:
	.4byte gRam
_080E419C:
	.4byte 0x00001172
_080E41A0:
	.4byte gUnknown_081772F0
_080E41A4:
	.4byte 0x00000F52
_080E41A8:
	mov r0, #1
_080E41AA:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080E4160

