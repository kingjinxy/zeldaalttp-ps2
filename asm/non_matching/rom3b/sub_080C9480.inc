	THUMB_FUNC_START sub_080C9480
sub_080C9480: @ 0x080C9480
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C94A0  @ =gRam
	ldr r5, _080C94A4  @ =0x0000096C
	add r4, r3, r5
	mov r5, #0
	strb r2, [r4]
	ldr r2, _080C94A8  @ =0x0000096D
	add r3, r3, r2
	strb r5, [r3]
	bl sub_080C94AC
	pop {r4,r5}
	pop {r0}
	bx r0
_080C94A0:
	.4byte gRam
_080C94A4:
	.4byte 0x0000096C
_080C94A8:
	.4byte 0x0000096D
	THUMB_FUNC_END sub_080C9480

