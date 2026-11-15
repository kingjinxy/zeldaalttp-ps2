	.syntax unified
	THUMB_FUNC_START sub_08002978
sub_08002978: @ 0X08002978
	ldr r2, [pc, #132]
	ldrb r2, [r2, #0]
	movs r3, #7
	ands r2, r3
	bne.n _0800298A
	push {r0, r1}
	bl 0x8059818
	pop {r0, r1}
_0800298A:
	pop {pc}
	.syntax unified
	.thumb
