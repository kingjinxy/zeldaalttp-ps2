	THUMB_FUNC_START sub_080E0438
sub_080E0438: @ 0x080E0438
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080E0458  @ =gRam
	ldr r3, _080E045C  @ =0x00001AE2
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E0464
	ldr r3, _080E0460  @ =0x00000F52
	add r0, r1, r3
	add r0, r2, r0
	mov r1, #12
	strb r1, [r0]
	b _080E0470
	.byte 0x00
	.byte 0x00
_080E0458:
	.4byte gRam
_080E045C:
	.4byte 0x00001AE2
_080E0460:
	.4byte 0x00000F52
_080E0464:
	ldr r0, _080E0474  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E0470:
	pop {r0}
	bx r0
_080E0474:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E0438

