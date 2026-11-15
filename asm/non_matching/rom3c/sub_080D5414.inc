	THUMB_FUNC_START sub_080D5414
sub_080D5414: @ 0x080D5414
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #98
	bl sub_080CA538
	add r4, r0, #0
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080D5454  @ =gRam
	ldr r1, _080D5458  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080D545C  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	ldr r0, _080D5460  @ =0x00001012
	add r2, r2, r0
	add r4, r4, r2
	strb r3, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D5454:
	.4byte gRam
_080D5458:
	.4byte 0x00001052
_080D545C:
	.4byte 0x00001122
_080D5460:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080D5414

