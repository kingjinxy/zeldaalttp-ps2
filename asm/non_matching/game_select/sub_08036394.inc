	THUMB_FUNC_START sub_08036394
sub_08036394: @ 0x08036394
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803644C
	add r2, r4, #0
	add r2, r2, #114
	ldrh r0, [r2]
	cmp r0, #0
	beq _080363AA
	sub r0, r0, #1
	strh r0, [r2]
_080363AA:
	ldr r0, [r4, #116]
	ldrh r1, [r0]
	ldr r0, _080363C4  @ =0x0000FFFF
	cmp r1, r0
	bne _080363D0
	ldrh r0, [r2]
	cmp r0, #0
	beq _080363C8
	add r0, r4, #0
	bl sub_08036424
	b _080363D0
	.byte 0x00
	.byte 0x00
_080363C4:
	.4byte 0x0000FFFF
_080363C8:
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #240
	strh r0, [r2]
_080363D0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08036394

	.byte 0x00
	.byte 0x00
