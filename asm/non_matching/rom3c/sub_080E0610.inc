	THUMB_FUNC_START sub_080E0610
sub_080E0610: @ 0x080E0610
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _080E0658  @ =gRam
	ldr r1, _080E065C  @ =0x00001082
	add r0, r4, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080E063C
	ldr r0, _080E0660  @ =gUnknown_0817669C
	ldrb r1, [r1]
	sub r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r2, #0
	mov r2, sp
	bl sub_080C9564
_080E063C:
	ldr r1, _080E0664  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080E0668  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080E0658:
	.4byte gRam
_080E065C:
	.4byte 0x00001082
_080E0660:
	.4byte gUnknown_0817669C
_080E0664:
	.4byte 0x00000F52
_080E0668:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E0610

