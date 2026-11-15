	THUMB_FUNC_START sub_080F631C
sub_080F631C: @ 0x080F631C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r1, _080F635C  @ =gRam
	ldr r2, _080F6360  @ =0x00000F52
	add r0, r1, r2
	add r5, r4, r0
	ldrb r0, [r5]
	mov r2, #1
	cmp r0, #0
	beq _080F6336
	mov r2, #2
_080F6336:
	ldr r3, _080F6364  @ =0x00000F92
	add r0, r1, r3
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080F6368  @ =gUnknown_081799B8
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C9480
	ldrb r0, [r5]
	cmp r0, #0
	beq _080F6356
	add r0, r4, #0
	bl sub_080C6230
_080F6356:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F635C:
	.4byte gRam
_080F6360:
	.4byte 0x00000F52
_080F6364:
	.4byte 0x00000F92
_080F6368:
	.4byte gUnknown_081799B8
	THUMB_FUNC_END sub_080F631C

