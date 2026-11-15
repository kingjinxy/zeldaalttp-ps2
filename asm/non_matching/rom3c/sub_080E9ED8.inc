	THUMB_FUNC_START sub_080E9ED8
sub_080E9ED8: @ 0x080E9ED8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r1, _080E9F24  @ =gRam
	ldr r2, _080E9F28  @ =0x00000F52
	add r0, r1, r2
	add r4, r3, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080E9F02
	ldr r2, _080E9F2C  @ =0x00000D94
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
	add r0, r3, #0
	bl sub_080E9D90
_080E9F02:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E9F1E
	ldr r0, _080E9F30  @ =gUnknown_08177C1C
	ldrb r1, [r4]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r5, #0
	bl _call_via_r1
_080E9F1E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080E9F24:
	.4byte gRam
_080E9F28:
	.4byte 0x00000F52
_080E9F2C:
	.4byte 0x00000D94
_080E9F30:
	.4byte gUnknown_08177C1C
	THUMB_FUNC_END sub_080E9ED8

