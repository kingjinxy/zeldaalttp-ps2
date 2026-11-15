	THUMB_FUNC_START sub_0801E3B4
sub_0801E3B4: @ 0x0801E3B4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	bl 0x0800099C
	ldr r5, _0801E438  @ =gUnknown_03006C80
	ldrb r1, [r5]
	bl __umodsi3
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	mov r0, #255
	cmp r1, #0
	beq _0801E3DA
	mov r0, #1
_0801E3DA:
	mov r3, #0
	ldr r6, _0801E43C  @ =gUnknown_03006A30
	ldrb r5, [r5]
	cmp r3, r5
	bge _0801E474
	mov r1, #128
	lsl r1, r1, #3
	mov r8, r1
	mov r2, #200
	lsl r2, r2, #4
	mov r12, r2
	mov r7, #1
	neg r7, r7
	lsl r0, r0, #24
	asr r5, r0, #24
_0801E3F8:
	lsl r1, r4, #24
	asr r1, r1, #24
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r0, r6
	ldr r0, _0801E440  @ =gUnknown_03000940
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	bne _0801E444
	add r0, r2, #0
	add r0, r0, #38
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801E444
	ldrh r1, [r2, #54]
	mov r0, r12
	and r0, r0, r1
	cmp r0, #0
	bne _0801E444
	ldr r1, [r2, #40]
	add r0, r1, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801E444
	add r0, r1, #0
	b _0801E476
_0801E438:
	.4byte gUnknown_03006C80
_0801E43C:
	.4byte gUnknown_03006A30
_0801E440:
	.4byte gUnknown_03000940
_0801E444:
	lsl r0, r4, #24
	asr r0, r0, #24
	add r0, r0, r5
	lsl r0, r0, #24
	lsr r4, r0, #24
	asr r0, r0, #24
	ldr r1, _0801E480  @ =gUnknown_03006C80
	ldrb r1, [r1]
	cmp r0, r1
	bne _0801E45A
	mov r4, #0
_0801E45A:
	lsl r0, r4, #24
	asr r0, r0, #24
	cmp r0, r7
	bne _0801E464
	add r4, r1, #0
_0801E464:
	lsl r0, r3, #24
	mov r2, #128
	lsl r2, r2, #17
	add r0, r0, r2
	lsr r3, r0, #24
	asr r0, r0, #24
	cmp r0, r1
	blt _0801E3F8
_0801E474:
	ldr r0, [r6, #40]
_0801E476:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
_0801E480:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0801E3B4

