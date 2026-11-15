	THUMB_FUNC_START sub_080D40E8
sub_080D40E8: @ 0x080D40E8
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #246
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D4120
	ldr r2, _080D4128  @ =gRam
	ldr r0, _080D412C  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D4130  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080D4134  @ =0x00001770
	add r2, r2, r0
	mov r0, #1
	strb r0, [r2]
_080D4120:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080D4128:
	.4byte gRam
_080D412C:
	.4byte 0x00000F52
_080D4130:
	.4byte 0x00000FC2
_080D4134:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D40E8

