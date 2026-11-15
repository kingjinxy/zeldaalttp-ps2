	THUMB_FUNC_START sub_080D66E8
sub_080D66E8: @ 0x080D66E8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080D6720  @ =gRam
	ldr r0, _080D6724  @ =0x00001172
	add r1, r2, r0
	add r1, r3, r1
	ldr r4, _080D6728  @ =0x00000FC2
	add r0, r2, r4
	add r4, r3, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldrb r0, [r4]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _080D6734
	ldr r5, _080D672C  @ =0x00000F92
	add r2, r2, r5
	add r2, r3, r2
	ldr r3, _080D6730  @ =gUnknown_08175356
	lsr r0, r0, #27
	mov r1, #15
	eor r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _080D6748
_080D6720:
	.4byte gRam
_080D6724:
	.4byte 0x00001172
_080D6728:
	.4byte 0x00000FC2
_080D672C:
	.4byte 0x00000F92
_080D6730:
	.4byte gUnknown_08175356
_080D6734:
	ldr r5, _080D6750  @ =0x00000F52
	add r0, r2, r5
	add r0, r3, r0
	strb r1, [r0]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #64
	strb r1, [r4]
_080D6748:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6750:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D66E8

