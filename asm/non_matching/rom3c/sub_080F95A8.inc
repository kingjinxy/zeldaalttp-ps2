	THUMB_FUNC_START sub_080F95A8
sub_080F95A8: @ 0x080F95A8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080F9628  @ =gUnknown_0817A2F8
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r0, _080F962C  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r2, r0, r1
	mov r1, #31
	strb r1, [r2]
	ldr r5, _080F9630  @ =0x00000EE2
	add r1, r0, r5
	add r1, r1, r4
	mov r12, r1
	ldr r7, _080F9634  @ =0x00000F02
	add r1, r0, r7
	add r1, r1, r4
	mov r8, r1
	sub r5, r5, #16
	add r1, r0, r5
	add r6, r4, r1
	sub r7, r7, #16
	add r0, r0, r7
	add r5, r4, r0
_080F95E0:
	ldr r0, _080F9638  @ =gUnknown_0200F018
	add r1, r3, r0
	mov r7, r12
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r0, _080F963C  @ =gUnknown_0200F0D8
	add r1, r3, r0
	mov r7, r8
	ldrb r0, [r7]
	strb r0, [r1]
	ldr r0, _080F9640  @ =gUnknown_0200F198
	add r1, r3, r0
	ldrb r0, [r6]
	strb r0, [r1]
	ldr r7, _080F9644  @ =gUnknown_0200F258
	add r1, r3, r7
	ldrb r0, [r5]
	strb r0, [r1]
	ldrb r1, [r2]
	sub r1, r1, #1
	strb r1, [r2]
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r1, r1, #24
	cmp r1, #0
	bge _080F95E0
	add r0, r4, #0
	bl sub_080E9A10
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9628:
	.4byte gUnknown_0817A2F8
_080F962C:
	.4byte gRam
_080F9630:
	.4byte 0x00000EE2
_080F9634:
	.4byte 0x00000F02
_080F9638:
	.4byte gUnknown_0200F018
_080F963C:
	.4byte gUnknown_0200F0D8
_080F9640:
	.4byte gUnknown_0200F198
_080F9644:
	.4byte gUnknown_0200F258
	THUMB_FUNC_END sub_080F95A8

