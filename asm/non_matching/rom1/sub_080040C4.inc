	thumb_func_start sub_080040C4
sub_080040C4: @ 0x080040C4
	movs r2, #0x2b
	ldrb r3, [r0, r2]
	subs r1, r1, r3
	beq _080040DE
	lsls r1, r1, #0x1b
	lsrs r1, r1, #0x1b
	cmp r1, #0x10
	bhs _080040D6
	adds r3, #2
_080040D6:
	subs r3, #1
	lsls r3, r3, #0x1b
	lsrs r3, r3, #0x1b
	strb r3, [r0, r2]
_080040DE:
	mov pc, lr

