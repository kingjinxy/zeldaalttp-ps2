	THUMB_FUNC_START sub_08022998
sub_08022998: @ 0x08022998
	push {r4,lr}
	add r4, r0, #0
	mov r1, #0
	mov r2, #0
	bl sub_0803D9F4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080229C8  @ =gUnknown_03006A30
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r2, r2, #40
	add r1, r1, r2
	ldr r0, [r1]
	add r1, r4, #0
	bl sub_08003F4C
	add r4, r4, #43
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080229C8:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08022998

