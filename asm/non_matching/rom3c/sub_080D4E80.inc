	THUMB_FUNC_START sub_080D4E80
sub_080D4E80: @ 0x080D4E80
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _080D4EC0  @ =gRam
	ldr r1, _080D4EC4  @ =0x00000FC2
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080D4EBA
	ldr r0, _080D4EC8  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #208
	strb r0, [r3]
	ldr r3, _080D4ECC  @ =0x00000F62
	add r1, r2, r3
	add r1, r4, r1
	ldr r3, _080D4ED0  @ =0x00001122
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
_080D4EBA:
	pop {r4}
	pop {r0}
	bx r0
_080D4EC0:
	.4byte gRam
_080D4EC4:
	.4byte 0x00000FC2
_080D4EC8:
	.4byte 0x00000F52
_080D4ECC:
	.4byte 0x00000F62
_080D4ED0:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080D4E80

