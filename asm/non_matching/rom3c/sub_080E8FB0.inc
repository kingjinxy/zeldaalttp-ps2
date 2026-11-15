	THUMB_FUNC_START sub_080E8FB0
sub_080E8FB0: @ 0x080E8FB0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r4, r0, #24
	str r4, [sp, #8]
	add r0, r4, #0
	bl sub_080E9240
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E90AA
	ldr r7, _080E90BC  @ =gRam
	ldr r1, _080E90C0  @ =0x00000F92
	add r0, r7, r1
	add r4, r4, r0
	mov r10, r4
	ldrb r0, [r4]
	cmp r0, #3
	bls _080E8FFC
	ldr r3, _080E90C4  @ =0x00000964
	add r2, r7, r3
	mov r1, #1
	and r1, r1, r0
	ldr r4, _080E90C8  @ =0x0000FFFF
	add r1, r1, r4
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
_080E8FFC:
	add r0, sp, #4
	ldrb r1, [r0]
	ldr r5, _080E90CC  @ =gUnknown_03003E74
	ldrh r0, [r5]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r6, _080E90D0  @ =gUnknown_03002B90
	ldrh r1, [r6]
	ldr r2, _080E90C4  @ =0x00000964
	add r2, r2, r7
	mov r9, r2
	ldrh r2, [r2]
	sub r2, r2, #6
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r5, _080E90D4  @ =gUnknown_08177A68
	ldr r4, _080E90D8  @ =0x00001082
	add r3, r7, r4
	ldr r6, [sp, #8]
	add r3, r6, r3
	ldrb r4, [r3]
	add r5, r4, r5
	ldrb r3, [r5]
	ldr r5, _080E90DC  @ =gUnknown_08177A6C
	add r4, r4, r5
	ldrb r4, [r4]
	ldr r5, _080E90E0  @ =0x00000969
	add r5, r5, r7
	mov r8, r5
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r6, #2
	str r6, [sp]
	bl sub_080C6368
	add r0, sp, #4
	ldrb r1, [r0]
	ldr r2, _080E90CC  @ =gUnknown_03003E74
	ldrh r0, [r2]
	add r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080E90D0  @ =gUnknown_03002B90
	ldrh r1, [r3]
	mov r4, r9
	ldrh r2, [r4]
	add r2, r2, #2
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E90E4  @ =gUnknown_08177A70
	mov r5, r10
	ldrb r4, [r5]
	add r3, r4, r3
	ldrb r3, [r3]
	ldr r5, _080E90E8  @ =gUnknown_08177A78
	add r4, r4, r5
	ldrb r4, [r4]
	mov r5, r8
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	str r6, [sp]
	bl sub_080C6368
	ldr r6, _080E90EC  @ =0x00001092
	add r0, r7, r6
	ldr r1, [sp, #8]
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E90AA
	add r0, r1, #0
	bl sub_080C6230
_080E90AA:
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
_080E90BC:
	.4byte gRam
_080E90C0:
	.4byte 0x00000F92
_080E90C4:
	.4byte 0x00000964
_080E90C8:
	.4byte 0x0000FFFF
_080E90CC:
	.4byte gUnknown_03003E74
_080E90D0:
	.4byte gUnknown_03002B90
_080E90D4:
	.4byte gUnknown_08177A68
_080E90D8:
	.4byte 0x00001082
_080E90DC:
	.4byte gUnknown_08177A6C
_080E90E0:
	.4byte 0x00000969
_080E90E4:
	.4byte gUnknown_08177A70
_080E90E8:
	.4byte gUnknown_08177A78
_080E90EC:
	.4byte 0x00001092
	THUMB_FUNC_END sub_080E8FB0

