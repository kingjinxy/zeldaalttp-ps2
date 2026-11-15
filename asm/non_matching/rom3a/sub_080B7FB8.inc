	THUMB_FUNC_START sub_080B7FB8
sub_080B7FB8: @ 0x080B7FB8
	push {r4,lr}
	bl sub_08069F08
	ldr r3, _080B7FF0  @ =gRam
	ldr r1, _080B7FF4  @ =0x0000099D
	add r0, r3, r1
	mov r4, #0
	ldrsb r4, [r0, r4]
	cmp r4, #0
	bne _080B7FEA
	ldr r0, _080B7FF8  @ =0x00000A36
	add r1, r3, r0
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	ldr r1, _080B7FFC  @ =0x00000A38
	add r0, r3, r1
	strh r4, [r0]
	ldr r1, _080B8000  @ =0x00001B16
	add r0, r3, r1
	strb r2, [r0]
	ldr r1, _080B8004  @ =gUnknown_02006882
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B7FEA:
	pop {r4}
	pop {r0}
	bx r0
_080B7FF0:
	.4byte gRam
_080B7FF4:
	.4byte 0x0000099D
_080B7FF8:
	.4byte 0x00000A36
_080B7FFC:
	.4byte 0x00000A38
_080B8000:
	.4byte 0x00001B16
_080B8004:
	.4byte gUnknown_02006882
	THUMB_FUNC_END sub_080B7FB8

