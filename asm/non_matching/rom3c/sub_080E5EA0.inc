	THUMB_FUNC_START sub_080E5EA0
sub_080E5EA0: @ 0x080E5EA0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	mov r2, #7
	and r2, r2, r0
	ldr r3, _080E5EE4  @ =gRam
	ldr r0, _080E5EE8  @ =0x00000F22
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080E5EEC  @ =gUnknown_08177570
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E5EF0  @ =0x00000F12
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080E5EF4  @ =gUnknown_08177578
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E5EF8  @ =0x00000FC2
	add r3, r3, r0
	add r4, r4, r3
	ldr r0, _080E5EFC  @ =gUnknown_08177580
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E5EE4:
	.4byte gRam
_080E5EE8:
	.4byte 0x00000F22
_080E5EEC:
	.4byte gUnknown_08177570
_080E5EF0:
	.4byte 0x00000F12
_080E5EF4:
	.4byte gUnknown_08177578
_080E5EF8:
	.4byte 0x00000FC2
_080E5EFC:
	.4byte gUnknown_08177580
	THUMB_FUNC_END sub_080E5EA0

