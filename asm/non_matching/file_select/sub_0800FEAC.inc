	THUMB_FUNC_START sub_0800FEAC
sub_0800FEAC: @ 0x0800FEAC
	push {lr}
	ldr r3, _0800FED8  @ =gUnknown_02016D60
	ldrb r0, [r3, #29]
	cmp r0, #0
	beq _0800FEBE
	add r1, r3, #0
	add r1, r1, #32
	mov r0, #0
	strb r0, [r1]
_0800FEBE:
	ldrb r2, [r3, #27]
	cmp r2, #0
	bne _0800FED2
	ldr r0, _0800FEDC  @ =gSubState
	mov r1, #2
	strb r1, [r0]
	strh r2, [r3, #4]
	ldrb r0, [r3, #31]
	bl sub_080100E4
_0800FED2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800FED8:
	.4byte gUnknown_02016D60
_0800FEDC:
	.4byte gSubState
	THUMB_FUNC_END sub_0800FEAC

