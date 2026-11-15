	THUMB_FUNC_START sub_080CA54C
sub_080CA54C: @ 0x080CA54C
	push {lr}
	bl sub_080CA400
	ldr r0, _080CA578  @ =gRam
	ldr r1, _080CA57C  @ =0x00001643
	add r2, r0, r1
	ldrb r1, [r2]
	cmp r1, #0
	beq _080CA588
	ldr r3, _080CA580  @ =0x000009AD
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080CA588
	sub r0, r1, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CA584
	bl sub_08132448
	b _080CA588
_080CA578:
	.4byte gRam
_080CA57C:
	.4byte 0x00001643
_080CA580:
	.4byte 0x000009AD
_080CA584:
	bl sub_08131FA4
_080CA588:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CA54C

