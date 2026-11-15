	THUMB_FUNC_START sub_080D5370
sub_080D5370: @ 0x080D5370
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #4
	bl sub_080CF388
	add r0, r4, #0
	bl sub_080C6240
	ldr r1, _080D53A4  @ =gUnknown_08175078
	ldr r0, _080D53A8  @ =gRam
	ldr r2, _080D53AC  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D53A4:
	.4byte gUnknown_08175078
_080D53A8:
	.4byte gRam
_080D53AC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D5370

