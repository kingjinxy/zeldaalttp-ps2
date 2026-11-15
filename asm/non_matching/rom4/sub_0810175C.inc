	THUMB_FUNC_START sub_0810175C
sub_0810175C: @ 0x0810175C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08101798  @ =gRam
	ldr r3, _0810179C  @ =0x00000F82
	add r1, r2, r3
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	mov r3, #0
	strb r1, [r0]
	mov r0, #177
	lsl r0, r0, #4
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r1, #192
	lsl r1, r1, #4
	add r0, r2, r1
	strh r3, [r0]
	ldr r0, _081017A0  @ =0x00000C02
	add r2, r2, r0
	strh r3, [r2]
	mov r0, #15
	bl sub_08070C74
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08101798:
	.4byte gRam
_0810179C:
	.4byte 0x00000F82
_081017A0:
	.4byte 0x00000C02
	THUMB_FUNC_END sub_0810175C

