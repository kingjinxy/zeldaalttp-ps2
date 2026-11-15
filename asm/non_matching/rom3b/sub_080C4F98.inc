	THUMB_FUNC_START sub_080C4F98
sub_080C4F98: @ 0x080C4F98
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080C4FB0  @ =gRam
	ldr r2, _080C4FB4  @ =0x0000180D
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C4FB8
	mov r0, #0
	b _080C4FC2
	.byte 0x00
	.byte 0x00
_080C4FB0:
	.4byte gRam
_080C4FB4:
	.4byte 0x0000180D
_080C4FB8:
	add r0, r1, #0
	bl sub_080C4FC8
	lsl r0, r0, #24
	lsr r0, r0, #24
_080C4FC2:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C4F98

	.byte 0x00
	.byte 0x00
