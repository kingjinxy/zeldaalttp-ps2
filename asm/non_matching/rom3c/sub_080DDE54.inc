	THUMB_FUNC_START sub_080DDE54
sub_080DDE54: @ 0x080DDE54
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080DDE7C  @ =gRam
	ldr r1, _080DDE80  @ =0x00001142
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #24
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C35C0
	add r0, r4, #0
	bl sub_080C3758
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DDE7C:
	.4byte gRam
_080DDE80:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080DDE54

