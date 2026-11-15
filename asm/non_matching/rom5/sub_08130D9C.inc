	THUMB_FUNC_START sub_08130D9C
sub_08130D9C: @ 0x08130D9C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r7, _08130EB8  @ =gUnknown_083BD758
	mov r6, #128
	lsl r6, r6, #5
	mov r5, #0
	ldr r0, _08130EBC  @ =gUnknown_0822BE66
	mov r8, r0
	ldr r1, _08130EC0  @ =gUnknown_0822BDD0
	mov r9, r1
	ldr r2, _08130EC4  @ =gUnknown_0822BE16
	mov r10, r2
	mov r0, #31
	mov r12, r0
_08130DBE:
	ldrh r3, [r7]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r4, [r0, #7]
	lsl r4, r4, #6
	add r4, r4, r8
	mov r1, #31
	and r1, r1, r3
	lsl r1, r1, #1
	add r1, r1, r4
	lsr r0, r3, #5
	mov r2, r12
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r2, [r0]
	lsl r2, r2, #5
	ldrh r0, [r1]
	orr r2, r2, r0
	lsr r3, r3, #10
	mov r0, r12
	and r3, r3, r0
	lsl r3, r3, #1
	add r3, r3, r4
	ldrh r0, [r3]
	lsl r0, r0, #10
	orr r2, r2, r0
	lsl r0, r5, #1
	ldr r1, _08130EC8  @ =gUnknown_02030000
	add r0, r0, r1
	strh r2, [r0]
	add r5, r5, #1
	add r7, r7, #2
	sub r6, r6, #1
	cmp r6, #0
	bgt _08130DBE
	mov r7, r9
	mov r6, #35
	mov r5, #0
	mov r2, #31
	mov r12, r2
_08130E10:
	ldrh r3, [r7]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r4, [r0, #7]
	lsl r4, r4, #6
	add r4, r4, r8
	mov r1, #31
	and r1, r1, r3
	lsl r1, r1, #1
	add r1, r1, r4
	lsr r0, r3, #5
	mov r2, r12
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r2, [r0]
	lsl r2, r2, #5
	ldrh r0, [r1]
	orr r2, r2, r0
	lsr r3, r3, #10
	mov r0, r12
	and r3, r3, r0
	lsl r3, r3, #1
	add r3, r3, r4
	ldrh r0, [r3]
	lsl r0, r0, #10
	orr r2, r2, r0
	lsl r0, r5, #1
	ldr r1, _08130ECC  @ =gUnknown_0200BB00
	add r0, r0, r1
	strh r2, [r0]
	add r5, r5, #1
	add r7, r7, #2
	sub r6, r6, #1
	cmp r6, #0
	bgt _08130E10
	mov r7, r10
	mov r6, #40
	mov r5, #0
	mov r2, #31
	mov r12, r2
_08130E62:
	ldrh r3, [r7]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r4, [r0, #7]
	lsl r4, r4, #6
	add r4, r4, r8
	mov r1, #31
	and r1, r1, r3
	lsl r1, r1, #1
	add r1, r1, r4
	lsr r0, r3, #5
	mov r2, r12
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r2, [r0]
	lsl r2, r2, #5
	ldrh r0, [r1]
	orr r2, r2, r0
	lsr r3, r3, #10
	mov r0, r12
	and r3, r3, r0
	lsl r3, r3, #1
	add r3, r3, r4
	ldrh r0, [r3]
	lsl r0, r0, #10
	orr r2, r2, r0
	lsl r0, r5, #1
	ldr r1, _08130ED0  @ =gUnknown_0200BB50
	add r0, r0, r1
	strh r2, [r0]
	add r5, r5, #1
	add r7, r7, #2
	sub r6, r6, #1
	cmp r6, #0
	bgt _08130E62
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08130EB8:
	.4byte gUnknown_083BD758
_08130EBC:
	.4byte gUnknown_0822BE66
_08130EC0:
	.4byte gUnknown_0822BDD0
_08130EC4:
	.4byte gUnknown_0822BE16
_08130EC8:
	.4byte gUnknown_02030000
_08130ECC:
	.4byte gUnknown_0200BB00
_08130ED0:
	.4byte gUnknown_0200BB50
	THUMB_FUNC_END sub_08130D9C

