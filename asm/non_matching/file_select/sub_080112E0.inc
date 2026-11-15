	THUMB_FUNC_START sub_080112E0
sub_080112E0: @ 0x080112E0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _08011320  @ =gUnknown_0200B250
	lsl r0, r4, #6
	add r0, r0, r1
	add r1, r0, #0
	add r1, r1, #36
	mov r2, #1
	strb r2, [r1]
	add r0, r0, #37
	strb r2, [r0]
	bl sub_080113D8
	mov r0, #128
	orr r4, r4, r0
	add r0, r4, #0
	bl sub_08067B68
	add r0, r4, #0
	bl sub_08011434
	add r0, r4, #0
	bl sub_08011344
	bl sub_08011408
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08011320:
	.4byte gUnknown_0200B250
	THUMB_FUNC_END sub_080112E0

