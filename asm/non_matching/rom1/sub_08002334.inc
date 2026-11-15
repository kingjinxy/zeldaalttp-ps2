	thumb_func_start sub_08002334
sub_08002334: @ 0x08002334
	push {r0, r1, lr}
	bl sub_08002350
	bne _0800234A
	adds r0, r3, #0
	ldr r1, _08002408 @ =0x080021B4
	bl sub_080012D8
	bne _0800234A
	eors r2, r2
	pop {r0, r1, pc}
_0800234A:
	movs r2, #1
	pop {r0, r1, pc}
	.align 2, 0

