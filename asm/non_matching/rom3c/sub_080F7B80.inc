	THUMB_FUNC_START sub_080F7B80
sub_080F7B80: @ 0x080F7B80
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #74
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080F7BC4
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	bl sub_080C2914
	ldr r1, _080F7BCC  @ =gRam
	ldr r2, _080F7BD0  @ =0x00000FD2
	add r0, r1, r2
	add r0, r5, r0
	mov r2, #80
	strb r2, [r0]
	ldr r2, _080F7BD4  @ =0x00000F22
	add r0, r1, r2
	add r0, r5, r0
	mov r2, #24
	strb r2, [r0]
	ldr r0, _080F7BD8  @ =0x00001152
	add r1, r1, r0
	add r1, r5, r1
	mov r0, #48
	strb r0, [r1]
_080F7BC4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7BCC:
	.4byte gRam
_080F7BD0:
	.4byte 0x00000FD2
_080F7BD4:
	.4byte 0x00000F22
_080F7BD8:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F7B80

