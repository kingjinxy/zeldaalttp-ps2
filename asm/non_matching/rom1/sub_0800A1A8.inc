	.syntax unified
	THUMB_FUNC_START sub_0800A1A8
sub_0800A1A8: @ 0X0800A1A8
	cmp r1, #0
	beq.n _0800A1D0
	strb r2, [r0, #23]
	movs r2, #80
	ldrh r2, [r0, r2]
	lsrs r2, r2, #14
	push {r0}
	bne.n _0800A1BC
	bl 0x8008d90
_0800A1BC:
	pop {r1}
	cmp r7, #128
	bcc.n _0800A1C8
	subs r7, #128
	ldr r2, [pc, #484]
	ldrb r0, [r2, r7]
_0800A1C8:
	bl 0x8012728
	movs r0, #1
	pop {r4, r5, r6, r7, pc}
_0800A1D0:
	bl 0x8012540
	movs r0, #0
	pop {r4, r5, r6, r7, pc}
	.4byte _0800A1EC+1
	.4byte _0800A224+1
	.4byte _0800A264+1
	.4byte _0800A30C+1
	.4byte _0800A240+1
_0800A1EC:
	ldrh r3, [r1, #4]
	ldrh r5, [r1, #6]
	lsls r4, r3, #20
	lsrs r4, r4, #20
	lsls r1, r5, #20
	lsrs r1, r1, #20
_0800A1F8:
	cmp r6, #0
	beq.n _0800A204
	ldrh r6, [r2, #0]
	adds r4, r4, r6
	ldrh r6, [r2, #2]
	adds r1, r1, r6
_0800A204:
	ldr r2, [pc, #424]
	ldrh r6, [r2, #24]
	adds r4, r4, r6
	strh r4, [r0, #50]
	ldrh r6, [r2, #26]
	adds r1, r1, r6
	strh r1, [r0, #54]
	ldr r2, [pc, #416]
	ands r3, r2
	lsrs r3, r3, #12
	ands r2, r5
	lsrs r2, r2, #8
	adds r2, r2, r3
	movs r1, #1
	mov pc, lr
	.byte 0x00
	.byte 0x00
_0800A224:
	ldrh r3, [r1, #4]
	ldrh r5, [r1, #6]
	adds r4, r3, #0
	ldr r7, [pc, #396]
	ands r4, r7
	lsrs r4, r4, #10
	ands r7, r5
	lsrs r7, r7, #8
	adds r7, r7, r4
	lsls r4, r3, #22
	lsrs r4, r4, #22
	lsls r1, r5, #22
	lsrs r1, r1, #22
	b.n _0800A1F8
_0800A240:
	ldrh r3, [r1, #4]
	lsrs r4, r3, #10
	lsls r4, r4, #14
	ldr r5, [pc, #372]
	ldrh r5, [r5, #0]
	orrs r4, r5
	movs r5, #80
	ldrh r5, [r0, r5]
	orrs r4, r5
	movs r5, #80
	strh r4, [r0, r5]
	ldrh r5, [r1, #6]
	lsls r4, r3, #22
	lsrs r4, r4, #22
	lsls r1, r5, #22
	lsrs r1, r1, #22
	b.n _0800A1F8
	.byte 0x00
	.byte 0x00
_0800A264:
	ldrh r3, [r1, #4]
	ldrh r4, [r1, #6]
	ldr r5, [pc, #328]
	adds r1, r3, #0
	ands r1, r5
	lsrs r1, r1, #12
	ands r5, r4
	lsrs r5, r5, #8
	adds r1, r1, r5
	push {r1, r7, lr}
	ldr r1, [pc, #324]
	adds r5, r3, #0
	ands r5, r1
	lsrs r5, r5, #2
	ands r1, r4
	lsrs r1, r1, #2
	cmp r6, #0
	beq.n _0800A290
	ldrh r6, [r2, #0]
	adds r5, r5, r6
	ldrh r6, [r2, #2]
	adds r1, r1, r6
_0800A290:
	movs r6, #63
	ands r3, r6
	adds r3, #1
	ands r4, r6
	adds r4, #1
	lsls r6, r6, #4
	ands r5, r6
	lsrs r5, r5, #4
	ands r1, r6
	lsls r1, r1, #2
	adds r1, r1, r5
	push {r0}
	adds r0, r1, #0
	adds r1, r3, #0
	adds r2, r4, #0
	bl 0x8013754
	adds r1, r0, #0
	pop {r0}
	beq.n _0800A306
	mov ip, r0
	ldr r2, [pc, #264]
	ldr r3, [pc, #264]
	ldr r4, [r1, #0]
	movs r7, #9
_0800A2C2:
	subs r7, #1
	beq.n _0800A304
	ldrh r5, [r1, #8]
	adds r5, #1
	lsls r6, r5, #1
	ldrh r6, [r4, r6]
	ldrh r0, [r4, #0]
	cmp r5, r0
	bcc.n _0800A2D6
	movs r5, #0
_0800A2D6:
	strh r5, [r1, #8]
	ldrh r5, [r2, r6]
	cmp r5, #0
	bne.n _0800A2C2
	ldrh r5, [r3, r6]
	cmp r5, #0
	bne.n _0800A2C2
	mov r0, ip
	ldr r1, [pc, #228]
	lsls r2, r6, #26
	lsrs r2, r2, #22
	adds r2, #8
	ldrh r3, [r1, #24]
	adds r2, r2, r3
	strh r2, [r0, #50]
	lsrs r6, r6, #6
	lsls r6, r6, #4
	adds r6, #8
	ldrh r3, [r1, #26]
	adds r6, r6, r3
	strh r6, [r0, #54]
	movs r1, #1
	pop {r2, r7, pc}
_0800A304:
	mov r0, ip
_0800A306:
	movs r1, #0
	pop {r2, r7, pc}
	.byte 0x00
	.byte 0x00
_0800A30C:
	ldrh r3, [r1, #4]
	ldrh r4, [r1, #6]
	ldr r5, [pc, #160]
	adds r1, r3, #0
	ands r1, r5
	lsrs r1, r1, #12
	ands r5, r4
	lsrs r5, r5, #8
	adds r1, r1, r5
	push {r1, r7, lr}
	ldr r1, [pc, #156]
	adds r5, r3, #0
	ands r5, r1
	lsrs r5, r5, #2
	ands r1, r4
	lsrs r1, r1, #2
	cmp r6, #0
	beq.n _0800A338
	ldrh r6, [r2, #0]
	adds r5, r5, r6
	ldrh r6, [r2, #2]
	adds r1, r1, r6
_0800A338:
	movs r6, #63
	ands r3, r6
	adds r3, #1
	ands r4, r6
	adds r4, #1
	lsls r6, r6, #4
	ands r5, r6
	lsrs r5, r5, #4
	ands r1, r6
	.syntax unified
	.thumb
