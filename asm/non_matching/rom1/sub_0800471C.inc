	.syntax unified
	THUMB_FUNC_START sub_0800471C
sub_0800471C: @ 0X0800471C
	push {lr}
	ldr r3, [pc, #1004]
	movs r4, #80
	ldrb r2, [r3, r4]
	cmp r2, #10
	bcc.n _0800472A
	movs r2, #9
_0800472A:
	ldr r3, [pc, #996]
	lsls r2, r2, #2
	adds r2, r2, r3
	ldr r2, [r2, #0]
	pop {pc}
	.syntax unified
	.thumb
