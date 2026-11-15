	THUMB_FUNC_START sub_080E04E0
sub_080E04E0: @ 0x080E04E0
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080E050C  @ =0x00000157
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080E0510  @ =gRam
	ldr r1, _080E0514  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E050C:
	.4byte 0x00000157
_080E0510:
	.4byte gRam
_080E0514:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E04E0

