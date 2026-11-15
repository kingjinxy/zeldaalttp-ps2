	THUMB_FUNC_START sub_080F58AC
sub_080F58AC: @ 0x080F58AC
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080F58F4  @ =gRam
	ldr r0, _080F58F8  @ =0x00000EE2
	add r5, r1, r0
	add r5, r4, r5
	ldrb r2, [r5]
	add r0, r0, #32
	add r3, r1, r0
	add r3, r4, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #8
	ldr r0, _080F58FC  @ =0x00001172
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r2, [r5]
	lsr r2, r2, #8
	strb r2, [r3]
	add r0, r4, #0
	mov r1, #0
	bl sub_080F5D7C
	add r0, r4, #0
	mov r1, #1
	bl sub_080F5D7C
	pop {r4,r5}
	pop {r0}
	bx r0
_080F58F4:
	.4byte gRam
_080F58F8:
	.4byte 0x00000EE2
_080F58FC:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080F58AC

