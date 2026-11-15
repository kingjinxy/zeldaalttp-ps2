	THUMB_FUNC_START sub_080D8400
sub_080D8400: @ 0x080D8400
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080D8478  @ =gRam
	ldr r2, _080D847C  @ =0x00000EE2
	add r1, r4, r2
	add r1, r0, r1
	ldrb r1, [r1]
	mov r2, #16
	and r2, r2, r1
	lsl r2, r2, #24
	lsr r2, r2, #24
	neg r2, r2
	lsr r2, r2, #31
	ldr r1, _080D8480  @ =0x00001122
	add r3, r4, r1
	add r3, r0, r3
	ldr r1, _080D8484  @ =gUnknown_081757B8
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D8488  @ =0x00001022
	add r3, r4, r1
	add r3, r0, r3
	ldr r1, _080D848C  @ =gUnknown_081757BA
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D8490  @ =0x00000F62
	add r3, r4, r1
	add r3, r0, r3
	ldr r1, _080D8494  @ =gUnknown_081757BC
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D8498  @ =0x00000F52
	add r3, r4, r1
	add r3, r0, r3
	ldr r1, _080D849C  @ =gUnknown_081757BE
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D84A0  @ =0x000011B2
	add r3, r4, r1
	add r3, r0, r3
	ldr r1, _080D84A4  @ =gUnknown_081757C0
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D84A8  @ =0x00000EA5
	add r4, r4, r1
	add r0, r0, r4
	ldr r1, _080D84AC  @ =gUnknown_081757C2
	add r2, r2, r1
	ldrb r1, [r2]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D8478:
	.4byte gRam
_080D847C:
	.4byte 0x00000EE2
_080D8480:
	.4byte 0x00001122
_080D8484:
	.4byte gUnknown_081757B8
_080D8488:
	.4byte 0x00001022
_080D848C:
	.4byte gUnknown_081757BA
_080D8490:
	.4byte 0x00000F62
_080D8494:
	.4byte gUnknown_081757BC
_080D8498:
	.4byte 0x00000F52
_080D849C:
	.4byte gUnknown_081757BE
_080D84A0:
	.4byte 0x000011B2
_080D84A4:
	.4byte gUnknown_081757C0
_080D84A8:
	.4byte 0x00000EA5
_080D84AC:
	.4byte gUnknown_081757C2
	THUMB_FUNC_END sub_080D8400

