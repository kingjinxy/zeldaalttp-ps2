	THUMB_FUNC_START sub_080D3980
sub_080D3980: @ 0x080D3980
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080D39C0  @ =gRam
	ldr r0, _080D39C4  @ =0x0000096C
	add r1, r2, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _080D39C8  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080D39CC  @ =0x00000FB2
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #4
	ldr r0, _080D39D0  @ =gUnknown_08174DF4
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D39C0:
	.4byte gRam
_080D39C4:
	.4byte 0x0000096C
_080D39C8:
	.4byte 0x00000F92
_080D39CC:
	.4byte 0x00000FB2
_080D39D0:
	.4byte gUnknown_08174DF4
	THUMB_FUNC_END sub_080D3980

