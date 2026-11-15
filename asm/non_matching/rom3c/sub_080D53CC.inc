	THUMB_FUNC_START sub_080D53CC
sub_080D53CC: @ 0x080D53CC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #4
	bl sub_080CF3A0
	ldr r2, _080D5404  @ =gRam
	ldr r1, _080D5408  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080D540C  @ =0x00000FB2
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #2
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r0, _080D5410  @ =gUnknown_08174FF8
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #1
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
_080D5404:
	.4byte gRam
_080D5408:
	.4byte 0x00000F92
_080D540C:
	.4byte 0x00000FB2
_080D5410:
	.4byte gUnknown_08174FF8
	THUMB_FUNC_END sub_080D53CC

