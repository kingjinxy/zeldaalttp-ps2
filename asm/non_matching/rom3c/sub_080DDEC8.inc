	THUMB_FUNC_START sub_080DDEC8
sub_080DDEC8: @ 0x080DDEC8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080DDEF4  @ =gRam
	ldr r1, _080DDEF8  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _080DDEFC  @ =gUnknown_081762C8
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #4
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080DDEF4:
	.4byte gRam
_080DDEF8:
	.4byte 0x00000F92
_080DDEFC:
	.4byte gUnknown_081762C8
	THUMB_FUNC_END sub_080DDEC8

