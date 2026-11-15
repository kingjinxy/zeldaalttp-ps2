	THUMB_FUNC_START sub_080DE17C
sub_080DE17C: @ 0x080DE17C
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080DE1AC  @ =0x00000101
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DE1A2
	ldr r1, _080DE1B0  @ =gRam
	ldr r0, _080DE1B4  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DE1A2:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE1AC:
	.4byte 0x00000101
_080DE1B0:
	.4byte gRam
_080DE1B4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE17C

