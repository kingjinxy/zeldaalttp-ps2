	THUMB_FUNC_START sub_080D29E4
sub_080D29E4: @ 0x080D29E4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #16
	bl sub_080CF388
	ldr r2, _080D2A24  @ =gRam
	ldr r1, _080D2A28  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080D2A2C  @ =0x00000F92
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #5
	ldr r0, _080D2A30  @ =gUnknown_08174C6C
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	mov r0, #4
	bl sub_080C64A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2A24:
	.4byte gRam
_080D2A28:
	.4byte 0x00000FB2
_080D2A2C:
	.4byte 0x00000F92
_080D2A30:
	.4byte gUnknown_08174C6C
	THUMB_FUNC_END sub_080D29E4

