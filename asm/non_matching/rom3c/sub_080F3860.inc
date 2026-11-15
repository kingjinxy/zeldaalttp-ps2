	THUMB_FUNC_START sub_080F3860
sub_080F3860: @ 0x080F3860
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #16
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080F389C  @ =gRam
	ldr r0, _080F38A0  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F38A4  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #3
	strh r0, [r1]
	ldr r0, _080F38A8  @ =0x00000F92
	add r2, r2, r0
	add r4, r4, r2
	mov r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080F389C:
	.4byte gRam
_080F38A0:
	.4byte 0x00000F52
_080F38A4:
	.4byte 0x00000A3C
_080F38A8:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F3860

