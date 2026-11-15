	THUMB_FUNC_START sub_080C382C
sub_080C382C: @ 0x080C382C
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080C3844  @ =gBow
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C3850
	cmp r1, #225
	bne _080C3848
	mov r0, #217
	b _080C3852
	.byte 0x00
	.byte 0x00
_080C3844:
	.4byte gBow
_080C3848:
	cmp r1, #226
	bne _080C3850
	mov r0, #218
	b _080C3852
_080C3850:
	add r0, r1, #0
_080C3852:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C382C

	.byte 0x00
	.byte 0x00
