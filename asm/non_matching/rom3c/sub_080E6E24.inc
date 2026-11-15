	THUMB_FUNC_START sub_080E6E24
sub_080E6E24: @ 0x080E6E24
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	cmp r0, #0
	bne _080E6EEA
	ldr r6, _080E6EF8  @ =gRam
	ldr r1, _080E6EFC  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #3
	beq _080E6EC8
	ldr r2, _080E6F00  @ =0x00000F82
	add r0, r6, r2
	add r0, r4, r0
	ldrb r5, [r0]
	lsl r0, r5, #1
	add r5, r5, r0
	add r5, r1, r5
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r2, _080E6F04  @ =gUnknown_03003E74
	add r0, sp, #4
	ldrb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r4, #150
	lsl r4, r4, #4
	add r2, r6, r4
	ldr r1, _080E6F08  @ =gUnknown_0817779E
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r7, _080E6F0C  @ =0x00000964
	add r4, r6, r7
	ldr r2, _080E6F10  @ =gUnknown_081777B0
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E6F14  @ =gUnknown_081777C2
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E6F18  @ =gUnknown_081777CB
	add r5, r5, r4
	mov r12, r5
	ldr r5, _080E6F1C  @ =0x00000969
	add r4, r6, r5
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldrb r4, [r4]
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r7, r9
	str r7, [sp]
	bl sub_080C6368
_080E6EC8:
	ldr r1, _080E6F04  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _080E6F20  @ =0x00001012
	add r4, r6, r0
	add r4, r4, r8
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	mov r0, r8
	mov r1, #0
	bl sub_080C626C
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080E6EEA:
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080E6EF8:
	.4byte gRam
_080E6EFC:
	.4byte 0x00000FB2
_080E6F00:
	.4byte 0x00000F82
_080E6F04:
	.4byte gUnknown_03003E74
_080E6F08:
	.4byte gUnknown_0817779E
_080E6F0C:
	.4byte 0x00000964
_080E6F10:
	.4byte gUnknown_081777B0
_080E6F14:
	.4byte gUnknown_081777C2
_080E6F18:
	.4byte gUnknown_081777CB
_080E6F1C:
	.4byte 0x00000969
_080E6F20:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080E6E24

