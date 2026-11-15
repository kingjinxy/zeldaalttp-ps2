	THUMB_FUNC_START sub_080C8D74
sub_080C8D74: @ 0x080C8D74
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080C8D90  @ =gRam
	ldr r2, _080C8D94  @ =0x00000E85
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C8D98
	add r0, r1, #0
	bl sub_080C6818
	b _080C8DA0
_080C8D90:
	.4byte gRam
_080C8D94:
	.4byte 0x00000E85
_080C8D98:
	add r0, r1, #0
	mov r1, #2
	bl sub_080C6E84
_080C8DA0:
	mov r0, #31
	mov r1, #1
	bl sub_080BEA28
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C8D74

