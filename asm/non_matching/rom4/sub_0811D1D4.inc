	THUMB_FUNC_START sub_0811D1D4
sub_0811D1D4: @ 0x0811D1D4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _0811D260  @ =gRam
	ldr r2, _0811D264  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811D220
	ldr r3, _0811D268  @ =0x00001844
	add r0, r1, r3
	add r2, r7, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811D220
	mov r0, #1
	strb r0, [r2]
	ldr r5, _0811D26C  @ =0x00000E29
	add r1, r1, r5
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #17
	bne _0811D220
	add r0, r7, #0
	bl sub_0811D440
_0811D220:
	ldr r2, _0811D260  @ =gRam
	ldr r1, _0811D26C  @ =0x00000E29
	add r0, r2, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811D230
	b _0811D402
_0811D230:
	ldr r3, _0811D270  @ =0x000016D5
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	mov r5, #150
	lsl r5, r5, #4
	add r1, r2, r5
	strb r0, [r1]
	ldr r1, _0811D274  @ =0x00001789
	add r0, r2, r1
	ldrb r1, [r0]
	cmp r1, #2
	bne _0811D282
	ldr r3, _0811D278  @ =0x00001832
	add r0, r2, r3
	add r2, r7, r0
	ldrb r0, [r2]
	sub r3, r0, #1
	lsl r0, r3, #24
	cmp r0, #0
	blt _0811D27C
	strb r3, [r2]
	b _0811D282
	.byte 0x00
	.byte 0x00
_0811D260:
	.4byte gRam
_0811D264:
	.4byte 0x000009AD
_0811D268:
	.4byte 0x00001844
_0811D26C:
	.4byte 0x00000E29
_0811D270:
	.4byte 0x000016D5
_0811D274:
	.4byte 0x00001789
_0811D278:
	.4byte 0x00001832
_0811D27C:
	mov r1, #3
	mov r0, #0
	strb r0, [r2]
_0811D282:
	ldr r4, _0811D32C  @ =gRam
	mov r5, #150
	lsl r5, r5, #4
	add r6, r4, r5
	lsl r1, r1, #1
	ldrb r0, [r6]
	add r1, r1, r0
	ldr r2, _0811D330  @ =gUnknown_0817F99C
	mov r0, #254
	and r1, r1, r0
	add r2, r1, r2
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r5, #0
	mov r8, r5
	strh r0, [r6]
	ldr r0, _0811D334  @ =gUnknown_0817F9BC
	add r1, r1, r0
	ldr r2, _0811D338  @ =0x000016C4
	add r0, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _0811D33C  @ =0x00000964
	add r5, r4, r3
	strh r0, [r5]
	ldr r1, _0811D340  @ =0x00000DC5
	add r0, r4, r1
	add r0, r7, r0
	ldrb r1, [r6]
	strb r1, [r0]
	ldr r2, _0811D344  @ =0x00000DD9
	add r0, r4, r2
	add r0, r7, r0
	sub r3, r3, #3
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0811D348  @ =0x00000DCF
	add r0, r4, r1
	add r0, r7, r0
	ldrb r1, [r5]
	strb r1, [r0]
	add r2, r2, #10
	add r0, r4, r2
	add r0, r7, r0
	add r3, r3, #4
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C177C
	ldrh r1, [r6]
	ldr r2, _0811D34C  @ =0x0000096C
	add r0, r4, r2
	strh r1, [r0]
	ldrh r1, [r5]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	ldr r5, _0811D350  @ =0x00000974
	add r2, r4, r5
	mov r0, r8
	strb r0, [r2]
	ldr r1, _0811D354  @ =0x00000E29
	add r4, r4, r1
	add r4, r7, r4
	ldrb r0, [r4]
	sub r1, r0, #1
	mov r0, #15
	and r1, r1, r0
	cmp r1, #0
	beq _0811D35C
	cmp r1, #15
	beq _0811D358
	mov r0, #1
	and r1, r1, r0
	add r0, r1, #1
	b _0811D35A
_0811D32C:
	.4byte gRam
_0811D330:
	.4byte gUnknown_0817F99C
_0811D334:
	.4byte gUnknown_0817F9BC
_0811D338:
	.4byte 0x000016C4
_0811D33C:
	.4byte 0x00000964
_0811D340:
	.4byte 0x00000DC5
_0811D344:
	.4byte 0x00000DD9
_0811D348:
	.4byte 0x00000DCF
_0811D34C:
	.4byte 0x0000096C
_0811D350:
	.4byte 0x00000974
_0811D354:
	.4byte 0x00000E29
_0811D358:
	mov r0, #3
_0811D35A:
	strb r0, [r2]
_0811D35C:
	ldr r1, _0811D414  @ =gRam
	ldr r2, _0811D418  @ =0x00000974
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #26
	lsr r6, r0, #24
	ldr r3, _0811D41C  @ =0x00000968
	add r2, r1, r3
	mov r0, #0
	strb r0, [r2]
	add r7, r1, #0
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r7
	mov r10, r5
	ldr r0, _0811D420  @ =gUnknown_03003E74
	mov r8, r0
	mov r9, r2
_0811D380:
	ldr r0, _0811D424  @ =gUnknown_0817F93C
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _0811D3EC
	ldr r1, _0811D428  @ =0x0000096C
	add r2, r7, r1
	ldr r0, _0811D42C  @ =gUnknown_0817F95C
	lsl r1, r6, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r10
	strh r0, [r2]
	mov r5, #151
	lsl r5, r5, #4
	add r2, r7, r5
	ldr r0, _0811D430  @ =gUnknown_0817F97C
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _0811D434  @ =0x00000964
	add r1, r7, r2
	strh r0, [r1]
	mov r5, r8
	ldrh r0, [r5]
	ldrh r1, [r1]
	mov r2, r10
	ldrh r2, [r2]
	str r2, [sp, #4]
	ldrb r3, [r3]
	ldr r4, _0811D438  @ =gUnknown_0817F94C
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _0811D43C  @ =gUnknown_03003954
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
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0811D3EC:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r2, r9
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0811D380
_0811D402:
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
_0811D414:
	.4byte gRam
_0811D418:
	.4byte 0x00000974
_0811D41C:
	.4byte 0x00000968
_0811D420:
	.4byte gUnknown_03003E74
_0811D424:
	.4byte gUnknown_0817F93C
_0811D428:
	.4byte 0x0000096C
_0811D42C:
	.4byte gUnknown_0817F95C
_0811D430:
	.4byte gUnknown_0817F97C
_0811D434:
	.4byte 0x00000964
_0811D438:
	.4byte gUnknown_0817F94C
_0811D43C:
	.4byte gUnknown_03003954
	THUMB_FUNC_END sub_0811D1D4

