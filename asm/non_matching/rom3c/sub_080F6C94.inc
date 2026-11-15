	THUMB_FUNC_START sub_080F6C94
sub_080F6C94: @ 0x080F6C94
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r4, _080F6CD0  @ =gRam
	ldr r2, _080F6CD4  @ =0x00000FC2
	add r0, r4, r2
	add r3, r1, r0
	ldrb r2, [r3]
	cmp r2, #0
	bne _080F6CB2
	ldr r6, _080F6CD8  @ =0x00000FA2
	add r0, r4, r6
	add r0, r1, r0
	strb r2, [r0]
_080F6CB2:
	ldrb r0, [r3]
	lsr r0, r0, #2
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _080F6CDC  @ =gUnknown_08179AF4
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #3
	bl sub_080C9480
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6CD0:
	.4byte gRam
_080F6CD4:
	.4byte 0x00000FC2
_080F6CD8:
	.4byte 0x00000FA2
_080F6CDC:
	.4byte gUnknown_08179AF4
	THUMB_FUNC_END sub_080F6C94

