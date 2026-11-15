	THUMB_FUNC_START sub_080E9D90
sub_080E9D90: @ 0x080E9D90
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E9E8A
	ldr r2, _080E9E9C  @ =gRam
	ldr r1, _080E9EA0  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _080E9EA4  @ =0x00000EF2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080E9EA8  @ =0x00000958
	add r0, r2, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r7, _080E9EAC  @ =0x0000096C
	add r0, r2, r7
	strh r1, [r0]
	ldr r1, _080E9EB0  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	mov r3, #2
	mov r10, r3
	mov r9, r2
	add r5, sp, #4
	mov r8, r5
_080E9DF2:
	ldr r0, [sp, #8]
	add r0, r0, r10
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r0, _080E9EB4  @ =0x00000964
	add r0, r0, r9
	ldrh r6, [r0]
	ldr r0, _080E9EB8  @ =gUnknown_08177C8F
	add r0, r5, r0
	ldr r1, _080E9EBC  @ =0x00000969
	add r1, r1, r9
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r0, #0
	orr r4, r4, r2
	ldr r0, _080E9EC0  @ =gUnknown_08177C9E
	add r0, r0, r5
	mov r12, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E9E2C
	ldr r0, _080E9EAC  @ =0x0000096C
	add r0, r0, r9
	ldrh r6, [r0]
	mov r0, #240
	and r4, r4, r0
	mov r0, #2
	orr r4, r4, r0
_080E9E2C:
	ldr r0, _080E9EC4  @ =gUnknown_03003E74
	mov r7, r8
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080E9EC8  @ =gUnknown_08177C44
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldr r2, _080E9ECC  @ =gUnknown_03002B90
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E9ED0  @ =gUnknown_08177C62
	add r3, r3, r2
	ldrh r2, [r3]
	add r2, r6, r2
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E9ED4  @ =gUnknown_08177C80
	add r3, r5, r3
	ldrb r3, [r3]
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r5, r12
	ldrb r4, [r5]
	str r4, [sp]
	bl sub_080C6368
	mov r7, r10
	lsl r1, r7, #24
	mov r0, #255
	lsl r0, r0, #24
	add r1, r1, r0
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsr r3, r1, #24
	mov r10, r3
	cmp r1, #0
	bge _080E9DF2
_080E9E8A:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9E9C:
	.4byte gRam
_080E9EA0:
	.4byte 0x00000ED2
_080E9EA4:
	.4byte 0x00000EF2
_080E9EA8:
	.4byte 0x00000958
_080E9EAC:
	.4byte 0x0000096C
_080E9EB0:
	.4byte 0x00000F92
_080E9EB4:
	.4byte 0x00000964
_080E9EB8:
	.4byte gUnknown_08177C8F
_080E9EBC:
	.4byte 0x00000969
_080E9EC0:
	.4byte gUnknown_08177C9E
_080E9EC4:
	.4byte gUnknown_03003E74
_080E9EC8:
	.4byte gUnknown_08177C44
_080E9ECC:
	.4byte gUnknown_03002B90
_080E9ED0:
	.4byte gUnknown_08177C62
_080E9ED4:
	.4byte gUnknown_08177C80
	THUMB_FUNC_END sub_080E9D90

