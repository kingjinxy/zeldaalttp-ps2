	THUMB_FUNC_START sub_080F3A80
sub_080F3A80: @ 0x080F3A80
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080F3AB0  @ =gUnknown_0200EE19
	ldrb r0, [r0]
	cmp r0, #2
	bne _080F3AA8
	add r0, r4, #0
	mov r1, #27
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F3AB4  @ =gRam
	ldr r0, _080F3AB8  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F3AA8:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080F3AB0:
	.4byte gUnknown_0200EE19
_080F3AB4:
	.4byte gRam
_080F3AB8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F3A80

