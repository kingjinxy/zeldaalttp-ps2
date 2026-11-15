	THUMB_FUNC_START sub_080F9DF8
sub_080F9DF8: @ 0x080F9DF8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r2, r4, #0
	ldr r0, _080F9E24  @ =gRam
	ldr r1, _080F9E28  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080F9E1C
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F9E2C
	add r0, r4, #0
	bl sub_080F9C24
_080F9E1C:
	add r0, r4, #0
	bl sub_080F9648
	b _080F9E32
_080F9E24:
	.4byte gRam
_080F9E28:
	.4byte 0x00000F52
_080F9E2C:
	add r0, r2, #0
	bl sub_080F9ED4
_080F9E32:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F9DF8

