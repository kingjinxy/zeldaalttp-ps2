	THUMB_FUNC_START sub_0806E3A8
sub_0806E3A8: @ 0x0806E3A8
	push {lr}
	ldr r2, _0806E3C0  @ =gRam
	ldr r1, _0806E3C4  @ =0x000009DA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #16
	bne _0806E3CC
	ldr r0, _0806E3C8  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #18
	strh r0, [r1]
	b _0806E400
_0806E3C0:
	.4byte gRam
_0806E3C4:
	.4byte 0x000009DA
_0806E3C8:
	.4byte 0x00000A3C
_0806E3CC:
	mov r3, #13
	cmp r0, #7
	beq _0806E3E2
	mov r3, #5
	cmp r0, #23
	bne _0806E400
	ldr r1, _0806E404  @ =0x00000A42
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r3, r0
	beq _0806E400
_0806E3E2:
	ldr r1, _0806E404  @ =0x00000A42
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _0806E408  @ =0x0000FFF1
	cmp r1, r0
	beq _0806E3FA
	ldr r0, _0806E40C  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0806E400
_0806E3FA:
	ldr r1, _0806E410  @ =0x00000A3C
	add r0, r2, r1
	strh r3, [r0]
_0806E400:
	pop {r0}
	bx r0
_0806E404:
	.4byte 0x00000A42
_0806E408:
	.4byte 0x0000FFF1
_0806E40C:
	.4byte gPendantCount
_0806E410:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_0806E3A8

