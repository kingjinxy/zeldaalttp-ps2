	THUMB_FUNC_START sub_080C52E4
sub_080C52E4: @ 0x080C52E4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080C5318  @ =gRam
	ldr r2, _080C531C  @ =0x00000FF2
	add r0, r0, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080CEB84
	add r0, r4, #0
	bl sub_080CF6C0
	add r0, r4, #0
	mov r1, #121
	bl sub_080CF140
	add r0, r4, #0
	bl sub_080C536C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C5318:
	.4byte gRam
_080C531C:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080C52E4

