	.syntax unified
	THUMB_FUNC_START sub_080098A0
sub_080098A0: @ 0X080098A0
	ldr r2, [r0, #76]
	ldrb r2, [r2, #10]
	strb r2, [r0, #22]
	adds r2, r0, #0
	adds r2, #60
	ldrb r3, [r2, #6]
	cmp r3, #0
	bne.n _080098C0
	ldrb r3, [r2, #9]
	cmp r3, #0
	beq.n _080098C4
	ldrb r3, [r2, #7]
	cmp r3, #0
	bne.n _080098C8
	ldr r1, [r1, #0]
	bx r1
_080098C0:
	ldr r1, [r1, #8]
	bx r1
_080098C4:
	ldr r1, [r1, #12]
	bx r1
_080098C8:
	ldr r1, [r1, #16]
	bx r1
	.syntax unified
	.thumb
