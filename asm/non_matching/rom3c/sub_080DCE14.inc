	THUMB_FUNC_START sub_080DCE14
sub_080DCE14: @ 0x080DCE14
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r5, _080DCE6C  @ =gRam
	ldr r2, _080DCE70  @ =0x00001082
	add r1, r5, r2
	add r6, r4, r1
	mov r1, #3
	eor r0, r0, r1
	strb r0, [r6]
	add r0, r4, #0
	mov r1, #159
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DCE64
	ldr r1, _080DCE74  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r2, _080DCE78  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DCE64:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DCE6C:
	.4byte gRam
_080DCE70:
	.4byte 0x00001082
_080DCE74:
	.4byte 0x00000FB2
_080DCE78:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DCE14

