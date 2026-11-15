	THUMB_FUNC_START sub_080F1F20
sub_080F1F20: @ 0x080F1F20
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #210
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080F1F66
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080F1F6C  @ =gRam
	ldr r1, _080F1F70  @ =0x00000F52
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r3, _080F1F74  @ =0x00000FC2
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _080F1F78  @ =0x00000FF2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #210
	bne _080F1F66
	sub r3, r3, #96
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
_080F1F66:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F1F6C:
	.4byte gRam
_080F1F70:
	.4byte 0x00000F52
_080F1F74:
	.4byte 0x00000FC2
_080F1F78:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080F1F20

