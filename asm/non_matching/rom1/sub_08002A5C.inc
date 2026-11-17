	.syntax unified
	THUMB_FUNC_START sub_08002A5C
sub_08002A5C: @ 0X08002A5C
	bl sub_080025F4
	push {r0, r1}
	bl sub_0800099C
	adds r2, r0, #0
	pop {r0, r1}
	movs r3, #3
	ands r2, r3
	lsls r2, r2, #3
	movs r3, #4
	b.n _08002AA0
	.syntax unified
	.thumb
