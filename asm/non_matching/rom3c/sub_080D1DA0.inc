	THUMB_FUNC_START sub_080D1DA0
sub_080D1DA0: @ 0x080D1DA0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _080D1DFC  @ =gRam
	ldr r1, _080D1E00  @ =0x00000FC2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D1DF4
	ldr r1, _080D1E04  @ =0x00001152
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r2, r1, #2
	strb r2, [r0]
	sub r1, r1, #14
	lsl r1, r1, #24
	cmp r1, #0
	blt _080D1DD6
	ldr r0, _080D1E08  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D1DD6:
	ldr r0, _080D1E0C  @ =0x00001052
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D1E10  @ =0x00000F92
	add r2, r4, r1
	add r2, r5, r2
	lsl r0, r0, #24
	lsr r0, r0, #25
	mov r1, #1
	and r0, r0, r1
	add r0, r0, #1
	strb r0, [r2]
_080D1DF4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D1DFC:
	.4byte gRam
_080D1E00:
	.4byte 0x00000FC2
_080D1E04:
	.4byte 0x00001152
_080D1E08:
	.4byte 0x00000F52
_080D1E0C:
	.4byte 0x00001052
_080D1E10:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D1DA0

