	THUMB_FUNC_START sub_080D59D0
sub_080D59D0: @ 0x080D59D0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D5A04  @ =gRam
	ldr r1, _080D5A08  @ =0x00000F22
	add r4, r3, r1
	add r4, r0, r4
	ldr r5, _080D5A0C  @ =gUnknown_081750B8
	ldr r2, _080D5A10  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #4
	mov r2, #1
	and r1, r1, r2
	add r1, r1, r5
	ldrb r1, [r1]
	strb r1, [r4]
	ldr r1, _080D5A14  @ =0x00000F12
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #240
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D5A04:
	.4byte gRam
_080D5A08:
	.4byte 0x00000F22
_080D5A0C:
	.4byte gUnknown_081750B8
_080D5A10:
	.4byte 0x00000EE2
_080D5A14:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080D59D0

