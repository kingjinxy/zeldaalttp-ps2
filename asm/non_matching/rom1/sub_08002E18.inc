	.syntax unified
	THUMB_FUNC_START sub_08002E18
sub_08002E18: @ 0X08002E18
	adds r1, r0, #0
	adds r1, #60
	ldrb r3, [r1, #5]
	lsrs r3, r3, #7
	bne.n _08002E38
	ldrb r3, [r1, #6]
	cmp r3, #0
	bne.n _08002E3C
	ldrb r3, [r1, #9]
	cmp r3, #0
	beq.n _08002E40
	ldrb r3, [r1, #7]
	cmp r3, #0
	bne.n _08002E4C
_08002E34:
	movs r0, #0
	mov pc, lr
_08002E38:
	movs r0, #1
	mov pc, lr
_08002E3C:
	movs r0, #2
	mov pc, lr
_08002E40:
	ldrb r2, [r0, #20]
	ldrb r3, [r0, #21]
	orrs r2, r3
	beq.n _08002E34
	movs r0, #3
	mov pc, lr
_08002E4C:
	movs r0, #4
	mov pc, lr
	.syntax unified
	.thumb
