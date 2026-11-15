	THUMB_FUNC_START sub_080CBDC8
sub_080CBDC8: @ 0x080CBDC8
	push {lr}
	mov r2, #1
	mov r0, #7
	ldr r3, _080CBDD4  @ =gUnknown_03002F4B
	b _080CBDDE
	.byte 0x00
	.byte 0x00
_080CBDD4:
	.4byte gUnknown_03002F4B
_080CBDD8:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
_080CBDDE:
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	blt _080CBDF4
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #21
	beq _080CBDF2
	cmp r0, #25
	bne _080CBDD8
_080CBDF2:
	mov r2, #0
_080CBDF4:
	add r0, r2, #0
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080CBDC8

	.byte 0x00
	.byte 0x00
