	.syntax unified
	THUMB_FUNC_START sub_0800585C
sub_0800585C: @ 0X0800585C
	push {lr}
	ldrb r2, [r0, #21]
	lsls r2, r2, #2
	ldr r3, [pc, #180]
	ldr r2, [r3, r2]
	bx r2
	.4byte _08005874+1
	.4byte _080058BC+1
	.4byte _080058E4+1
_08005874:
	bl 0x8001274
	bl 0x8001f5c
	movs r3, #60
	ldrb r2, [r0, r3]
	movs r4, #127
	ands r2, r4
	strb r2, [r0, r3]
	bl 0x8001f5c
	movs r2, #1
	ldrh r3, [r1, #54]
	orrs r2, r3
	strh r2, [r1, #54]
	bl 0x80076c4
	movs r2, #165
	movs r3, #56
	ldrb r3, [r1, r3]
	orrs r3, r3
	beq.n _080058A2
	movs r2, #169
_080058A2:
	ldrh r3, [r1, #8]
	strh r2, [r1, #8]
	movs r2, #58
	strh r3, [r1, r2]
	movs r3, #56
	ldrb r3, [r1, r3]
	orrs r3, r3
	beq.n _080058B4
	b.n _080058CC
_080058B4:
	movs r1, #30
	strb r1, [r0, #23]
	pop {pc}
	.byte 0x00
	.byte 0x00
_080058BC:
	ldrb r1, [r0, #27]
	bl 0x80037ec
	movs r1, #41
	ldrb r1, [r0, r1]
	orrs r1, r1
	bne.n _080058CC
	pop {pc}
_080058CC:
	bl 0x8001d5c
	movs r1, #60
	strb r1, [r0, #23]
	bl 0x8001274
	push {r0}
	movs r0, #15
	bl 0x800d24c
	pop {r0}
	pop {pc}
_080058E4:
	ldrb r1, [r0, #23]
	orrs r1, r1
	beq.n _080058F6
	subs r1, #1
	strb r1, [r0, #23]
	ldrb r1, [r0, #27]
	bl 0x80037ec
	pop {pc}
_080058F6:
	bl 0x8001d5c
	movs r2, #58
	ldrh r3, [r1, r2]
	strh r3, [r1, #8]
	ldr r2, [pc, #24]
	ldrh r3, [r1, #54]
	ands r2, r3
	strh r2, [r1, #54]
	movs r1, #1
	strb r1, [r0, #20]
	movs r3, #60
	ldrb r2, [r0, r3]
	movs r4, #128
	orrs r2, r4
	strb r2, [r0, r3]
	pop {pc}
	.4byte 0x08005868
	.4byte 0x0000fffe
	.syntax unified
	.thumb
