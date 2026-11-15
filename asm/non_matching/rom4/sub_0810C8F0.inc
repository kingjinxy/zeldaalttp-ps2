	THUMB_FUNC_START sub_0810C8F0
sub_0810C8F0: @ 0x0810C8F0
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _0810C940  @ =gRam
	ldr r0, _0810C944  @ =0x00001122
	add r5, r2, r0
	add r5, r4, r5
	ldrb r6, [r5]
	ldr r3, _0810C948  @ =gUnknown_0817CDF0
	ldr r1, _0810C94C  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r0, _0810C950  @ =0x00000D94
	add r2, r2, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #24
	bl sub_080CF3A0
	ldr r1, _0810C954  @ =gUnknown_0817CDC0
	add r0, r4, #0
	mov r2, #6
	bl sub_080C9480
	strb r6, [r5]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810C940:
	.4byte gRam
_0810C944:
	.4byte 0x00001122
_0810C948:
	.4byte gUnknown_0817CDF0
_0810C94C:
	.4byte 0x00001052
_0810C950:
	.4byte 0x00000D94
_0810C954:
	.4byte gUnknown_0817CDC0
	THUMB_FUNC_END sub_0810C8F0

