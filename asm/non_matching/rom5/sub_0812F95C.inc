	THUMB_FUNC_START sub_0812F95C
sub_0812F95C: @ 0x0812F95C
	push {r4,r5,lr}
	ldr r1, _0812F994  @ =gRam
	ldr r0, _0812F998  @ =0x00000A4C
	add r4, r1, r0
	ldrh r2, [r4]
	ldr r0, _0812F99C  @ =gUnknown_0822BB0C
	add r0, r2, r0
	ldrb r3, [r0]
	ldr r5, _0812F9A0  @ =0x000009AF
	add r0, r1, r5
	strb r3, [r0]
	mov r0, #201
	lsl r0, r0, #4
	add r1, r1, r0
	strh r3, [r1]
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldr r0, _0812F9A4  @ =gUnknown_0822BAD0
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r0, [r2]
	bl _call_via_r0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F994:
	.4byte gRam
_0812F998:
	.4byte 0x00000A4C
_0812F99C:
	.4byte gUnknown_0822BB0C
_0812F9A0:
	.4byte 0x000009AF
_0812F9A4:
	.4byte gUnknown_0822BAD0
	THUMB_FUNC_END sub_0812F95C

