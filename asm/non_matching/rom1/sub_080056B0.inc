	.syntax unified
	THUMB_FUNC_START sub_080056B0
sub_080056B0: @ 0X080056B0
	push {lr}
	bl sub_0800127C
	bl sub_08001F38+0x24
	ldrb r2, [r0, #21]
	lsls r2, r2, #2
	ldr r3, [pc, #376]
	ldr r2, [r3, r2]
	bx r2
	.4byte _080056CC+1
	.4byte _08005700+1
_080056CC:
	movs r1, #128
	str r1, [r0, #12]
	bl sub_08001274
	bl sub_080076C4
	bl sub_08001D5C
	ldr r2, [pc, #348]
	strh r2, [r1, #8]
	ldrh r2, [r1, #54]
	movs r3, #1
	orrs r2, r3
	strh r2, [r1, #54]
	movs r2, #56
	ldrb r2, [r1, r2]
	strb r2, [r0, #23]
	movs r3, #42
	ldrb r2, [r0, r3]
	lsrs r2, r2, #1
	lsls r2, r2, #3
	movs r3, #16
	eors r2, r3
	movs r3, #43
	strb r2, [r0, r3]
	movs r0, r0
_08005700:
	bl sub_08001D5C
	movs r2, #52
	eors r3, r3
	strb r3, [r1, r2]
	bl sub_08002294
	ldrb r1, [r0, #27]
	bl sub_080037EC
	ldrb r2, [r0, #23]
	subs r2, #1
	strb r2, [r0, #23]
	bne.n _0800572C
	bl sub_08001D5C
	ldrh r2, [r1, #54]
	ldr r3, [pc, #284]
	ands r2, r3
	strh r2, [r1, #54]
	bl sub_080012B4
_0800572C:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
