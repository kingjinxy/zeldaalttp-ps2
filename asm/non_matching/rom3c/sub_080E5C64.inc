	THUMB_FUNC_START sub_080E5C64
sub_080E5C64: @ 0x080E5C64
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r10
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5D30
	ldr r2, _080E5D40  @ =gRam
	ldr r1, _080E5D44  @ =0x00000F92
	add r0, r2, r1
	add r0, r0, r10
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	ldr r3, _080E5D48  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #2
	mov r9, r2
	add r7, sp, #4
	mov r8, r7
_080E5CA4:
	lsl r0, r0, #24
	asr r6, r0, #24
	lsl r4, r6, #1
	ldr r0, _080E5D44  @ =0x00000F92
	add r0, r0, r9
	add r0, r0, r10
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r7, r0, r1
	lsl r0, r7, #1
	add r0, r4, r0
	ldr r1, _080E5D4C  @ =gUnknown_08177594
	add r0, r0, r1
	ldrh r5, [r0]
	cmp r5, #0
	beq _080E5D18
	ldr r0, _080E5D50  @ =gUnknown_03003E74
	mov r2, r8
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080E5D54  @ =gUnknown_08177588
	add r1, r4, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E5D58  @ =0x00000964
	add r3, r3, r9
	ldr r2, _080E5D5C  @ =gUnknown_0817758E
	add r2, r4, r2
	ldrh r2, [r2]
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080E5D60  @ =gUnknown_081775B8
	add r3, r6, r7
	add r3, r3, r4
	ldrb r4, [r3]
	ldr r7, _080E5D64  @ =gUnknown_03002B99
	ldrb r3, [r7]
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r5, r5, r3
	ldr r3, _080E5D68  @ =gUnknown_081775CA
	add r3, r6, r3
	ldrb r3, [r3]
	str r3, [sp]
	add r3, r5, #0
	bl sub_080C6368
_080E5D18:
	sub r1, r6, #1
	lsl r1, r1, #24
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsr r0, r1, #24
	cmp r1, #0
	bge _080E5CA4
	mov r0, r10
	bl sub_080C6230
_080E5D30:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E5D40:
	.4byte gRam
_080E5D44:
	.4byte 0x00000F92
_080E5D48:
	.4byte 0x0000096C
_080E5D4C:
	.4byte gUnknown_08177594
_080E5D50:
	.4byte gUnknown_03003E74
_080E5D54:
	.4byte gUnknown_08177588
_080E5D58:
	.4byte 0x00000964
_080E5D5C:
	.4byte gUnknown_0817758E
_080E5D60:
	.4byte gUnknown_081775B8
_080E5D64:
	.4byte gUnknown_03002B99
_080E5D68:
	.4byte gUnknown_081775CA
	THUMB_FUNC_END sub_080E5C64

