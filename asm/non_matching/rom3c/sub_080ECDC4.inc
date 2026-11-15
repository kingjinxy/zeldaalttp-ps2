	THUMB_FUNC_START sub_080ECDC4
sub_080ECDC4: @ 0x080ECDC4
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080ECE2C  @ =gRam
	ldr r1, _080ECE30  @ =gUnknown_02003040
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080ECE34  @ =0x00000968
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080ECE38  @ =gUnknown_02003050
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080ECE3C  @ =gUnknown_02003060
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080ECE40  @ =gUnknown_02003070
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #16
	bl sub_080C2DCC
	ldr r1, _080ECE44  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080ECE48  @ =0x00000F22
	add r0, r5, r1
	add r4, r4, r0
	add r2, r2, #1
	add r5, r5, r2
	ldrb r0, [r5]
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ECE2C:
	.4byte gRam
_080ECE30:
	.4byte gUnknown_02003040
_080ECE34:
	.4byte 0x00000968
_080ECE38:
	.4byte gUnknown_02003050
_080ECE3C:
	.4byte gUnknown_02003060
_080ECE40:
	.4byte gUnknown_02003070
_080ECE44:
	.4byte 0x00000F12
_080ECE48:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080ECDC4

