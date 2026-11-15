	THUMB_FUNC_START sub_080D6FE0
sub_080D6FE0: @ 0x080D6FE0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080D7014  @ =gRam
	ldr r0, _080D7018  @ =0x00001172
	add r1, r4, r0
	add r1, r3, r1
	ldr r2, _080D701C  @ =0x00000FC2
	add r0, r4, r2
	add r2, r3, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r0, [r2]
	cmp r0, #0
	bne _080D700E
	ldr r1, _080D7020  @ =0x00000F52
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #31
	strb r0, [r2]
_080D700E:
	pop {r4}
	pop {r0}
	bx r0
_080D7014:
	.4byte gRam
_080D7018:
	.4byte 0x00001172
_080D701C:
	.4byte 0x00000FC2
_080D7020:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6FE0

