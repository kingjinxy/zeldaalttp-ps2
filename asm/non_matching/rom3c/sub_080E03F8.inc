	THUMB_FUNC_START sub_080E03F8
sub_080E03F8: @ 0x080E03F8
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E042C  @ =gRam
	ldr r1, _080E0430  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E0422
	add r0, r4, #0
	mov r1, #151
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080E0434  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #13
	strb r1, [r0]
_080E0422:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E042C:
	.4byte gRam
_080E0430:
	.4byte 0x00000FC2
_080E0434:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E03F8

