	THUMB_FUNC_START sub_080D39D4
sub_080D39D4: @ 0x080D39D4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #8
	bl sub_080CF388
	ldr r0, _080D3A00  @ =gRam
	ldr r1, _080D3A04  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080D3A08  @ =gUnknown_08174EA4
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	pop {r4}
	pop {r0}
	bx r0
_080D3A00:
	.4byte gRam
_080D3A04:
	.4byte 0x00000F92
_080D3A08:
	.4byte gUnknown_08174EA4
	THUMB_FUNC_END sub_080D39D4

