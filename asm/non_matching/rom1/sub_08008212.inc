	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08008212
sub_08008212: @ 0X08008212
	bl sub_0800772C
	ldrb r1, [r0, #14]
	movs r2, #128
	tst r2, r1
	bne.n _08008220
	pop {pc}
_08008220:
	mov r1, sl
	ldr r1, [r1, #40]
	movs r2, #60
	ldrb r2, [r1, r2]
	movs r3, #128
	orrs r3, r2
	movs r2, #60
	strb r3, [r1, r2]
	mov r1, sl
	movs r2, #4
	strb r2, [r1, #5]
	ldrb r1, [r0, #4]
	adds r1, #1
	strb r1, [r0, #4]
	eors r1, r1
	strb r1, [r0, #15]
	.syntax unified
	.thumb
