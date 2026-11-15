	THUMB_FUNC_START sub_080F3CA0
sub_080F3CA0: @ 0x080F3CA0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r0, _080F3CCC  @ =gRam
	ldr r1, _080F3CD0  @ =0x00000F82
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F3CBC
	mov r0, #16
	bl sub_080CF388
_080F3CBC:
	ldr r1, _080F3CD4  @ =gUnknown_08179550
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
_080F3CCC:
	.4byte gRam
_080F3CD0:
	.4byte 0x00000F82
_080F3CD4:
	.4byte gUnknown_08179550
	THUMB_FUNC_END sub_080F3CA0

