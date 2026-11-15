	THUMB_FUNC_START sub_080F33E0
sub_080F33E0: @ 0x080F33E0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F3444  @ =gRam
	ldr r1, _080F3448  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080F344C  @ =0x00000FB2
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080F3450  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F343A
	add r0, r4, #0
	mov r1, #26
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080F3454  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F3458  @ =gUnknown_0200EE19
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F4130
	ldr r1, _080F345C  @ =0x00001770
	add r0, r5, r1
	mov r1, #1
	strb r1, [r0]
	mov r2, #179
	lsl r2, r2, #5
	add r0, r5, r2
	strb r1, [r0]
_080F343A:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F3444:
	.4byte gRam
_080F3448:
	.4byte 0x00001082
_080F344C:
	.4byte 0x00000FB2
_080F3450:
	.4byte 0x00000FC2
_080F3454:
	.4byte 0x00000F52
_080F3458:
	.4byte gUnknown_0200EE19
_080F345C:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080F33E0

