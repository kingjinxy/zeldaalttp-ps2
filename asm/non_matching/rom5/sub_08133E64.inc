	.syntax unified
	THUMB_FUNC_START sub_08133E64
sub_08133E64: @ 0X08133E64
	mov ip, lr
	movs r1, #36
	ldr r2, [pc, #40]
_08133E6A:
	ldr r3, [r2, #0]
	bl sub_08133E7E
	stmia r0!, {r3}
	adds r2, #4
	subs r1, #1
	bgt.n _08133E6A
	bx ip
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
