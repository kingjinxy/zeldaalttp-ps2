	.syntax unified
	THUMB_FUNC_START sub_08009F1C
sub_08009F1C: @ 0X08009F1C
	mov r3, lr
	push {r3, r4}
	adds r4, r0, #0
	ldrb r2, [r0, #20]
	cmp r2, #0
	beq.n _08009F44
	ldr r1, [pc, #500]
	ldrh r1, [r1, #0]
	cmp r1, #0
	bne.n _08009F64
	bl sub_08003130
_08009F34:
	adds r0, r4, #0
	ldrb r1, [r0, #9]
	lsls r1, r1, #2
	ldr r2, [pc, #488]
	ldr r1, [r2, r1]
	ldr r2, [pc, #488]
	mov lr, r2
	bx r1
_08009F44:
	bl sub_08049708
	cmp r0, #0
	beq.n _08009F34
	adds r0, r4, #0
	bl DeleteThisEntity
	pop {r3, r4}
	bx r3
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
