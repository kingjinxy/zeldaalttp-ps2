	THUMB_FUNC_START sub_080E6A2C
sub_080E6A2C: @ 0x080E6A2C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E6ACA
	mov r2, #1
	add r7, sp, #4
	ldr r0, _080E6ADC  @ =gRam
	mov r9, r0
	ldr r3, _080E6AE0  @ =gUnknown_0817775A
	mov r10, r3
_080E6A5C:
	ldr r0, _080E6AE4  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r6, r2, #24
	asr r6, r6, #24
	lsl r2, r6, #1
	ldr r1, _080E6AE8  @ =0x00000F92
	add r1, r1, r9
	add r1, r1, r8
	ldrb r5, [r1]
	lsl r1, r5, #2
	add r2, r2, r1
	add r2, r2, r10
	ldrh r1, [r2]
	ldr r2, _080E6AEC  @ =gUnknown_03002B90
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E6AF0  @ =0x00000964
	add r2, r2, r9
	ldrh r2, [r2]
	ldr r3, _080E6AF4  @ =gUnknown_08177762
	lsl r5, r5, #1
	add r5, r6, r5
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E6AF8  @ =gUnknown_08177766
	add r5, r5, r4
	ldrb r5, [r5]
	mov r12, r5
	ldr r5, _080E6AFC  @ =gUnknown_03002B99
	ldrb r4, [r5]
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	lsl r6, r6, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r2, r6, #24
	cmp r6, #0
	bge _080E6A5C
	mov r0, r8
	bl sub_080C6230
_080E6ACA:
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
_080E6ADC:
	.4byte gRam
_080E6AE0:
	.4byte gUnknown_0817775A
_080E6AE4:
	.4byte gUnknown_03003E74
_080E6AE8:
	.4byte 0x00000F92
_080E6AEC:
	.4byte gUnknown_03002B90
_080E6AF0:
	.4byte 0x00000964
_080E6AF4:
	.4byte gUnknown_08177762
_080E6AF8:
	.4byte gUnknown_08177766
_080E6AFC:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_080E6A2C

