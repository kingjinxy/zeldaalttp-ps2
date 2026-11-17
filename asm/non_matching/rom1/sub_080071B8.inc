	.syntax unified
	THUMB_FUNC_START sub_080071B8
sub_080071B8: @ 0X080071B8
	movs r4, #15
	ands r4, r2
	cmp r4, #1
	beq.n _080071C8
	mov r1, sl
	ldrb r1, [r1, #30]
	orrs r1, r1
	bne.n _080072B4
_080071C8:
	lsls r4, r4, #2
	ldr r1, [pc, #588]
	ldr r1, [r1, r4]
	bx r1
	.4byte _080072B4+1
	.4byte _08007230+1
	.4byte _08007204+1
	.4byte _08007254+1
	.4byte _080071E8+1
	.4byte _0800729C+1
_080071E8:
	movs r1, #3
	mov r9, r1
	mov r1, sl
	ldrb r4, [r1, #5]
	orrs r4, r4
	bne.n _080072B4
	ldr r1, [r1, #40]
	ldrb r4, [r1, #10]
	ldr r1, [pc, #544]
	lsls r4, r4, #2
	ldr r1, [r1, r4]
	ldrb r4, [r1, #9]
	orrs r4, r4
	bne.n _080072B6
_08007204:
	movs r1, #2
	mov r9, r1
	mov r1, sl
	ldrb r4, [r1, #5]
	orrs r4, r4
	bne.n _080072B4
	ldr r1, [r1, #40]
	ldrb r4, [r1, #10]
	ldr r1, [pc, #520]
	lsls r4, r4, #2
	ldr r1, [r1, r4]
	adds r1, #28
	ldrb r4, [r1, #1]
	cmp r0, r4
	beq.n _080072B4
	movs r4, #1
	mov r9, r4
	adds r1, #28
	ldrb r4, [r1, #1]
	cmp r0, r4
	beq.n _080072B4
	movs r0, r0
_08007230:
	movs r4, #2
	mov r9, r4
	mov r1, sl
	ldr r1, [r1, #40]
	ldrb r4, [r1, #10]
	ldr r1, [pc, #488]
	lsls r4, r4, #2
	ldr r1, [r1, r4]
	adds r1, #28
	ldrb r4, [r1, #9]
	orrs r4, r4
	beq.n _080072B6
	movs r4, #1
	mov r9, r4
	adds r1, #28
	ldrb r4, [r1, #9]
	orrs r4, r4
	b.n _080072B6
_08007254:
	mov r1, sl
	ldrb r4, [r1, #5]
	orrs r4, r4
	bne.n _080072B4
	ldrh r4, [r1, #54]
	movs r5, #128
	ands r4, r5
	bne.n _080072B4
	ldrb r4, [r1, #2]
	movs r5, #32
	ands r4, r5
	bne.n _080072B4
	movs r4, #240
	ands r2, r4
	adds r2, #1
	movs r4, #3
	mov r9, r4
	ldr r1, [r1, #40]
	ldrb r4, [r1, #10]
	ldr r1, [pc, #428]
	lsls r4, r4, #2
	ldr r1, [r1, r4]
	ldrb r4, [r1, #9]
	cmp r2, r4
	bcc.n _080072B4
	push {lr}
	push {r0, r2, r3}
	adds r0, r1, #0
	bl sub_0800750C
	adds r1, r0, #0
	eors r4, r4
	mov r0, sl
	strb r4, [r1, #27]
	pop {r0, r2, r3}
	pop {pc}
_0800729C:
	movs r4, #0
	mov r9, r4
	mov r1, sl
	ldr r1, [r1, #40]
	ldrb r4, [r1, #10]
	ldr r1, [pc, #388]
	lsls r4, r4, #2
	ldr r1, [r1, r4]
	adds r1, #84
	ldrb r4, [r1, #9]
	orrs r4, r4
	beq.n _080072B6
_080072B4:
	orrs r1, r1
_080072B6:
	mov pc, lr
	.syntax unified
	.thumb
