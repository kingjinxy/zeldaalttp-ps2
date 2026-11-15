	THUMB_FUNC_START sub_080AE5EC
sub_080AE5EC: @ 0x080AE5EC
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080AE618  @ =gRam
	ldr r4, _080AE61C  @ =0x000016C4
	add r3, r2, r4
	ldrh r3, [r3]
	sub r4, r4, #4
	add r2, r2, r4
	ldrh r2, [r2]
	str r2, [sp]
	mov r2, #0
	bl sub_080AC448
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AE618:
	.4byte gRam
_080AE61C:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080AE5EC

