	.syntax unified
	THUMB_FUNC_START sub_08002A98
sub_08002A98: @ 0X08002A98
	bl sub_080025F4
	movs r2, #24
	eors r3, r3
_08002AA0:
	movs r4, #43
	strb r2, [r0, r4]
	lsrs r2, r2, #2
	movs r4, #42
	strb r2, [r0, r4]
	lsrs r2, r2, #1
	push {r0, r1}
	movs r0, #69
	adds r1, r2, #0
	adds r1, r1, r3
	eors r2, r2
	bl 0x804c8a8
	orrs r0, r0
	beq.n _08002AF6
	adds r2, r0, #0
	pop {r0, r1}
	ldrh r3, [r0, #54]
	adds r3, #3
	strh r3, [r0, #54]
	push {r2}
	bl 0x80037cc
	pop {r2}
	ldrh r3, [r0, #50]
	strh r3, [r2, #50]
	ldrh r3, [r0, #54]
	strh r3, [r2, #54]
	movs r4, #80
	ldrh r3, [r0, r4]
	strh r3, [r2, r4]
	movs r2, #15
	strb r2, [r1, #12]
	movs r2, #55
	movs r3, #56
	strb r2, [r1, r3]
	eors r2, r2
	movs r3, #57
	strb r2, [r1, r3]
	ldr r2, [pc, #88]
	str r2, [r0, #16]
	movs r2, #16
	strh r2, [r1, #8]
_08002AF6:
	pop {pc}
	.syntax unified
	.thumb
