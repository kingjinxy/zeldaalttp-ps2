	THUMB_FUNC_START sub_080DF130
sub_080DF130: @ 0x080DF130
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080DF1B0  @ =gRam
	ldr r0, _080DF1B4  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r2, #0
	mov r8, r2
	strb r0, [r1]
	ldr r1, _080DF1B8  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	ldrb r6, [r0]
	ldr r0, _080DF1BC  @ =0x00000F22
	add r2, r5, r0
	add r1, r6, r2
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #1
	strb r0, [r1]
	ldr r0, _080DF1C0  @ =0x00000F12
	add r1, r5, r0
	add r3, r6, r1
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #1
	strb r0, [r3]
	mov r0, r8
	strb r0, [r2]
	strb r0, [r1]
	bl GetRandomInt
	ldr r1, _080DF1C4  @ =0x00001152
	add r2, r5, r1
	add r2, r6, r2
	mov r1, #31
	and r1, r1, r0
	strb r1, [r2]
	ldr r2, _080DF1C8  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	ldr r1, _080DF1CC  @ =0x00000F92
	add r0, r5, r1
	add r4, r4, r0
	mov r0, #1
	strb r0, [r4]
	add r2, r2, #160
	add r5, r5, r2
	add r6, r6, r5
	strb r0, [r6]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF1B0:
	.4byte gRam
_080DF1B4:
	.4byte 0x00000F52
_080DF1B8:
	.4byte 0x00001082
_080DF1BC:
	.4byte 0x00000F22
_080DF1C0:
	.4byte 0x00000F12
_080DF1C4:
	.4byte 0x00001152
_080DF1C8:
	.4byte 0x00000FC2
_080DF1CC:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080DF130

