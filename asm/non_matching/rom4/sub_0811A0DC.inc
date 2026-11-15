	THUMB_FUNC_START sub_0811A0DC
sub_0811A0DC: @ 0x0811A0DC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	ldr r4, _0811A13C  @ =gRam
	ldr r3, _0811A140  @ =0x000016D5
	add r2, r4, r3
	lsr r1, r1, #21
	ldrb r2, [r2]
	add r1, r1, r2
	mov r2, #182
	lsl r2, r2, #5
	add r5, r4, r2
	ldr r2, _0811A144  @ =gUnknown_0817F4FC
	mov r3, #254
	and r1, r1, r3
	add r2, r1, r2
	ldrh r3, [r2]
	ldrh r5, [r5]
	add r3, r3, r5
	ldr r5, _0811A148  @ =0x00000DC5
	add r2, r4, r5
	add r2, r0, r2
	strb r3, [r2]
	add r5, r5, #20
	add r2, r4, r5
	add r2, r0, r2
	lsr r3, r3, #8
	strb r3, [r2]
	ldr r2, _0811A14C  @ =0x000016C4
	add r3, r4, r2
	ldr r2, _0811A150  @ =gUnknown_0817F514
	add r1, r1, r2
	ldrh r2, [r1]
	ldrh r3, [r3]
	add r2, r2, r3
	ldr r3, _0811A154  @ =0x00000DCF
	add r1, r4, r3
	add r1, r0, r1
	strb r2, [r1]
	add r5, r5, #10
	add r4, r4, r5
	add r0, r0, r4
	lsr r2, r2, #8
	strb r2, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0811A13C:
	.4byte gRam
_0811A140:
	.4byte 0x000016D5
_0811A144:
	.4byte gUnknown_0817F4FC
_0811A148:
	.4byte 0x00000DC5
_0811A14C:
	.4byte 0x000016C4
_0811A150:
	.4byte gUnknown_0817F514
_0811A154:
	.4byte 0x00000DCF
	THUMB_FUNC_END sub_0811A0DC

