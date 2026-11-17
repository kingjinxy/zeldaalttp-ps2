	.syntax unified
	THUMB_FUNC_START sub_08005BF8
sub_08005BF8: @ 0X08005BF8
	push {lr}
	bl sub_08001D5C
	bl sub_08001EC0
	bne.n _08005C08
	bl sub_080047F4
_08005C08:
	movs r2, #0
	movs r3, #64
	strb r2, [r0, r3]
	movs r2, #2
	movs r3, #70
	strb r2, [r0, r3]
	bl sub_0800127C
	movs r2, #128
	strb r2, [r1, #10]
	eors r2, r2
	strb r2, [r1, #6]
	movs r3, #66
	strb r2, [r0, r3]
	bl sub_08007364
	bl sub_080052A8
	bl sub_08001D5C
	movs r3, #2
	ldrsb r2, [r1, r3]
	orrs r2, r2
	beq.n _08005C56
	bl sub_08002294
	movs r2, #41
	ldrb r2, [r0, r2]
	lsrs r2, r2, #2
	bcs.n _08005C54
	bl sub_08001D5C
	ldrb r1, [r1, #4]
	orrs r1, r1
	bne.n _08005C54
	ldrb r1, [r0, #27]
	bl sub_080037EC
_08005C54:
	pop {pc}
_08005C56:
	eors r3, r3
	movs r2, #46
	strb r3, [r0, r2]
	ldrb r3, [r1, #13]
	movs r4, #43
	strb r3, [r0, r4]
	bl sub_08005C7C
	bl sub_08001D5C
	ldrb r2, [r1, #11]
	orrs r2, r2
	bne.n _08005C78
	push {r0}
	bl sub_0803D134
	pop {r0}
_08005C78:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
