	THUMB_FUNC_START sub_080100E4
sub_080100E4: @ 0x080100E4
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _08010100  @ =gUnknown_02016D60
	ldrb r1, [r3, #28]
	mov r0, #3
	and r0, r0, r1
	cmp r0, r2
	beq _080100FC
	mov r1, #128
	add r0, r2, #0
	orr r0, r0, r1
	strb r0, [r3, #28]
_080100FC:
	bx lr
	.byte 0x00
	.byte 0x00
_08010100:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080100E4

