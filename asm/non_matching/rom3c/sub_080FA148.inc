	THUMB_FUNC_START sub_080FA148
sub_080FA148: @ 0x080FA148
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r7, _080FA1A0  @ =gRam
	ldr r1, _080FA1A4  @ =0x00000FC2
	add r0, r7, r1
	add r6, r5, r0
	ldrb r4, [r6]
	cmp r4, #0
	beq _080FA1B8
	cmp r4, #16
	bne _080FA17E
	add r0, r5, #0
	bl sub_080EC688
	add r1, r0, #0
	cmp r1, #0
	blt _080FA17E
	ldr r0, _080FA1A8  @ =gShield
	ldrb r0, [r0]
	cmp r0, #3
	beq _080FA17E
	ldr r2, _080FA1AC  @ =0x000011B2
	add r0, r7, r2
	add r0, r1, r0
	mov r1, #0
	strb r1, [r0]
_080FA17E:
	ldr r0, _080FA1A0  @ =gRam
	ldr r3, _080FA1B0  @ =0x00000F92
	add r1, r0, r3
	add r1, r5, r1
	ldr r2, _080FA1B4  @ =gUnknown_0817A3D0
	add r3, r3, #32
	add r0, r0, r3
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C7A48
	b _080FA1CC
	.byte 0x00
	.byte 0x00
_080FA1A0:
	.4byte gRam
_080FA1A4:
	.4byte 0x00000FC2
_080FA1A8:
	.4byte gShield
_080FA1AC:
	.4byte 0x000011B2
_080FA1B0:
	.4byte 0x00000F92
_080FA1B4:
	.4byte gUnknown_0817A3D0
_080FA1B8:
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #16
	strb r1, [r6]
	ldr r1, _080FA1D4  @ =0x00000F52
	add r0, r7, r1
	add r0, r5, r0
	strb r4, [r0]
_080FA1CC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FA1D4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FA148

