	THUMB_FUNC_START sub_080D9934
sub_080D9934: @ 0x080D9934
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D9970  @ =gUnknown_03003E74
	ldrh r1, [r2]
	add r1, r1, #1
	strh r1, [r2]
	ldr r3, _080D9974  @ =gRam
	ldr r1, _080D9978  @ =0x00000F92
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _080D997C  @ =0x00001122
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #13
	strb r2, [r1]
	ldr r1, _080D9980  @ =0x00001052
	add r3, r3, r1
	add r3, r0, r3
	ldrb r1, [r3]
	sub r1, r1, #48
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_080D93DC
	pop {r0}
	bx r0
_080D9970:
	.4byte gUnknown_03003E74
_080D9974:
	.4byte gRam
_080D9978:
	.4byte 0x00000F92
_080D997C:
	.4byte 0x00001122
_080D9980:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D9934

