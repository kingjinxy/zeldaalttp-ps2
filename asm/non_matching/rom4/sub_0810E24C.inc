	THUMB_FUNC_START sub_0810E24C
sub_0810E24C: @ 0x0810E24C
	push {r4,r5,lr}
	add r3, r0, #0
	add r4, r1, #0
	add r5, r2, #0
	lsl r3, r3, #24
	lsr r3, r3, #24
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r5, r5, #24
	lsr r5, r5, #24
	mov r0, #187
	add r1, r3, #0
	mov r2, #12
	bl sub_080C9AAC
	ldr r3, _0810E2D8  @ =gRam
	ldr r2, _0810E2DC  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	strb r5, [r1]
	ldr r2, _0810E2E0  @ =0x00001172
	add r1, r3, r2
	add r1, r0, r1
	strb r5, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r5, r3, r1
	ldr r1, _0810E2E4  @ =gUnknown_0817D02E
	lsl r4, r4, #1
	add r4, r4, r1
	ldrh r2, [r4]
	ldrh r5, [r5]
	add r2, r2, r5
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _0810E2E8  @ =0x00000EE2
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	add r4, r4, #32
	add r1, r3, r4
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	ldr r2, _0810E2EC  @ =0x00000964
	add r1, r3, r2
	ldrh r2, [r1]
	add r2, r2, #39
	lsl r2, r2, #16
	lsr r2, r2, #16
	sub r4, r4, #48
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	add r4, r4, #32
	add r1, r3, r4
	add r1, r0, r1
	lsr r2, r2, #8
	strb r2, [r1]
	ldr r1, _0810E2F0  @ =0x00001012
	add r3, r3, r1
	add r0, r0, r3
	ldrb r2, [r0]
	mov r1, #4
	orr r1, r1, r2
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E2D8:
	.4byte gRam
_0810E2DC:
	.4byte 0x00001052
_0810E2E0:
	.4byte 0x00001172
_0810E2E4:
	.4byte gUnknown_0817D02E
_0810E2E8:
	.4byte 0x00000EE2
_0810E2EC:
	.4byte 0x00000964
_0810E2F0:
	.4byte 0x00001012
	THUMB_FUNC_END sub_0810E24C

