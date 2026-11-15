	THUMB_FUNC_START sub_080F9314
sub_080F9314: @ 0x080F9314
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F9348  @ =gRam
	ldr r1, _080F934C  @ =0x00001AE2
	add r0, r6, r1
	ldrb r5, [r0]
	cmp r5, #0
	bne _080F9330
	bl sub_080AA868
	cmp r0, #79
	bgt _080F9354
_080F9330:
	mov r1, #202
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F9350  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080F93A6
_080F9348:
	.4byte gRam
_080F934C:
	.4byte 0x00001AE2
_080F9350:
	.4byte 0x00000F52
_080F9354:
	mov r0, #80
	neg r0, r0
	bl sub_080AA83C
	ldr r1, _080F93B0  @ =0x00000193
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080F93B4  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F93B8  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080F93BC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #80
	strb r1, [r0]
	ldr r0, _080F93C0  @ =gUnknown_0200EE18
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	ldr r1, _080F93C4  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	mov r0, #1
	bl sub_080AF5F8
	ldr r0, _080F93C8  @ =0x00000A3C
	add r1, r6, r0
	mov r0, #21
	strh r0, [r1]
_080F93A6:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F93B0:
	.4byte 0x00000193
_080F93B4:
	.4byte 0x00000F52
_080F93B8:
	.4byte 0x00000F92
_080F93BC:
	.4byte 0x00000FC2
_080F93C0:
	.4byte gUnknown_0200EE18
_080F93C4:
	.4byte 0x00000FD2
_080F93C8:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_080F9314

