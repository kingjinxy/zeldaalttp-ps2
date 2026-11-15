	THUMB_FUNC_START sub_080F7C40
sub_080F7C40: @ 0x080F7C40
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080F7C6C  @ =gRam
	ldr r1, _080F7C70  @ =0x00000F92
	add r0, r0, r1
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080F7C66
	add r1, r0, #0
	sub r1, r1, #1
	lsl r1, r1, #5
	ldr r0, _080F7C74  @ =gUnknown_08179C68
	add r1, r1, r0
	add r0, r2, #0
	mov r2, #4
	bl sub_080C9480
_080F7C66:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7C6C:
	.4byte gRam
_080F7C70:
	.4byte 0x00000F92
_080F7C74:
	.4byte gUnknown_08179C68
	THUMB_FUNC_END sub_080F7C40

