	THUMB_FUNC_START sub_080C51C8
sub_080C51C8: @ 0x080C51C8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080C5204  @ =gRam
	ldr r1, _080C5208  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080C51FC
	add r0, r4, #0
	bl sub_080C3ED0
	bl sub_080C4F6C
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C51FC
	add r0, r4, #0
	bl sub_080C3BD0
_080C51FC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C5204:
	.4byte gRam
_080C5208:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080C51C8

