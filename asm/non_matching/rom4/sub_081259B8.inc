	THUMB_FUNC_START sub_081259B8
sub_081259B8: @ 0x081259B8
	push {r4,r5,lr}
	ldr r2, _081259F8  @ =gRam
	ldr r1, _081259FC  @ =0x00001B93
	add r0, r2, r1
	ldrb r5, [r0]
	ldr r3, _08125A00  @ =0x00001B91
	add r0, r2, r3
	ldrb r3, [r0]
	sub r3, r5, r3
	ldr r4, _08125A04  @ =0x00001B96
	add r0, r2, r4
	ldrb r0, [r0]
	sub r4, r4, #2
	add r1, r2, r4
	ldrb r4, [r1]
	sub r0, r0, r4
	mul r0, r3, r0
	ldr r3, _08125A08  @ =0x00001B95
	add r1, r2, r3
	ldrb r3, [r1]
	sub r3, r3, r5
	ldr r1, _08125A0C  @ =0x00001B92
	add r2, r2, r1
	ldrb r1, [r2]
	sub r4, r4, r1
	add r1, r3, #0
	mul r1, r4, r1
	sub r0, r0, r1
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081259F8:
	.4byte gRam
_081259FC:
	.4byte 0x00001B93
_08125A00:
	.4byte 0x00001B91
_08125A04:
	.4byte 0x00001B96
_08125A08:
	.4byte 0x00001B95
_08125A0C:
	.4byte 0x00001B92
	THUMB_FUNC_END sub_081259B8

