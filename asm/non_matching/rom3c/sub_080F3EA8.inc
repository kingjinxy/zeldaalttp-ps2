	THUMB_FUNC_START sub_080F3EA8
sub_080F3EA8: @ 0x080F3EA8
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080F3F0C  @ =gRam
	ldr r1, _080F3F10  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _080F3EEE
	ldr r0, _080F3F14  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #31
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F3F18  @ =0x00000F22
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	sub r1, r1, #16
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r0, _080F3F1C  @ =0x00000A3C
	add r1, r6, r0
	mov r0, #6
	strh r0, [r1]
_080F3EEE:
	ldr r1, _080F3F20  @ =0x00000F92
	add r2, r6, r1
	add r2, r7, r2
	ldr r1, _080F3F24  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F3F0C:
	.4byte gRam
_080F3F10:
	.4byte 0x00000FC2
_080F3F14:
	.4byte 0x00000F52
_080F3F18:
	.4byte 0x00000F22
_080F3F1C:
	.4byte 0x00000A3C
_080F3F20:
	.4byte 0x00000F92
_080F3F24:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F3EA8

