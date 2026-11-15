	.syntax unified
	THUMB_FUNC_START sub_08009E44
sub_08009E44: @ 0X08009E44
	push {lr}
	movs r1, #67
	ldrb r2, [r0, r1]
	subs r2, #1
	strb r2, [r0, r1]
	cmp r2, #60
	bcs.n _08009E60
	movs r3, #3
	ands r2, r3
	ldr r1, [pc, #172]
	ldrsb r1, [r1, r2]
	ldrh r2, [r0, #50]
	adds r2, r2, r1
	strh r2, [r0, #50]
_08009E60:
	ldr r1, [pc, #164]
	bl 0x8003594
	pop {pc}
	.byte 0xff
	.byte 0x01
	.byte 0x01
	.byte 0xff
	.syntax unified
	.thumb
