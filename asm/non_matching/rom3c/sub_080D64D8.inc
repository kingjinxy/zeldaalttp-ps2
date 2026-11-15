	THUMB_FUNC_START sub_080D64D8
sub_080D64D8: @ 0x080D64D8
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080D6504  @ =gRam
	ldr r1, _080D6508  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D650C
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C631C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D6558
	b _080D6512
	.byte 0x00
	.byte 0x00
_080D6504:
	.4byte gRam
_080D6508:
	.4byte 0x00000F52
_080D650C:
	add r0, r4, #0
	bl sub_080D6754
_080D6512:
	ldr r5, _080D6560  @ =gRam
	ldr r2, _080D6564  @ =0x000010D2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D652A
	ldr r1, _080D6568  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
_080D652A:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D6558
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D6558
	ldr r1, _080D656C  @ =gUnknown_08175330
	ldr r2, _080D6570  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D6558:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080D6560:
	.4byte gRam
_080D6564:
	.4byte 0x000010D2
_080D6568:
	.4byte 0x00000FA2
_080D656C:
	.4byte gUnknown_08175330
_080D6570:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D64D8

