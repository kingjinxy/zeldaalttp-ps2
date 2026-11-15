	THUMB_FUNC_START sub_080C5430
sub_080C5430: @ 0x080C5430
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	ldr r0, _080C5464  @ =gRam
	ldr r1, _080C5468  @ =0x000016D5
	add r3, r0, r1
	ldr r2, _080C546C  @ =gUnknown_081720B4
	ldr r1, _080C5470  @ =0x00000FB2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r1, #3
	eor r0, r0, r1
	add r0, r0, r2
	ldrb r1, [r3]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080C5474
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C54B8
	b _080C547C
	.byte 0x00
	.byte 0x00
_080C5464:
	.4byte gRam
_080C5468:
	.4byte 0x000016D5
_080C546C:
	.4byte gUnknown_081720B4
_080C5470:
	.4byte 0x00000FB2
_080C5474:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080C5488
_080C547C:
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C5430

	.byte 0x00
	.byte 0x00
