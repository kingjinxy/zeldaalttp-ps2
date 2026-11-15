	THUMB_FUNC_START sub_080C188C
sub_080C188C: @ 0x080C188C
	push {lr}
	add r3, r1, #0
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080C18B8  @ =gRam
	ldr r1, _080C18BC  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r2, #0
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080C18C0
	add r0, r2, #0
	add r1, r3, #0
	bl sub_080BFA64
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C18C2
	.byte 0x00
	.byte 0x00
_080C18B8:
	.4byte gRam
_080C18BC:
	.4byte 0x00000996
_080C18C0:
	mov r0, #0
_080C18C2:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C188C

	.byte 0x00
	.byte 0x00
