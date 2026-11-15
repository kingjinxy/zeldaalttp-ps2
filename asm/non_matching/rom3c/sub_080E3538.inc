	THUMB_FUNC_START sub_080E3538
sub_080E3538: @ 0x080E3538
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r6, #1
	ldr r5, _080E35DC  @ =gRam
	ldr r3, _080E35E0  @ =0x00000FB2
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080E35E4  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E35D6
	add r0, r4, #0
	bl sub_080C5044
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E3576
	ldr r3, _080E35E8  @ =0x00001626
	add r0, r5, r3
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r6, r0, #31
_080E3576:
	cmp r6, #0
	beq _080E3594
	ldr r1, _080E35EC  @ =0x00000F52
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #2
	bhi _080E3594
	mov r0, #3
	strb r0, [r1]
	ldr r2, _080E35F0  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_080E3594:
	ldr r5, _080E35DC  @ =gRam
	ldr r3, _080E35F4  @ =0x00001072
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	bls _080E35A8
	add r0, r4, #0
	bl sub_080E3E3C
_080E35A8:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E35D6
	add r0, r4, #0
	bl sub_080E3D00
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080E35F8  @ =gUnknown_0817714C
	ldr r2, _080E35EC  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080E35D6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E35DC:
	.4byte gRam
_080E35E0:
	.4byte 0x00000FB2
_080E35E4:
	.4byte 0x00000F92
_080E35E8:
	.4byte 0x00001626
_080E35EC:
	.4byte 0x00000F52
_080E35F0:
	.4byte 0x00000FC2
_080E35F4:
	.4byte 0x00001072
_080E35F8:
	.4byte gUnknown_0817714C
	THUMB_FUNC_END sub_080E3538

