	THUMB_FUNC_START sub_080C1A8C
sub_080C1A8C: @ 0x080C1A8C
	push {r4,lr}
	sub sp, sp, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080C1ACC  @ =gRam
	ldr r2, _080C1AD0  @ =0x000016C4
	add r1, r3, r2
	ldr r4, _080C1AD4  @ =0x00000952
	add r2, r3, r4
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	mov r4, #182
	lsl r4, r4, #5
	add r2, r3, r4
	ldr r4, _080C1AD8  @ =0x00000958
	add r3, r3, r4
	ldrh r2, [r2]
	ldrh r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r1, r1, #16
	orr r1, r1, r2
	str r1, [sp]
	mov r1, sp
	bl sub_0812A324
	add sp, sp, #8
	pop {r4}
	pop {r0}
	bx r0
_080C1ACC:
	.4byte gRam
_080C1AD0:
	.4byte 0x000016C4
_080C1AD4:
	.4byte 0x00000952
_080C1AD8:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080C1A8C

