	.syntax unified
	THUMB_FUNC_START sub_08005730
sub_08005730: @ 0X08005730
	push {lr}
	bl sub_0800127C
	bl sub_08001F38+0x24
	ldrb r2, [r0, #21]
	lsls r2, r2, #2
	ldr r3, [pc, #260]
	ldr r2, [r3, r2]
	bx r2
	.4byte _08005750+1
	.4byte _0800575C+1
	.4byte _08005794+1
_08005750:
	movs r1, #128
	str r1, [r0, #12]
	bl sub_08001274
	bl sub_08001D5C
_0800575C:
	bl sub_08001D5C
	movs r2, #52
	eors r3, r3
	strb r3, [r1, r2]
	bl sub_08002294
	ldrb r1, [r0, #27]
	bl sub_080037EC
	bl sub_08001D5C
	ldrh r2, [r1, #54]
	movs r3, #1
	orrs r2, r3
	strh r2, [r1, #54]
	movs r3, #127
	ldrb r2, [r1, #6]
	ands r2, r3
	subs r2, #1
	movs r3, #128
	orrs r3, r2
	strb r3, [r1, #6]
	orrs r2, r2
	bne.n _08005792
	bl sub_08001274
_08005792:
	pop {pc}
_08005794:
	movs r2, #2
	strb r2, [r1, #6]
	ldrh r2, [r1, #54]
	ldr r3, [pc, #164]
	ands r2, r3
	strh r2, [r1, #54]
	bl sub_080012B4
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
