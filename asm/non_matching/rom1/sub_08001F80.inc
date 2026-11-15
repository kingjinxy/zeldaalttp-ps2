	thumb_func_start sub_08001F80
sub_08001F80: @ 0x08001F80
	push {lr}
	bl sub_08001D5C
_08001F86:
	movs r3, #0x2b
	strb r2, [r0, r3]
	movs r3, #0x80
	tst r2, r3
	bne _08001FF8
	ldrb r3, [r1, #5]
	cmp r3, #2
	beq _08001F5E
	cmp r3, #1
	beq _08001F5E
	ldr r4, _08002184 @ =0x08001CF0
	ldrb r3, [r1, #2]
	adds r1, r2, #0
	orrs r3, r3
	beq _08001FC2
	push {r2}
	movs r3, #0x2a
	ldrb r1, [r0, r3]
	lsrs r1, r1, #1
	lsls r1, r1, #1
	lsrs r2, r2, #2
	subs r2, r2, r1
	pop {r1}
	adds r2, #2
	movs r4, #7
	ands r2, r4
	ldr r4, _08002188 @ =0x08001CE0
	cmp r2, #4
	beq _08001FC2
	bhs _08001FE0
_08001FC2:
	adds r3, r1, #0
	lsrs r3, r3, #2
	lsls r3, r3, #1
	adds r4, r4, r3
	movs r3, #0
	ldrsb r2, [r4, r3]
	adds r3, #1
	ldrsb r3, [r4, r3]
	bl sub_08002060
	b _08001FF8
_08001FD8:
	.byte 0x00, 0x08, 0xF8, 0x00, 0x00, 0xF8, 0x08, 0x00
_08001FE0:
	movs r3, #0x2a
	ldrb r3, [r0, r3]
	lsrs r3, r3, #1
	lsls r3, r3, #1
	ldr r4, _0800218C @ =0x08001FD8
	adds r4, r4, r3
	movs r3, #0
	ldrsb r2, [r4, r3]
	adds r3, #1
	ldrsb r3, [r4, r3]
	bl sub_08002060
_08001FF8:
	bl sub_08001D5C
	movs r4, #0x8c
	movs r2, #8
	ldrsh r3, [r1, r4]
	orrs r3, r3
	beq _08002016
	bpl _0800200C
	movs r2, #0x18
	rsbs r3, r3, #0
_0800200C:
	push {r0, r1}
	adds r1, r3, #0
	bl sub_08003010
	pop {r0, r1}
_08002016:
	movs r4, #0x8e
	movs r2, #0x10
	ldrsh r3, [r1, r4]
	orrs r3, r3
	beq _08002030
	bpl _08002026
	movs r2, #0
	rsbs r3, r3, #0
_08002026:
	push {r0, r1}
	adds r1, r3, #0
	bl sub_08003010
	pop {r0, r1}
_08002030:
	ldrb r2, [r1, #2]
	orrs r2, r2
	bne _08002042
	movs r2, #0x8c
	bl sub_08002044
	movs r2, #0x8e
	bl sub_08002044
_08002042:
	pop {pc}

