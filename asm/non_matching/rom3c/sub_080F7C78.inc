	THUMB_FUNC_START sub_080F7C78
sub_080F7C78: @ 0x080F7C78
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _080F7CB0  @ =gRam
	ldr r1, _080F7CB4  @ =0x00000FC2
	add r0, r4, r1
	add r1, r2, r0
	ldrb r3, [r1]
	cmp r3, #0
	bne _080F7C96
	ldr r6, _080F7CB8  @ =0x00000FA2
	add r0, r4, r6
	add r0, r2, r0
	strb r3, [r0]
_080F7C96:
	ldrb r1, [r1]
	lsr r1, r1, #3
	lsl r1, r1, #4
	ldr r0, _080F7CBC  @ =gUnknown_08179D48
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7CB0:
	.4byte gRam
_080F7CB4:
	.4byte 0x00000FC2
_080F7CB8:
	.4byte 0x00000FA2
_080F7CBC:
	.4byte gUnknown_08179D48
	THUMB_FUNC_END sub_080F7C78

