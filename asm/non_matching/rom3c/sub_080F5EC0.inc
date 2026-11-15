	THUMB_FUNC_START sub_080F5EC0
sub_080F5EC0: @ 0x080F5EC0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	ldr r5, _080F5F04  @ =gRam
	ldr r0, _080F5F08  @ =0x00000F92
	add r1, r5, r0
	add r1, r3, r1
	ldr r2, _080F5F0C  @ =gUnknown_081798B0
	ldr r4, _080F5F10  @ =0x00000FC2
	add r0, r5, r4
	add r4, r3, r0
	ldrb r0, [r4]
	lsr r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r4]
	cmp r0, #7
	bne _080F5EEE
	add r0, r3, #0
	bl sub_080F5B68
_080F5EEE:
	ldrb r1, [r4]
	cmp r1, #0
	bne _080F5EFC
	ldr r2, _080F5F14  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	strb r1, [r0]
_080F5EFC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F5F04:
	.4byte gRam
_080F5F08:
	.4byte 0x00000F92
_080F5F0C:
	.4byte gUnknown_081798B0
_080F5F10:
	.4byte 0x00000FC2
_080F5F14:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F5EC0

