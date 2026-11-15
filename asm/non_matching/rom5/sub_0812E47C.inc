	THUMB_FUNC_START sub_0812E47C
sub_0812E47C: @ 0x0812E47C
	push {r4,lr}
	ldr r4, _0812E4B0  @ =gRam
	ldr r0, _0812E4B4  @ =0x00000A05
	add r1, r4, r0
	mov r2, #0
	mov r0, #7
	strb r0, [r1]
	ldr r1, _0812E4B8  @ =0x00000A06
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _0812E4BC  @ =0x00000A0C
	add r1, r4, r0
	ldr r0, _0812E4C0  @ =0x0000FF80
	strh r0, [r1]
	bl sub_0812E0A0
	ldr r1, _0812E4C4  @ =0x00000A3C
	add r4, r4, r1
	mov r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_0812E4B0:
	.4byte gRam
_0812E4B4:
	.4byte 0x00000A05
_0812E4B8:
	.4byte 0x00000A06
_0812E4BC:
	.4byte 0x00000A0C
_0812E4C0:
	.4byte 0x0000FF80
_0812E4C4:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_0812E47C

