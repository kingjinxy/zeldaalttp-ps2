	THUMB_FUNC_START sub_080FDA84
sub_080FDA84: @ 0x080FDA84
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080FDAC8  @ =gRam
	ldr r0, _080FDACC  @ =0x00001062
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r4, _080FDAD0  @ =0x00001B10
	add r1, r3, r4
	ldrh r0, [r1]
	add r0, r0, #192
	strh r0, [r1]
	ldr r1, _080FDAD4  @ =0x000009AD
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FDAC2
	ldr r1, _080FDAD8  @ =gUnknown_0817A9C8
	ldr r4, _080FDADC  @ =0x00000F52
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r2, #0
	bl _call_via_r1
_080FDAC2:
	pop {r4}
	pop {r0}
	bx r0
_080FDAC8:
	.4byte gRam
_080FDACC:
	.4byte 0x00001062
_080FDAD0:
	.4byte 0x00001B10
_080FDAD4:
	.4byte 0x000009AD
_080FDAD8:
	.4byte gUnknown_0817A9C8
_080FDADC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDA84

