	.syntax unified
	THUMB_FUNC_START sub_08008D90
sub_08008D90: @ 0X08008D90
	push {r4, r5, lr}
	adds r4, r0, #0
	ldrh r0, [r4, #50]
	ldrh r1, [r4, #54]
	ldr r2, [pc, #268]
	bl 0x8009310
	ldr r5, [pc, #296]
	cmp r0, #0
	beq.n _08008DC2
	bl 0x80094bc
	cmp r0, #72
	beq.n _08008DC0
	cmp r0, #71
	beq.n _08008DC0
	subs r0, #86
	cmp r0, #5
	bcc.n _08008DC0
	subs r0, #14
	cmp r0, #4
	bcc.n _08008DC0
	lsls r5, r5, #1
	b.n _08008DC2
_08008DC0:
	ldr r5, [pc, #264]
_08008DC2:
	movs r1, #80
	ldrh r2, [r4, r1]
	lsls r2, r2, #18
	lsrs r2, r2, #18
	orrs r2, r5
	strh r2, [r4, r1]
	adds r0, r4, #0
	bl 0x8008dd8
	pop {r4, r5, pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb

	.GLOBAL sub_08008DD8
sub_08008DD8:
	.syntax unified
	.thumb
	movs r1, #80
	ldrh r1, [r0, r1]
	lsrs r1, r1, #15
	movs r2, #3
	eors r1, r2
	subs r1, #1
	lsls r1, r1, #6
	ldrb r2, [r0, #29]
	lsls r2, r2, #26
	lsrs r2, r2, #26
	orrs r2, r1
	strb r2, [r0, #29]
	ldrb r2, [r0, #31]
	lsls r2, r2, #26
	lsrs r2, r2, #26
	orrs r2, r1
	strb r2, [r0, #31]
	mov pc, lr
