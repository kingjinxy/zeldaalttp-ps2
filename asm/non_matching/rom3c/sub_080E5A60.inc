	THUMB_FUNC_START sub_080E5A60
sub_080E5A60: @ 0x080E5A60
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #27
	bl sub_080CF0AC
	mov r0, #12
	add r1, r4, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080E5AFC
	ldr r3, _080E5B04  @ =gRam
	ldr r0, _080E5B08  @ =0x00000FB2
	add r5, r3, r0
	add r0, r4, r5
	ldrb r4, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	ldr r0, _080E5B0C  @ =gUnknown_08177550
	add r0, r4, r0
	ldrb r0, [r0]
	ldrh r2, [r1]
	add r2, r2, r0
	ldr r0, _080E5B10  @ =gUnknown_08177554
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080E5B14  @ =0x00000964
	add r1, r3, r0
	ldr r0, _080E5B18  @ =gUnknown_08177558
	add r0, r4, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080E5B1C  @ =gUnknown_0817755C
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _080E5B20  @ =0x00000EE2
	add r0, r3, r4
	add r0, r6, r0
	strb r2, [r0]
	add r4, r4, #32
	add r0, r3, r4
	add r0, r6, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080E5B24  @ =0x00000ED2
	add r0, r3, r2
	add r0, r6, r0
	strb r1, [r0]
	sub r4, r4, #16
	add r0, r3, r4
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	add r5, r6, r5
	ldrb r2, [r5]
	ldr r0, _080E5B28  @ =0x00000F22
	add r1, r3, r0
	add r1, r6, r1
	ldr r0, _080E5B2C  @ =gUnknown_08177560
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r4, r4, #32
	add r3, r3, r4
	add r3, r6, r3
	ldr r0, _080E5B30  @ =gUnknown_08177564
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r3]
_080E5AFC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E5B04:
	.4byte gRam
_080E5B08:
	.4byte 0x00000FB2
_080E5B0C:
	.4byte gUnknown_08177550
_080E5B10:
	.4byte gUnknown_08177554
_080E5B14:
	.4byte 0x00000964
_080E5B18:
	.4byte gUnknown_08177558
_080E5B1C:
	.4byte gUnknown_0817755C
_080E5B20:
	.4byte 0x00000EE2
_080E5B24:
	.4byte 0x00000ED2
_080E5B28:
	.4byte 0x00000F22
_080E5B2C:
	.4byte gUnknown_08177560
_080E5B30:
	.4byte gUnknown_08177564
	THUMB_FUNC_END sub_080E5A60

