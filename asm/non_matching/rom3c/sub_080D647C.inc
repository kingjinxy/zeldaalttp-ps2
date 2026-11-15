	THUMB_FUNC_START sub_080D647C
sub_080D647C: @ 0x080D647C
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #2
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080D64C2
	lsl r5, r6, #24
	lsr r5, r5, #24
	add r0, r5, #0
	bl sub_080CAE50
	ldr r4, _080D64C8  @ =gRam
	ldr r1, _080D64CC  @ =0x00001142
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #13
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #16
	bl sub_080C35FC
	ldr r1, _080D64D0  @ =0x00000FC2
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080D64D4  @ =0x00000FD2
	add r4, r4, r0
	add r4, r6, r4
	mov r0, #32
	strb r0, [r4]
_080D64C2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D64C8:
	.4byte gRam
_080D64CC:
	.4byte 0x00001142
_080D64D0:
	.4byte 0x00000FC2
_080D64D4:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080D647C

