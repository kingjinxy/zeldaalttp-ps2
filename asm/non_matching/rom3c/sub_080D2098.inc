	THUMB_FUNC_START sub_080D2098
sub_080D2098: @ 0x080D2098
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080D20C8  @ =gRam
	ldr r1, _080D20CC  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080D20D0  @ =gUnknown_08174B8C
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	add r0, r4, #0
	mov r1, #18
	bl sub_080C57F8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D20C8:
	.4byte gRam
_080D20CC:
	.4byte 0x00000F92
_080D20D0:
	.4byte gUnknown_08174B8C
	THUMB_FUNC_END sub_080D2098

