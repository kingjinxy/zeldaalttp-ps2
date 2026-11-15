	THUMB_FUNC_START sub_080E4018
sub_080E4018: @ 0x080E4018
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E40D8
	ldr r2, _080E40E8  @ =gRam
	ldr r1, _080E40EC  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r3, _080E40F0  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r3, #1
	mov r8, r2
	add r7, sp, #4
	mov r10, r7
	ldr r0, _080E40F4  @ =0x00000964
	add r0, r0, r8
	mov r9, r0
_080E405A:
	ldr r0, _080E40F0  @ =0x0000096C
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r1, r3, #24
	asr r6, r1, #24
	add r0, r6, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r0, _080E40F8  @ =gUnknown_0817735A
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #32
	add r4, r0, #0
	orr r4, r4, r1
	cmp r6, #0
	bne _080E4088
	mov r0, #241
	and r4, r4, r0
	ldr r0, _080E40FC  @ =0x00000969
	add r0, r0, r8
	ldrb r0, [r0]
	orr r4, r4, r0
_080E4088:
	ldr r0, _080E4100  @ =gUnknown_03003E74
	mov r2, r10
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	ldrh r1, [r1]
	ldr r3, _080E4104  @ =gUnknown_08177330
	lsl r2, r5, #1
	add r2, r2, r3
	ldrh r2, [r2]
	mov r3, r9
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E4108  @ =gUnknown_0817734C
	add r3, r5, r3
	ldrb r3, [r3]
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r1, r6, #1
	lsl r1, r1, #24
	mov r7, r10
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r3, r1, #24
	cmp r1, #0
	bge _080E405A
_080E40D8:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E40E8:
	.4byte gRam
_080E40EC:
	.4byte 0x00000F92
_080E40F0:
	.4byte 0x0000096C
_080E40F4:
	.4byte 0x00000964
_080E40F8:
	.4byte gUnknown_0817735A
_080E40FC:
	.4byte 0x00000969
_080E4100:
	.4byte gUnknown_03003E74
_080E4104:
	.4byte gUnknown_08177330
_080E4108:
	.4byte gUnknown_0817734C
	THUMB_FUNC_END sub_080E4018

