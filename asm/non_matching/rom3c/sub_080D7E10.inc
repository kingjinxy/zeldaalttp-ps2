	THUMB_FUNC_START sub_080D7E10
sub_080D7E10: @ 0x080D7E10
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	ldr r5, _080D7E88  @ =gRam
	ldr r0, _080D7E8C  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080D7E90  @ =gUnknown_0817571C
	add r0, r0, #144
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r3, [r1]
	add r0, r0, r3
	strb r0, [r1]
	ldr r0, _080D7E94  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080D7E98  @ =gUnknown_08175720
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	ldr r3, _080D7E9C  @ =0x00000FC2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D7E7C
	add r0, r4, #0
	bl sub_080C969C
	ldr r1, _080D7EA0  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _080D7EA4  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D7E7C:
	add r0, r6, #0
	bl sub_080D8318
	pop {r4-r6}
	pop {r0}
	bx r0
_080D7E88:
	.4byte gRam
_080D7E8C:
	.4byte 0x00000F22
_080D7E90:
	.4byte gUnknown_0817571C
_080D7E94:
	.4byte 0x00000F12
_080D7E98:
	.4byte gUnknown_08175720
_080D7E9C:
	.4byte 0x00000FC2
_080D7EA0:
	.4byte 0x00000FD2
_080D7EA4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D7E10

