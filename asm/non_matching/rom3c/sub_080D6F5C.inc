	THUMB_FUNC_START sub_080D6F5C
sub_080D6F5C: @ 0x080D6F5C
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _080D6F90  @ =gRam
	ldr r1, _080D6F94  @ =0x00000FF2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #99
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080CEB84
	ldr r0, _080D6F98  @ =0x000010A2
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080D68C8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6F90:
	.4byte gRam
_080D6F94:
	.4byte 0x00000FF2
_080D6F98:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080D6F5C

