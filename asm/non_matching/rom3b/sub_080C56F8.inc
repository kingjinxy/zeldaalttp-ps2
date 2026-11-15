	THUMB_FUNC_START sub_080C56F8
sub_080C56F8: @ 0x080C56F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	lsl r1, r1, #24
	mov r0, #255
	lsl r0, r0, #24
	add r1, r1, r0
	lsr r1, r1, #24
	lsl r2, r1, #1
	add r2, r2, r1
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #31
	add r0, r0, r2
	mov r10, r0
	mov r5, #2
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C57C4
	ldr r2, _080C57D4  @ =gRam
	ldr r1, _080C57D8  @ =0x00001082
	add r0, r2, r1
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C5748
	mov r5, #1
_080C5748:
	add r7, sp, #4
	mov r8, r2
_080C574C:
	lsl r6, r5, #24
	asr r6, r6, #24
	mov r4, r10
	add r5, r4, r6
	lsl r5, r5, #16
	lsr r5, r5, #16
	ldr r0, _080C57DC  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080C57E0  @ =gUnknown_081720F2
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080C57E4  @ =0x00000964
	add r4, r4, r8
	ldr r2, _080C57E8  @ =gUnknown_08172116
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080C57EC  @ =gUnknown_0817213A
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080C57F0  @ =gUnknown_03002B99
	ldrb r4, [r4]
	lsl r4, r4, #24
	asr r4, r4, #24
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080C57F4  @ =gUnknown_0817214C
	add r5, r5, r4
	ldrb r4, [r5]
	str r4, [sp]
	bl sub_080C6368
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	sub r6, r6, #1
	lsl r6, r6, #24
	lsr r5, r6, #24
	cmp r6, #0
	bge _080C574C
	mov r0, r9
	bl sub_080C6230
_080C57C4:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C57D4:
	.4byte gRam
_080C57D8:
	.4byte 0x00001082
_080C57DC:
	.4byte gUnknown_03003E74
_080C57E0:
	.4byte gUnknown_081720F2
_080C57E4:
	.4byte 0x00000964
_080C57E8:
	.4byte gUnknown_08172116
_080C57EC:
	.4byte gUnknown_0817213A
_080C57F0:
	.4byte gUnknown_03002B99
_080C57F4:
	.4byte gUnknown_0817214C
	THUMB_FUNC_END sub_080C56F8

