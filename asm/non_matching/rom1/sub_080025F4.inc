	.syntax unified
	THUMB_FUNC_START sub_080025F4
sub_080025F4: @ 0X080025F4
	ldrb r2, [r1, #2]
	orrs r2, r2
	bne.n sub_08002618
	ldr r2, [r0, #16]
	orrs r2, r2
	bne.n sub_08002618
	ldr r2, [r0, #56]
	orrs r2, r2
	bne.n sub_08002618
	ldrb r2, [r0, #20]
	cmp r2, #2
	beq.n sub_08002618
	ldrb r4, [r1, #15]
	movs r3, #192
	ands r4, r3
	bne.n sub_08002618
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
