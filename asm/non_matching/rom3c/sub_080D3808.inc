	THUMB_FUNC_START sub_080D3808
sub_080D3808: @ 0x080D3808
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080D3830  @ =gRam
	ldr r1, _080D3834  @ =0x0000096C
	add r0, r0, r1
	mov r1, #1
	strh r1, [r0]
	ldr r1, _080D3838  @ =gUnknown_08174DAC
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3830:
	.4byte gRam
_080D3834:
	.4byte 0x0000096C
_080D3838:
	.4byte gUnknown_08174DAC
	THUMB_FUNC_END sub_080D3808

