	THUMB_FUNC_START sub_0811C17C
sub_0811C17C: @ 0x0811C17C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C177C
	ldr r2, _0811C264  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r3, r2, r0
	ldrh r1, [r3]
	ldr r5, _0811C268  @ =0x00000968
	add r0, r2, r5
	strh r1, [r0]
	ldr r1, _0811C26C  @ =0x00000964
	add r0, r2, r1
	ldrh r1, [r0]
	add r5, r5, #4
	add r0, r2, r5
	strh r1, [r0]
	ldr r1, _0811C270  @ =0x00000E29
	add r0, r2, r1
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #26
	lsr r6, r0, #24
	mov r5, #3
	mov r9, r5
	mov r8, r2
	mov r10, r3
	ldr r7, _0811C274  @ =gUnknown_03003E74
_0811C1C6:
	ldr r0, _0811C278  @ =gUnknown_0817F842
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _0811C240
	ldr r1, _0811C268  @ =0x00000968
	add r1, r1, r8
	ldr r0, _0811C27C  @ =gUnknown_0817F882
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, r10
	strh r0, [r1]
	ldr r1, _0811C280  @ =0x0000096C
	add r1, r1, r8
	ldr r0, _0811C284  @ =gUnknown_0817F8A2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r1, _0811C26C  @ =0x00000964
	add r1, r1, r8
	strh r0, [r1]
	ldrh r0, [r7]
	ldrh r1, [r1]
	mov r2, r10
	ldrh r2, [r2]
	str r2, [sp, #4]
	ldrb r3, [r3]
	ldr r4, _0811C288  @ =gUnknown_0817F862
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _0811C28C  @ =gUnknown_03003954
	ldrb r5, [r5]
	mov r12, r5
	mov r2, r12
	orr r4, r4, r2
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r5, #0
	str r5, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r7]
_0811C240:
	mov r0, #1
	neg r0, r0
	add r9, r9, r0
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, r9
	cmp r1, #0
	bge _0811C1C6
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811C264:
	.4byte gRam
_0811C268:
	.4byte 0x00000968
_0811C26C:
	.4byte 0x00000964
_0811C270:
	.4byte 0x00000E29
_0811C274:
	.4byte gUnknown_03003E74
_0811C278:
	.4byte gUnknown_0817F842
_0811C27C:
	.4byte gUnknown_0817F882
_0811C280:
	.4byte 0x0000096C
_0811C284:
	.4byte gUnknown_0817F8A2
_0811C288:
	.4byte gUnknown_0817F862
_0811C28C:
	.4byte gUnknown_03003954
	THUMB_FUNC_END sub_0811C17C

