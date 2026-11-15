	THUMB_FUNC_START sub_080D37A0
sub_080D37A0: @ 0x080D37A0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080D37F0  @ =gRam
	ldr r0, _080D37F4  @ =0x0000096C
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
	ldr r1, _080D37F8  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _080D37FC  @ =0x00000F92
	add r0, r2, r3
	add r0, r4, r0
	lsl r1, r1, #1
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080D3800  @ =gUnknown_08174DA4
	add r0, r1, r0
	ldrb r0, [r0]
	mov r3, #206
	lsl r3, r3, #4
	add r2, r2, r3
	strh r0, [r2]
	lsl r1, r1, #3
	ldr r0, _080D3804  @ =gUnknown_08174D64
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080D37F0:
	.4byte gRam
_080D37F4:
	.4byte 0x0000096C
_080D37F8:
	.4byte 0x00000FB2
_080D37FC:
	.4byte 0x00000F92
_080D3800:
	.4byte gUnknown_08174DA4
_080D3804:
	.4byte gUnknown_08174D64
	THUMB_FUNC_END sub_080D37A0

