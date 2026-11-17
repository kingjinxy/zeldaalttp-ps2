	.syntax unified
	THUMB_FUNC_START sub_08002A24
sub_08002A24: @ 0X08002A24
	bl _08002424
	bl sub_080025F4
	ldrb r2, [r1, #15]
	movs r3, #192
	ands r2, r3
	bne.n _08002A5A
	ldrb r2, [r1, #20]
	orrs r2, r2
	bne.n _08002A5A
	movs r2, #18
	strb r2, [r1, #12]
	push {r0, r1}
	movs r0, #15
	movs r1, #11
	eors r2, r2
	bl sub_0804C8A8
	adds r2, r0, #0
	pop {r0, r1}
	orrs r2, r2
	beq.n _08002A5A
	ldrh r3, [r0, #50]
	strh r3, [r2, #50]
	ldrh r3, [r0, #54]
	strh r3, [r2, #54]
_08002A5A:
	pop {pc}
	.syntax unified
	.thumb
