	THUMB_FUNC_START sub_080D4A0C
sub_080D4A0C: @ 0x080D4A0C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #98
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080D4A92
	ldr r2, _080D4A98  @ =gRam
	ldr r0, _080D4A9C  @ =0x00000EE2
	add r1, r2, r0
	add r1, r4, r1
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	mov r3, #0
	strb r0, [r1]
	ldr r6, _080D4AA0  @ =0x00000F02
	add r0, r2, r6
	add r0, r4, r0
	ldr r6, _080D4AA4  @ =0x00000961
	add r1, r2, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D4AA8  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	add r6, r6, #3
	add r1, r2, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D4AAC  @ =0x00000EF2
	add r0, r2, r1
	add r0, r4, r0
	add r6, r6, #1
	add r1, r2, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D4AB0  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r6, _080D4AB4  @ =0x00000F72
	add r0, r2, r6
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080D4AB8  @ =0x00000F92
	add r0, r2, r1
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080D4ABC  @ =0x00001122
	add r0, r2, r6
	add r1, r4, r0
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D4AC0  @ =0x00001012
	add r2, r2, r0
	add r2, r4, r2
	strb r3, [r2]
_080D4A92:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D4A98:
	.4byte gRam
_080D4A9C:
	.4byte 0x00000EE2
_080D4AA0:
	.4byte 0x00000F02
_080D4AA4:
	.4byte 0x00000961
_080D4AA8:
	.4byte 0x00000ED2
_080D4AAC:
	.4byte 0x00000EF2
_080D4AB0:
	.4byte 0x00001052
_080D4AB4:
	.4byte 0x00000F72
_080D4AB8:
	.4byte 0x00000F92
_080D4ABC:
	.4byte 0x00001122
_080D4AC0:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080D4A0C

