	THUMB_FUNC_START sub_080D58D4
sub_080D58D4: @ 0x080D58D4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D5914  @ =gRam
	ldr r1, _080D5918  @ =0x00000F92
	add r2, r3, r1
	add r2, r0, r2
	ldr r4, _080D591C  @ =gUnknown_081750B0
	sub r1, r1, #48
	add r5, r3, r1
	add r5, r0, r5
	ldrb r1, [r5]
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _080D5920  @ =0x00001122
	add r3, r3, r1
	add r3, r0, r3
	ldrb r1, [r3]
	mov r2, #191
	and r2, r2, r1
	ldr r4, _080D5924  @ =gUnknown_081750B4
	ldrb r1, [r5]
	add r1, r1, r4
	ldrb r1, [r1]
	orr r2, r2, r1
	strb r2, [r3]
	bl sub_080C6240
	pop {r4,r5}
	pop {r0}
	bx r0
_080D5914:
	.4byte gRam
_080D5918:
	.4byte 0x00000F92
_080D591C:
	.4byte gUnknown_081750B0
_080D5920:
	.4byte 0x00001122
_080D5924:
	.4byte gUnknown_081750B4
	THUMB_FUNC_END sub_080D58D4

