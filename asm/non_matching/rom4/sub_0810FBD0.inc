	THUMB_FUNC_START sub_0810FBD0
sub_0810FBD0: @ 0x0810FBD0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0810FBFC  @ =gRam
	ldr r2, _0810FC00  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #3
	ldr r2, _0810FC04  @ =gUnknown_0817D378
	add r1, r1, r2
	ldrb r2, [r1, #4]
	ldr r4, _0810FC08  @ =0x0000096C
	add r3, r3, r4
	strh r2, [r3]
	ldr r1, [r1]
	bl sub_080C94D0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810FBFC:
	.4byte gRam
_0810FC00:
	.4byte 0x00001052
_0810FC04:
	.4byte gUnknown_0817D378
_0810FC08:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_0810FBD0

