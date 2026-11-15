	THUMB_FUNC_START sub_080E1264
sub_080E1264: @ 0x080E1264
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080E12BC  @ =gRam
	ldr r0, _080E12C0  @ =0x00001172
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E12C4  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E12C8  @ =0x00000F22
	add r2, r6, r0
	add r2, r4, r2
	ldr r3, _080E12CC  @ =gUnknown_081768D6
	ldr r1, _080E12D0  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl Sprite3_MoveHoriz
	ldr r2, _080E12D4  @ =0x00000FC2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _080E12B6
	add r0, r4, #0
	bl sub_080E13B0
	ldr r1, _080E12D8  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
_080E12B6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E12BC:
	.4byte gRam
_080E12C0:
	.4byte 0x00001172
_080E12C4:
	.4byte 0x00000F52
_080E12C8:
	.4byte 0x00000F22
_080E12CC:
	.4byte gUnknown_081768D6
_080E12D0:
	.4byte 0x00000996
_080E12D4:
	.4byte 0x00000FC2
_080E12D8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080E1264

