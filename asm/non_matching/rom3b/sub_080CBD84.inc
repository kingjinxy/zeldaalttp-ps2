	THUMB_FUNC_START sub_080CBD84
sub_080CBD84: @ 0x080CBD84
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r3, r1, #24
	lsl r2, r2, #16
	lsr r4, r2, #16
	mov r2, #7
	ldr r1, _080CBD98  @ =gRam
	b _080CBDA2
	.byte 0x00
	.byte 0x00
_080CBD98:
	.4byte gRam
_080CBD9C:
	sub r2, r2, #1
	cmp r2, #0
	blt _080CBDBC
_080CBDA2:
	ldr r6, _080CBDC4  @ =0x00000D1B
	add r0, r1, r6
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080CBD9C
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r5, #0
	add r1, r3, #0
	add r3, r4, #0
	bl sub_080CAC5C
_080CBDBC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CBDC4:
	.4byte 0x00000D1B
	THUMB_FUNC_END sub_080CBD84

