	THUMB_FUNC_START sub_080CBD44
sub_080CBD44: @ 0x080CBD44
	push {r4,lr}
	lsl r1, r0, #16
	lsr r2, r1, #16
	ldr r3, _080CBD7C  @ =gUnknown_02006B80
	add r0, r2, r3
	ldrb r4, [r0]
	cmp r4, #0
	beq _080CBD76
	lsr r0, r1, #19
	ldr r1, _080CBD80  @ =gUnknown_02007B80
	add r3, r0, r1
	ldrb r1, [r3]
	mov r0, #7
	bic r0, r0, r2
	asr r1, r1, r0
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	bne _080CBD76
	sub r1, r4, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r3, #0
	bl sub_080CAAF8
_080CBD76:
	pop {r4}
	pop {r0}
	bx r0
_080CBD7C:
	.4byte gUnknown_02006B80
_080CBD80:
	.4byte gUnknown_02007B80
	THUMB_FUNC_END sub_080CBD44

