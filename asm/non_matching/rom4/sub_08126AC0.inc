	THUMB_FUNC_START sub_08126AC0
sub_08126AC0: @ 0x08126AC0
	push {lr}
	ldr r2, _08126AF8  @ =gRam
	ldr r1, _08126AFC  @ =0x000009E8
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #9
	bls _08126ADC
	ldr r0, _08126B00  @ =gUnknown_03000050
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r0, #97
	mov r1, #5
	strb r1, [r0]
_08126ADC:
	ldr r3, _08126B04  @ =0x00001B10
	add r1, r2, r3
	ldr r3, _08126B08  @ =0x0000016D
	add r0, r3, #0
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldr r0, _08126B0C  @ =0x00001B0E
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #219
	strh r0, [r1]
	pop {r0}
	bx r0
_08126AF8:
	.4byte gRam
_08126AFC:
	.4byte 0x000009E8
_08126B00:
	.4byte gUnknown_03000050
_08126B04:
	.4byte 0x00001B10
_08126B08:
	.4byte 0x0000016D
_08126B0C:
	.4byte 0x00001B0E
	THUMB_FUNC_END sub_08126AC0

