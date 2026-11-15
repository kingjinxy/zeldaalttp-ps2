	.syntax unified
	THUMB_FUNC_START sub_080096DC
sub_080096DC: @ 0X080096DC
	push {r4, r5, r6, r7, lr}
	movs r1, #0
	mov ip, r1
	adds r1, r0, #0
	adds r1, #72
	ldrh r7, [r1, #8]
	lsrs r7, r7, #14
	lsls r7, r7, #2
	ldr r6, [pc, #368]
	ldr r7, [r6, r7]
	ldr r1, [r1, #0]
	ldr r6, [pc, #368]
	ldrh r2, [r0, #50]
	ldrh r3, [r6, #24]
	subs r2, r2, r3
	movs r4, #0
	ldrsb r5, [r1, r4]
	adds r2, r2, r5
	ldrh r3, [r0, #54]
	ldrh r6, [r6, #26]
	subs r3, r3, r6
	movs r4, #1
	ldrsb r5, [r1, r4]
	adds r3, r3, r5
	push {r2, r3}
	movs r4, #43
	ldrb r5, [r0, r4]
	cmp r5, #16
	ldrb r4, [r1, #2]
	bcc.n _0800971E
	subs r2, r2, r4
	ldr r6, [pc, #332]
	b.n _08009722
_0800971E:
	adds r2, r2, r4
	ldr r6, [pc, #328]
_08009722:
	lsls r2, r2, #22
	lsrs r2, r2, #22
	ldrb r4, [r1, #3]
	adds r3, r3, r4
	lsls r3, r3, #22
	lsrs r3, r3, #22
	bl sub_08009780
	lsrs r6, r6, #1
	ldrb r4, [r1, #3]
	subs r3, r3, r4
	subs r3, r3, r4
	lsls r3, r3, #22
	lsrs r3, r3, #22
	bl sub_08009780
	pop {r2, r3}
	movs r4, #43
	ldrb r5, [r0, r4]
	subs r5, #8
	cmp r5, #16
	ldrb r4, [r1, #5]
	bcc.n _08009756
	subs r3, r3, r4
	movs r6, #4
	b.n _0800975A
_08009756:
	adds r3, r3, r4
	movs r6, #64
_0800975A:
	lsls r3, r3, #22
	lsrs r3, r3, #22
	ldrb r4, [r1, #4]
	adds r2, r2, r4
	lsls r2, r2, #22
	lsrs r2, r2, #22
	bl sub_08009780
	lsrs r6, r6, #1
	ldrb r4, [r1, #4]
	subs r2, r2, r4
	subs r2, r2, r4
	lsls r2, r2, #22
	lsrs r2, r2, #22
	bl sub_08009780
	mov r1, ip
	strh r1, [r0, #44]
	pop {r4, r5, r6, r7, pc}
	.syntax unified
	.thumb
