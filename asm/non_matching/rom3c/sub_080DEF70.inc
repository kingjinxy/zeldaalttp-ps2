	THUMB_FUNC_START sub_080DEF70
sub_080DEF70: @ 0x080DEF70
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DF398
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DEFE4
	add r0, r4, #0
	bl sub_080DF268
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080DEFCC
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080DEFBC
	ldr r1, _080DEFB4  @ =gRam
	ldr r0, _080DEFB8  @ =0x00000F22
	add r1, r1, r0
	b _080DEFC2
	.byte 0x00
	.byte 0x00
_080DEFB4:
	.4byte gRam
_080DEFB8:
	.4byte 0x00000F22
_080DEFBC:
	ldr r1, _080DEFEC  @ =gRam
	ldr r2, _080DEFF0  @ =0x00000F12
	add r1, r1, r2
_080DEFC2:
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
_080DEFCC:
	ldr r1, _080DEFF4  @ =gUnknown_081764B4
	ldr r0, _080DEFEC  @ =gRam
	ldr r2, _080DEFF8  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080DEFE4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DEFEC:
	.4byte gRam
_080DEFF0:
	.4byte 0x00000F12
_080DEFF4:
	.4byte gUnknown_081764B4
_080DEFF8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DEF70

