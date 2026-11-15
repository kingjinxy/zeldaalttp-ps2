	THUMB_FUNC_START sub_080C555C
sub_080C555C: @ 0x080C555C
	push {r4-r7,lr}
	add r7, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r6, r1, #0
	ldr r4, _080C5598  @ =gRam
	ldr r0, _080C559C  @ =0x000016F9
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080C5584
	add r0, r1, #0
	mov r1, #4
	bl sub_080C4378
	ldr r0, _080C55A0  @ =0x000016F8
	add r1, r4, r0
	mov r0, #16
	strb r0, [r1]
	strb r0, [r5]
_080C5584:
	add r0, r7, #0
	add r1, r6, #0
	bl sub_080C55A4
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C5598:
	.4byte gRam
_080C559C:
	.4byte 0x000016F9
_080C55A0:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_080C555C

