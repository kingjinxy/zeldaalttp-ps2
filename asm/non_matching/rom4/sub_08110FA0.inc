	THUMB_FUNC_START sub_08110FA0
sub_08110FA0: @ 0x08110FA0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08110FCC  @ =gRam
	ldr r2, _08110FD0  @ =0x0000152C
	add r3, r1, r2
	mov r2, #255
	strb r2, [r3]
	ldr r3, _08110FD4  @ =0x00000FB2
	add r2, r1, r3
	add r2, r0, r2
	add r3, r3, #64
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, #82
	strb r1, [r2]
	bl sub_0811076C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08110FCC:
	.4byte gRam
_08110FD0:
	.4byte 0x0000152C
_08110FD4:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_08110FA0

