	THUMB_FUNC_START sub_080B9854
sub_080B9854: @ 0x080B9854
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080B98A8  @ =gRam
	ldr r3, _080B98AC  @ =gUnknown_08170B32
	ldrb r1, [r3, #1]
	ldr r5, _080B98B0  @ =0x00000F17
	add r0, r2, r5
	strb r1, [r0]
	ldrb r1, [r3]
	ldr r3, _080B98B4  @ =0x00000F18
	add r0, r2, r3
	strb r1, [r0]
	ldr r5, _080B98B8  @ =0x00001088
	add r1, r2, r5
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080B98BC  @ =0x00000F62
	add r1, r2, r0
	mov r0, #8
	strb r0, [r1]
	mov r0, #3
	ldr r1, _080B98C0  @ =0x00000F12
	add r2, r2, r1
	mov r3, #4
_080B9886:
	lsl r1, r0, #24
	asr r1, r1, #24
	add r0, r1, #1
	add r0, r0, r2
	strb r3, [r0]
	sub r1, r1, #1
	lsl r1, r1, #24
	lsr r0, r1, #24
	cmp r1, #0
	bge _080B9886
	add r0, r4, #0
	bl sub_080B9454
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B98A8:
	.4byte gRam
_080B98AC:
	.4byte gUnknown_08170B32
_080B98B0:
	.4byte 0x00000F17
_080B98B4:
	.4byte 0x00000F18
_080B98B8:
	.4byte 0x00001088
_080B98BC:
	.4byte 0x00000F62
_080B98C0:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080B9854

