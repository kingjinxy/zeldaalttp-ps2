	THUMB_FUNC_START sub_080D85F8
sub_080D85F8: @ 0x080D85F8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080D862C  @ =gRam
	ldr r1, _080D8630  @ =0x00000F92
	add r2, r0, r1
	add r2, r4, r2
	add r1, r1, #192
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080D8634
	add r0, r4, #0
	bl sub_080D84B0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D862C:
	.4byte gRam
_080D8630:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D85F8

