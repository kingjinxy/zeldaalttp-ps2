	THUMB_FUNC_START sub_080E3E78
sub_080E3E78: @ 0x080E3E78
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	ldr r6, _080E3EB4  @ =gRam
	ldr r1, _080E3EB8  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E3EC4
	cmp r0, #32
	bne _080E3EA0
	add r0, r4, #0
	bl sub_080E3EFC
_080E3EA0:
	ldr r2, _080E3EBC  @ =0x00000F92
	add r1, r6, r2
	add r1, r4, r1
	ldr r2, _080E3EC0  @ =gUnknown_08177300
	ldrb r0, [r5]
	lsr r0, r0, #2
	add r0, r0, r2
	ldrb r0, [r0]
	b _080E3EE8
	.byte 0x00
	.byte 0x00
_080E3EB4:
	.4byte gRam
_080E3EB8:
	.4byte 0x00000FC2
_080E3EBC:
	.4byte 0x00000F92
_080E3EC0:
	.4byte gUnknown_08177300
_080E3EC4:
	ldr r0, _080E3EF4  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #48
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080E3EF8  @ =0x00000FB2
	add r1, r6, r2
	add r1, r4, r1
	strb r0, [r1]
	add r2, r2, #208
	add r1, r6, r2
	add r1, r4, r1
_080E3EE8:
	strb r0, [r1]
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3EF4:
	.4byte 0x00000F52
_080E3EF8:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E3E78

