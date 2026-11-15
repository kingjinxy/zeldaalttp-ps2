	THUMB_FUNC_START sub_080FD7BC
sub_080FD7BC: @ 0x080FD7BC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080FD7EC  @ =gRam
	ldr r0, _080FD7F0  @ =0x00001B0A
	add r2, r3, r0
	ldrh r1, [r2]
	ldr r0, _080FD7F4  @ =0x000005FF
	cmp r1, r0
	bls _080FD800
	add r0, r1, #0
	sub r0, r0, #96
	strh r0, [r2]
	lsl r0, r0, #16
	ldr r1, _080FD7F8  @ =0x3FFF0000
	cmp r0, r1
	bls _080FD810
	ldr r1, _080FD7FC  @ =0x00000F62
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	bl sub_080B0240
	b _080FD810
_080FD7EC:
	.4byte gRam
_080FD7F0:
	.4byte 0x00001B0A
_080FD7F4:
	.4byte 0x000005FF
_080FD7F8:
	.4byte 0x3FFF0000
_080FD7FC:
	.4byte 0x00000F62
_080FD800:
	mov r0, #0
	strh r0, [r2]
	ldr r0, _080FD818  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FD810:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD818:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FD7BC

