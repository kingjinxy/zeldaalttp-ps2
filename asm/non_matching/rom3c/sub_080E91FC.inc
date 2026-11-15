	THUMB_FUNC_START sub_080E91FC
sub_080E91FC: @ 0x080E91FC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E9230  @ =gRam
	ldr r3, _080E9234  @ =0x00001092
	add r1, r2, r3
	add r3, r0, r1
	mov r1, #0
	strb r1, [r3]
	ldr r4, _080E9238  @ =0x00001142
	add r1, r2, r4
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E9228
	ldr r1, _080E923C  @ =0x000015E2
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #9
	bne _080E9228
	mov r0, #1
	strb r0, [r3]
_080E9228:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9230:
	.4byte gRam
_080E9234:
	.4byte 0x00001092
_080E9238:
	.4byte 0x00001142
_080E923C:
	.4byte 0x000015E2
	THUMB_FUNC_END sub_080E91FC

