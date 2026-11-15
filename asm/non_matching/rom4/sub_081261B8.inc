	THUMB_FUNC_START sub_081261B8
sub_081261B8: @ 0x081261B8
	push {lr}
	ldr r1, _081261EC  @ =gUnknown_03000050
	ldrb r0, [r1, #1]
	sub r0, r0, #1
	strb r0, [r1, #1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08126200
	ldr r1, _081261F0  @ =gRam
	ldr r0, _081261F4  @ =0x00001B10
	add r2, r1, r0
	ldr r3, _081261F8  @ =0x000002DB
	add r0, r3, #0
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _081261FC  @ =0x00001B0E
	add r1, r1, r0
	mov r2, #219
	lsl r2, r2, #1
	add r0, r2, #0
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	b _08126206
	.byte 0x00
	.byte 0x00
_081261EC:
	.4byte gUnknown_03000050
_081261F0:
	.4byte gRam
_081261F4:
	.4byte 0x00001B10
_081261F8:
	.4byte 0x000002DB
_081261FC:
	.4byte 0x00001B0E
_08126200:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08126206:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081261B8

	.byte 0x00
	.byte 0x00
