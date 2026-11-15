	THUMB_FUNC_START sub_080F4384
sub_080F4384: @ 0x080F4384
	push {r4,r5,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #32
	mov r2, sp
	bl sub_080C9564
	ldr r5, _080F43D0  @ =gRam
	ldr r1, _080F43D4  @ =0x00000F52
	add r0, r5, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r1, _080F43D8  @ =gUnknown_0200EE19
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080F43DC  @ =0x00001661
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	bl sub_08075AB4
	ldr r1, _080F43E0  @ =0x0000165E
	add r5, r5, r1
	mov r0, #2
	strb r0, [r5]
	bl sub_080BEA00
	bl sub_08074A44
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080F43D0:
	.4byte gRam
_080F43D4:
	.4byte 0x00000F52
_080F43D8:
	.4byte gUnknown_0200EE19
_080F43DC:
	.4byte 0x00001661
_080F43E0:
	.4byte 0x0000165E
	THUMB_FUNC_END sub_080F4384

