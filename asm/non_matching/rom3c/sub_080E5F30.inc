	THUMB_FUNC_START sub_080E5F30
sub_080E5F30: @ 0x080E5F30
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E67E8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5FA8
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5FA8
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r5, _080E5FB0  @ =gRam
	ldr r1, _080E5FB4  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #3
	beq _080E5F90
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080E5FB8  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	sub r1, r1, #208
	add r0, r5, r1
	add r3, r4, r0
	ldrb r1, [r3]
	add r0, r2, #0
	eor r0, r0, r1
	cmp r0, #1
	bne _080E5F90
	strb r2, [r3]
_080E5F90:
	ldr r1, _080E5FBC  @ =gUnknown_08177660
	ldr r0, _080E5FB0  @ =gRam
	ldr r2, _080E5FB4  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080E5FA8:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080E5FB0:
	.4byte gRam
_080E5FB4:
	.4byte 0x00000F52
_080E5FB8:
	.4byte 0x00001082
_080E5FBC:
	.4byte gUnknown_08177660
	THUMB_FUNC_END sub_080E5F30

