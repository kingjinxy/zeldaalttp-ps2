	.syntax unified
	THUMB_FUNC_START sub_080056B0
sub_080056B0: @ 0X080056B0
	push {lr}
	bl 0x800127c
	bl 0x8001f5c
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
	bl 0x8001274
	bl 0x80076c4
	bl 0x8001d5c
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
	bl 0x8001d5c
	movs r2, #52
	eors r3, r3
	strb r3, [r1, r2]
	bl 0x8002294
	ldrb r1, [r0, #27]
	bl 0x80037ec
	ldrb r2, [r0, #23]
	subs r2, #1
	strb r2, [r0, #23]
	bne.n _0800572C
	bl 0x8001d5c
	ldrh r2, [r1, #54]
	ldr r3, [pc, #284]
	ands r2, r3
	strh r2, [r1, #54]
	bl 0x80012b4
_0800572C:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
