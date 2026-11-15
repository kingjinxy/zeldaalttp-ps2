	THUMB_FUNC_START sub_0805485C
sub_0805485C: @ 0x0805485C
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	mov r0, #5
	str r0, [r7, #4]
_08054868:
	ldr r0, [r7, #4]
	cmp r0, #0
	bne _08054870
	b _0805496C
_08054870:
	bl sub_0800099C
	add r1, r0, #0
	add r0, r1, #0
	ldr r1, [r7, #4]
	bl __umodsi3
	str r0, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7]
	ldr r2, [r7, #4]
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r1, #0
	add r1, r1, #96
	add r2, r1, r2
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldr r1, [r7]
	ldr r2, [r7, #8]
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r1, #0
	add r4, r1, #0
	add r4, r4, #96
	add r1, r4, r2
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7]
	ldr r3, [r7, #4]
	add r2, r3, #6
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r1, #0
	add r1, r1, #96
	add r2, r1, r2
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #6
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldr r1, [r7]
	ldr r3, [r7, #8]
	add r2, r3, #6
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r1, #0
	add r4, r1, #0
	add r4, r4, #96
	add r1, r4, r2
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #6
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #4]
	sub r1, r0, #1
	str r1, [r7, #4]
	b _08054868
_0805496C:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805485C

