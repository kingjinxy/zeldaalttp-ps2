	THUMB_FUNC_START sub_080FE124
sub_080FE124: @ 0x080FE124
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080FE150  @ =gRam
	ldr r1, _080FE154  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080FE158  @ =gUnknown_0817AAF8
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080CA5AC
	pop {r4}
	pop {r0}
	bx r0
_080FE150:
	.4byte gRam
_080FE154:
	.4byte 0x00000F92
_080FE158:
	.4byte gUnknown_0817AAF8
	THUMB_FUNC_END sub_080FE124

