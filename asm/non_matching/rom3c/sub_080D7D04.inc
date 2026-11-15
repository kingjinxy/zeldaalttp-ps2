	THUMB_FUNC_START sub_080D7D04
sub_080D7D04: @ 0x080D7D04
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r5, _080D7D50  @ =gRam
	ldr r1, _080D7D54  @ =0x00000FC2
	add r0, r5, r1
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080D7D2A
	sub r1, r1, #112
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #31
	strb r0, [r3]
_080D7D2A:
	ldr r1, _080D7D58  @ =0x00001172
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r3, _080D7D5C  @ =0x00000F62
	add r1, r5, r3
	add r1, r4, r1
	ldr r2, _080D7D60  @ =gUnknown_08175708
	add r3, r3, #80
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D7D50:
	.4byte gRam
_080D7D54:
	.4byte 0x00000FC2
_080D7D58:
	.4byte 0x00001172
_080D7D5C:
	.4byte 0x00000F62
_080D7D60:
	.4byte gUnknown_08175708
	THUMB_FUNC_END sub_080D7D04

