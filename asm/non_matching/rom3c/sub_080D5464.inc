	THUMB_FUNC_START sub_080D5464
sub_080D5464: @ 0x080D5464
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
	ldr r2, _080D54A4  @ =gRam
	ldr r1, _080D54A8  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080D54AC  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	ldr r0, _080D54B0  @ =0x00001012
	add r2, r2, r0
	add r4, r4, r2
	strb r3, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D54A4:
	.4byte gRam
_080D54A8:
	.4byte 0x00001052
_080D54AC:
	.4byte 0x00001122
_080D54B0:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080D5464

