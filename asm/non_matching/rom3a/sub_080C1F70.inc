	THUMB_FUNC_START sub_080C1F70
sub_080C1F70: @ 0x080C1F70
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080C1FB8  @ =gRam
	ldr r3, _080C1FBC  @ =0x00000EE2
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	ldr r4, _080C1FC0  @ =0x00001622
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080C1FC4  @ =0x00000F02
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080C1FC8  @ =0x00000ED2
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080C1FCC  @ =0x00000EF2
	add r1, r2, r3
	add r0, r0, r1
	ldrb r0, [r0]
	add r4, r4, #1
	add r2, r2, r4
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C1FB8:
	.4byte gRam
_080C1FBC:
	.4byte 0x00000EE2
_080C1FC0:
	.4byte 0x00001622
_080C1FC4:
	.4byte 0x00000F02
_080C1FC8:
	.4byte 0x00000ED2
_080C1FCC:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_080C1F70

