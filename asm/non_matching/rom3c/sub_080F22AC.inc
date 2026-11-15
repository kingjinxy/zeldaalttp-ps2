	THUMB_FUNC_START sub_080F22AC
sub_080F22AC: @ 0x080F22AC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F22E0  @ =gRam
	ldr r2, _080F22E4  @ =0x0000096C
	add r3, r1, r2
	mov r4, #0
	mov r2, #11
	strb r2, [r3]
	ldr r3, _080F22E8  @ =0x0000096D
	add r2, r1, r3
	strb r4, [r2]
	ldr r2, _080F22EC  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r1, #88
	mul r1, r2, r1
	ldr r2, _080F22F0  @ =gUnknown_081790CC
	add r1, r1, r2
	bl sub_080C94AC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F22E0:
	.4byte gRam
_080F22E4:
	.4byte 0x0000096C
_080F22E8:
	.4byte 0x0000096D
_080F22EC:
	.4byte 0x00000F92
_080F22F0:
	.4byte gUnknown_081790CC
	THUMB_FUNC_END sub_080F22AC

