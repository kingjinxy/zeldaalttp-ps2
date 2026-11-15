	THUMB_FUNC_START sub_080F5B68
sub_080F5B68: @ 0x080F5B68
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #74
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080F5BC4
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C2914
	add r0, r4, #0
	bl sub_080CAE50
	ldr r2, _080F5BCC  @ =gRam
	ldr r1, _080F5BD0  @ =0x00000964
	add r0, r2, r1
	ldrh r0, [r0]
	add r0, r0, #40
	mov r3, #151
	lsl r3, r3, #4
	add r1, r2, r3
	strb r0, [r1]
	lsr r0, r0, #8
	sub r3, r3, #11
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _080F5BD4  @ =0x00000FD2
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	ldr r3, _080F5BD8  @ =0x00000F12
	add r0, r2, r3
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
	ldr r0, _080F5BDC  @ =0x00001152
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #18
	strb r0, [r2]
_080F5BC4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F5BCC:
	.4byte gRam
_080F5BD0:
	.4byte 0x00000964
_080F5BD4:
	.4byte 0x00000FD2
_080F5BD8:
	.4byte 0x00000F12
_080F5BDC:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F5B68

