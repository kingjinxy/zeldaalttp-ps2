	THUMB_FUNC_START sub_080D4ED4
sub_080D4ED4: @ 0x080D4ED4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r5, _080D4F24  @ =gRam
	ldr r1, _080D4F28  @ =0x00001122
	add r0, r5, r1
	add r4, r3, r0
	ldrb r0, [r4]
	mov r2, #241
	and r2, r2, r0
	strb r2, [r4]
	lsl r0, r3, #1
	ldr r6, _080D4F2C  @ =0x00000996
	add r1, r5, r6
	ldrb r1, [r1]
	eor r0, r0, r1
	mov r1, #14
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4]
	ldr r1, _080D4F30  @ =0x00000FC2
	add r0, r5, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D4F1E
	ldr r6, _080D4F34  @ =0x00000F52
	add r1, r5, r6
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D4F38  @ =0x00000F62
	add r0, r5, r1
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r4]
_080D4F1E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D4F24:
	.4byte gRam
_080D4F28:
	.4byte 0x00001122
_080D4F2C:
	.4byte 0x00000996
_080D4F30:
	.4byte 0x00000FC2
_080D4F34:
	.4byte 0x00000F52
_080D4F38:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080D4ED4

