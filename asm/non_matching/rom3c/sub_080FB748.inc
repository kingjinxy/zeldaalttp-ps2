	THUMB_FUNC_START sub_080FB748
sub_080FB748: @ 0x080FB748
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl sub_080C7A20
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FB7AE
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FB7AE
	ldr r6, _080FB7B8  @ =gRam
	ldr r1, _080FB7BC  @ =0x00000FE2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FB78C
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
_080FB78C:
	add r0, r5, #0
	bl sub_080FB5C4
	add r0, r5, #0
	bl sub_080C99DC
	ldr r1, _080FB7C0  @ =gUnknown_0817A6CC
	ldr r2, _080FB7C4  @ =0x00000F72
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080FB7AE:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB7B8:
	.4byte gRam
_080FB7BC:
	.4byte 0x00000FE2
_080FB7C0:
	.4byte gUnknown_0817A6CC
_080FB7C4:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080FB748

