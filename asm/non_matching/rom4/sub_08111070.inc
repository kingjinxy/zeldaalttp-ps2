	THUMB_FUNC_START sub_08111070
sub_08111070: @ 0x08111070
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _081110A4  @ =gRam
	ldr r1, _081110A8  @ =0x00001062
	add r0, r0, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r0, r1, #0
	add r0, r0, #80
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r1, #175
	bls _0811109E
	cmp r2, #14
	bhi _0811109E
	ldr r0, _081110AC  @ =gUnknown_0817D4D4
	lsl r1, r2, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r3, #0
	bl _call_via_r1
_0811109E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081110A4:
	.4byte gRam
_081110A8:
	.4byte 0x00001062
_081110AC:
	.4byte gUnknown_0817D4D4
	THUMB_FUNC_END sub_08111070

