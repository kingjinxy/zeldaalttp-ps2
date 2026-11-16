	thumb_func_start sub_08008F68
sub_08008F68: @ 0x08008F68
	str r4, [r4, r0]
	lsls r2, r0, #8
	str r4, [r4, r0]
	lsls r2, r0, #8
	asrs r4, r4, #0xc
	lsls r1, r0, #8
	str r4, [r4, r0]
	lsls r2, r0, #8
	.thumb_func
	.global sub_08008F78
sub_08008F78: @ 0x08008F78 (code after the 16-byte table at sub_08008F68)
	lsrs r2, r2, #0xe
	lsls r2, r2, #2
	ldr r3, _08008F9C @ =0x08008F68
	ldr r3, [r3, r2]
	lsls r0, r0, #1
	ldrh r0, [r3, r0]
	lsls r2, r2, #1
	ldr r3, _08008FA0 @ =0x08009280
	ldr r2, [r3, r2]
	lsls r1, r1, #1
	strh r0, [r2, r1]
	mov pc, lr
_08008F90: .4byte 0x080092A0
_08008F94: .4byte 0x08009280
_08008F98: .4byte 0x08009280
_08008F9C: .4byte 0x08008F68
_08008FA0: .4byte 0x08009280

	.GLOBAL sub_08008FA4
sub_08008FA4:
	.syntax unified
	.arm
	push {r4, r5, r6, r7}
	ldr r2, [pc, #716]
	ldrh r4, [r2, #32]
	ldrh r5, [r2, #24]
	sub r4, r4, r5
	ldrh r5, [r2, #28]
	add r5, r4, r5
	lsrs r5, r5, #3
	lsrs r4, r4, #3
	cmp r4, #1
	bcc _08008FD8
	sub r4, r4, #1
	sub r5, r5, #1
_08008FD8:
	and r5, r5, #31
	lsls r5, r5, #1
	ldrh r6, [r2, #34]
	ldrh r7, [r2, #26]
	sub r6, r6, r7
	ldrh r7, [r2, #30]
	add r7, r6, r7
	lsrs r6, r6, #3
	lsrs r7, r7, #3
	cmp r6, #2
	bcc _0800900C
	sub r6, r6, #2
	sub r7, r7, #2
_0800900C:
	and r7, r7, #31
	lsls r7, r7, #1
	add r4, r4, r6, lsl #7
	add r1, r1, r4, lsl #1
	mov r2, #24
	mov r3, #2
	tst r1, r3
	beq _08009158
	mov r3, r5
	add r6, r0, r7, lsl #5
	ldrh r4, [r1]
	strh r4, [r6, r3]
	add r3, r3, #2
	and r3, r3, #60
	ldr r4, [r1, #2]
	str r4, [r6, r3]
	add r3, r3, #4
	and r3, r3, #60
	ldr r4, [r1, #6]
	str r4, [r6, r3]
	add r3, r3, #4
	and r3, r3, #60
	ldr r4, [r1, #10]
	str r4, [r6, r3]
	add r3, r3, #4
	and r3, r3, #60
	ldr r4, [r1, #14]
	str r4, [r6, r3]
	add r3, r3, #4
	and r3, r3, #60
	ldr r4, [r1, #18]
	str r4, [r6, r3]
	add r3, r3, #4
	and r3, r3, #60
	ldr r4, [r1, #22]
	str r4, [r6, r3]
	add r3, r3, #4
