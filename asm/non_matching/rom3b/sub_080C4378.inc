	THUMB_FUNC_START sub_080C4378
sub_080C4378: @ 0x080C4378
	push {r4,lr}
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r4, r4, #24
	lsr r1, r4, #24
	bl sub_080C2CB4
	ldr r1, _080C43C8  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080C43CC  @ =0x000016CD
	add r0, r1, r3
	strb r2, [r0]
	ldr r2, _080C43D0  @ =0x00000961
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	lsr r4, r4, #25
	ldr r2, _080C43D4  @ =0x000016CF
	add r0, r1, r2
	strb r4, [r0]
	add r3, r3, #126
	add r0, r1, r3
	mov r2, #0
	strh r4, [r0]
	sub r3, r3, #132
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080C43D8  @ =0x000016C9
	add r1, r1, r0
	strb r2, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C43C8:
	.4byte gRam
_080C43CC:
	.4byte 0x000016CD
_080C43D0:
	.4byte 0x00000961
_080C43D4:
	.4byte 0x000016CF
_080C43D8:
	.4byte 0x000016C9
	THUMB_FUNC_END sub_080C4378

