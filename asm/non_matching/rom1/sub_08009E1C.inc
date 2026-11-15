	.syntax unified
	THUMB_FUNC_START sub_08009E1C
sub_08009E1C: @ 0X08009E1C
	push {r4, lr}
	adds r4, r2, #0
	bl 0x800932c
	ldr r1, [pc, #212]
	bl 0x80012d8
	beq.n _08009E3E
	ldr r2, [pc, #208]
	lsls r3, r3, #3
	ldrh r3, [r2, r3]
	movs r2, #1
	lsls r2, r4
	tst r2, r3
	beq.n _08009E3E
	movs r0, #1
	pop {r4, pc}
_08009E3E:
	movs r0, #0
	pop {r4, pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
