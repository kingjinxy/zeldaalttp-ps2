	THUMB_FUNC_START sub_080E4C8C
sub_080E4C8C: @ 0x080E4C8C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080E4D08  @ =gRam
	ldr r0, _080E4D0C  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r3, _080E4D10  @ =gUnknown_081773EC
	ldr r1, _080E4D14  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #25
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r5, _080E4D18  @ =0x00000FB2
	add r1, r6, r5
	add r1, r4, r1
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080E4EA8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E4D44
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E4D44
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C79F8
	ldr r1, _080E4D1C  @ =0x00000F52
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E4D20
	add r0, r4, #0
	bl sub_080E4DF0
	b _080E4D44
	.byte 0x00
	.byte 0x00
_080E4D08:
	.4byte gRam
_080E4D0C:
	.4byte 0x00000F92
_080E4D10:
	.4byte gUnknown_081773EC
_080E4D14:
	.4byte 0x00001052
_080E4D18:
	.4byte 0x00000FB2
_080E4D1C:
	.4byte 0x00000F52
_080E4D20:
	ldr r1, _080E4D4C  @ =0x00000FC2
	add r0, r6, r1
	add r4, r7, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080E4D44
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #48
	strb r1, [r4]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	add r0, r7, #0
	bl sub_080E4D50
_080E4D44:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E4D4C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E4C8C

