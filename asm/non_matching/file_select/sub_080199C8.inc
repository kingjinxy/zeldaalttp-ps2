	THUMB_FUNC_START sub_080199C8
sub_080199C8: @ 0x080199C8
	push {lr}
	add r2, r0, #0
	add r0, r0, #127
	ldrb r0, [r0]
	cmp r0, #0
	beq _080199DC
	add r0, r2, #0
	bl sub_0801A254
	b _080199EC
_080199DC:
	ldr r0, _080199F0  @ =gUnknown_08139AD8
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_080199EC:
	pop {r0}
	bx r0
_080199F0:
	.4byte gUnknown_08139AD8
	THUMB_FUNC_END sub_080199C8

