	THUMB_FUNC_START sub_080C5394
sub_080C5394: @ 0x080C5394
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r2, r1, #24
	ldr r0, _080C53C0  @ =gRam
	ldr r1, _080C53C4  @ =0x00000E75
	add r0, r0, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080C53C8
	add r0, r5, #0
	add r1, r2, #0
	bl sub_080C555C
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C53D2
_080C53C0:
	.4byte gRam
_080C53C4:
	.4byte 0x00000E75
_080C53C8:
	add r0, r2, #0
	bl sub_080C3AC8
	strb r4, [r5]
	mov r0, #1
_080C53D2:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C5394

