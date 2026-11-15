	THUMB_FUNC_START sub_080D65D0
sub_080D65D0: @ 0x080D65D0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080D6604  @ =gRam
	ldr r0, _080D6608  @ =0x00001172
	add r1, r2, r0
	add r1, r5, r1
	ldr r3, _080D660C  @ =0x00000FC2
	add r0, r2, r3
	add r4, r5, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldrb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D6614
	sub r3, r3, #48
	add r1, r2, r3
	add r1, r5, r1
	ldr r2, _080D6610  @ =gUnknown_08175340
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080D6632
	.byte 0x00
	.byte 0x00
_080D6604:
	.4byte gRam
_080D6608:
	.4byte 0x00001172
_080D660C:
	.4byte 0x00000FC2
_080D6610:
	.4byte gUnknown_08175340
_080D6614:
	ldr r0, _080D6638  @ =0x00000F52
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #160
	strb r1, [r4]
	add r0, r5, #0
	bl sub_080C3540
_080D6632:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D6638:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D65D0

