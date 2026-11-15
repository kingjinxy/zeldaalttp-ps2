	THUMB_FUNC_START sub_08092F30
sub_08092F30: @ 0x08092F30
	push {lr}
	ldr r0, _08092F68  @ =gRam
	ldr r2, _08092F6C  @ =0x00001783
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r3, _08092F70  @ =0x00001739
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #82
	add r1, r0, r3
	strb r2, [r1]
	sub r3, r3, #9
	add r1, r0, r3
	strb r2, [r1]
	sub r3, r3, #136
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #27
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _08092F74  @ =0x00001716
	add r0, r0, r1
	strb r2, [r0]
	bl sub_08092F78
	pop {r0}
	bx r0
_08092F68:
	.4byte gRam
_08092F6C:
	.4byte 0x00001783
_08092F70:
	.4byte 0x00001739
_08092F74:
	.4byte 0x00001716
	THUMB_FUNC_END sub_08092F30

