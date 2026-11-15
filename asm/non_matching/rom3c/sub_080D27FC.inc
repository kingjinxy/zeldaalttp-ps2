	THUMB_FUNC_START sub_080D27FC
sub_080D27FC: @ 0x080D27FC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080D2A34
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D282C
	ldr r1, _080D2834  @ =gUnknown_08174C1C
	ldr r0, _080D2838  @ =gRam
	ldr r2, _080D283C  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D282C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2834:
	.4byte gUnknown_08174C1C
_080D2838:
	.4byte gRam
_080D283C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D27FC

