	THUMB_FUNC_START sub_080BDA10
sub_080BDA10: @ 0x080BDA10
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_080BDB54
	ldr r0, _080BDA40  @ =gRam
	ldr r1, _080BDA44  @ =0x00000FF2
	add r0, r0, r1
	mov r1, #136
	strb r1, [r0]
	mov r0, #0
	bl sub_080CEB84
	add r0, r4, #0
	bl sub_080B9584
	mov r0, #0
	bl sub_080FE15C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDA40:
	.4byte gRam
_080BDA44:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080BDA10

