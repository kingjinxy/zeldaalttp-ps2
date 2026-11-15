	THUMB_FUNC_START sub_080F87C0
sub_080F87C0: @ 0x080F87C0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080F87FC  @ =gRam
	ldr r0, _080F8800  @ =0x00000FB2
	add r4, r7, r0
	add r4, r6, r4
	ldrb r5, [r4]
	add r0, r6, #0
	bl sub_080C2FA8
	add r1, r0, #0
	strb r1, [r4]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r5, r0
	beq _080F87F6
	eor r5, r5, r1
	mov r0, #2
	and r5, r5, r0
	cmp r5, #0
	bne _080F87F6
	ldr r1, _080F8804  @ =0x00000FD2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #12
	strb r1, [r0]
_080F87F6:
	pop {r4-r7}
	pop {r0}
	bx r0
_080F87FC:
	.4byte gRam
_080F8800:
	.4byte 0x00000FB2
_080F8804:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080F87C0

