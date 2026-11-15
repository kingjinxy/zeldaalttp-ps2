	THUMB_FUNC_START sub_080D3708
sub_080D3708: @ 0x080D3708
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080D37A0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D3738
	ldr r1, _080D3740  @ =gUnknown_08174D4C
	ldr r0, _080D3744  @ =gRam
	ldr r2, _080D3748  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D3738:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D3740:
	.4byte gUnknown_08174D4C
_080D3744:
	.4byte gRam
_080D3748:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D3708

