	THUMB_FUNC_START sub_080F60E0
sub_080F60E0: @ 0x080F60E0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080F6110  @ =gRam
	ldr r1, _080F6114  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080F6118  @ =gUnknown_08179948
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #3
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080F6110:
	.4byte gRam
_080F6114:
	.4byte 0x00000F92
_080F6118:
	.4byte gUnknown_08179948
	THUMB_FUNC_END sub_080F60E0

