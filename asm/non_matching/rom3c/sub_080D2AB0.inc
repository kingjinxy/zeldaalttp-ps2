	THUMB_FUNC_START sub_080D2AB0
sub_080D2AB0: @ 0x080D2AB0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D2B4A
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D2B4A
	bl sub_0809E3CC
	cmp r0, #0
	bne _080D2B4A
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080D2B38
	ldr r3, _080D2B28  @ =gRam
	ldr r1, _080D2B2C  @ =0x00000F62
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D2B4A
	ldr r1, _080D2B30  @ =0x0000188F
	add r0, r3, r1
	strb r2, [r0]
	sub r1, r1, #254
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080D2B4A
	ldr r1, _080D2B34  @ =0x00000FA2
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	add r0, r4, #0
	bl sub_080D2B60
	add r0, r4, #0
	bl sub_080CF6C0
	b _080D2B4A
	.byte 0x00
	.byte 0x00
_080D2B28:
	.4byte gRam
_080D2B2C:
	.4byte 0x00000F62
_080D2B30:
	.4byte 0x0000188F
_080D2B34:
	.4byte 0x00000FA2
_080D2B38:
	ldr r0, _080D2B54  @ =gRam
	ldr r2, _080D2B58  @ =0x0000188F
	add r1, r0, r2
	mov r2, #1
	strb r2, [r1]
	ldr r1, _080D2B5C  @ =0x00000F62
	add r0, r0, r1
	add r0, r5, r0
	strb r2, [r0]
_080D2B4A:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2B54:
	.4byte gRam
_080D2B58:
	.4byte 0x0000188F
_080D2B5C:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D2AB0

