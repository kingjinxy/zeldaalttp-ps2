	THUMB_FUNC_START sub_080C53E0
sub_080C53E0: @ 0x080C53E0
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r3, r1, #24
	ldr r0, _080C540C  @ =gRam
	ldr r1, _080C5410  @ =0x000016D5
	add r2, r0, r1
	ldr r1, _080C5414  @ =gUnknown_081720B4
	ldr r5, _080C5418  @ =0x00000FB2
	add r0, r0, r5
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080C541C
	add r0, r4, #0
	add r1, r3, #0
	bl sub_080C54B8
	b _080C5424
_080C540C:
	.4byte gRam
_080C5410:
	.4byte 0x000016D5
_080C5414:
	.4byte gUnknown_081720B4
_080C5418:
	.4byte 0x00000FB2
_080C541C:
	add r0, r4, #0
	add r1, r3, #0
	bl sub_080C5488
_080C5424:
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C53E0

	.byte 0x00
	.byte 0x00
