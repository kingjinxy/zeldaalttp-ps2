	.syntax unified
	THUMB_FUNC_START sub_08009FF4
sub_08009FF4: @ 0X08009FF4
	push {r4, r5, r6, r7, lr}
	movs r1, #0
	mov ip, r1
	adds r1, r0, #0
	adds r1, #72
	ldrh r7, [r1, #8]
	lsrs r7, r7, #14
	lsls r7, r7, #2
	ldr r6, [pc, #300]
	ldr r7, [r6, r7]
	ldr r1, [r1, #0]
	ldr r6, [pc, #300]
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
	bcc.n _0800A034
	subs r2, r2, r4
	b.n _0800A036
_0800A034:
	adds r2, r2, r4
_0800A036:
	ldr r6, [pc, #260]
	lsls r2, r2, #22
	lsrs r2, r2, #22
	lsls r3, r3, #22
	lsrs r3, r3, #22
	bl sub_0800A06C
	pop {r2, r3}
	movs r4, #43
	ldrb r5, [r0, r4]
	subs r5, #8
	cmp r5, #16
	ldrb r4, [r1, #5]
	bcc.n _0800A056
	subs r3, r3, r4
	b.n _0800A058
_0800A056:
	adds r3, r3, r4
_0800A058:
	movs r6, #68
	lsls r3, r3, #22
	lsrs r3, r3, #22
	lsls r2, r2, #22
	lsrs r2, r2, #22
	bl sub_0800A06C
	mov r1, ip
	strh r1, [r0, #44]
	pop {r4, r5, r6, r7, pc}
	.syntax unified
	.thumb
