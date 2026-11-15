	THUMB_FUNC_START sub_080DB5C4
sub_080DB5C4: @ 0x080DB5C4
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #201
	bl sub_080CA538
	add r4, r0, #0
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DB60C  @ =gRam
	ldr r1, _080DB610  @ =0x00001012
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #2
	strb r1, [r0]
	ldr r5, _080DB614  @ =0x00001172
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080DB618  @ =0x00001092
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	sub r5, r5, #80
	add r2, r2, r5
	add r4, r4, r2
	strb r3, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DB60C:
	.4byte gRam
_080DB610:
	.4byte 0x00001012
_080DB614:
	.4byte 0x00001172
_080DB618:
	.4byte 0x00001092
	THUMB_FUNC_END sub_080DB5C4

