	THUMB_FUNC_START sub_080D4F3C
sub_080D4F3C: @ 0x080D4F3C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _080D4F98  @ =gRam
	ldr r1, _080D4F9C  @ =0x00000FC2
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080D4F74
	ldr r0, _080D4FA0  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #1
	strb r0, [r1]
	ldr r0, _080D4FA4  @ =0x00000F12
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #1
	strb r0, [r1]
	mov r0, #6
	strb r0, [r3]
_080D4F74:
	ldr r3, _080D4FA8  @ =0x00001062
	add r1, r2, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080D4F90
	sub r3, r3, #192
	add r0, r2, r3
	add r0, r5, r0
	strb r1, [r0]
_080D4F90:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4F98:
	.4byte gRam
_080D4F9C:
	.4byte 0x00000FC2
_080D4FA0:
	.4byte 0x00000F22
_080D4FA4:
	.4byte 0x00000F12
_080D4FA8:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080D4F3C

