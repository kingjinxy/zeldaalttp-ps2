	THUMB_FUNC_START sub_080ED07C
sub_080ED07C: @ 0x080ED07C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080ED0A2
	b _080ED1F8
_080ED0A2:
	ldr r1, _080ED208  @ =gRam
	ldr r2, _080ED20C  @ =0x00000F62
	add r0, r1, r2
	add r0, r0, r9
	ldrb r4, [r0]
	cmp r4, #0
	bne _080ED0C4
	ldr r3, _080ED210  @ =0x000009AD
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #7
	beq _080ED0C4
	mov r0, r9
	bl sub_080C6340
	add r0, sp, #4
	strb r4, [r0]
_080ED0C4:
	mov r2, #3
	add r7, sp, #4
_080ED0C8:
	ldrb r1, [r7]
	ldr r4, _080ED214  @ =gUnknown_03003E74
	ldrh r0, [r4]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r2, r2, #24
	mov r8, r2
	mov r5, r8
	asr r5, r5, #24
	mov r8, r5
	lsl r3, r5, #1
	ldr r1, _080ED218  @ =gUnknown_030031C2
	add r1, r1, r9
	mov r10, r1
	ldrb r6, [r1]
	lsl r1, r6, #3
	add r3, r3, r1
	ldr r2, _080ED21C  @ =gUnknown_081785B0
	add r1, r3, r2
	ldrh r1, [r1]
	ldr r4, _080ED220  @ =gUnknown_03002B90
	ldrh r4, [r4]
	add r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080ED224  @ =gUnknown_081785E0
	add r3, r3, r2
	ldrh r2, [r3]
	ldr r5, _080ED228  @ =gUnknown_03002B94
	ldrh r5, [r5]
	add r2, r2, r5
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080ED22C  @ =gUnknown_08178610
	lsl r6, r6, #2
	add r6, r6, r8
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080ED230  @ =gUnknown_08178628
	add r4, r6, r4
	ldrb r4, [r4]
	ldr r5, _080ED234  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080ED238  @ =gUnknown_08178640
	add r6, r6, r4
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6368
	mov r0, #1
	neg r0, r0
	add r8, r8, r0
	mov r1, r8
	lsl r1, r1, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r2, r1, #24
	cmp r1, #0
	bge _080ED0C8
	ldr r2, _080ED208  @ =gRam
	mov r3, r10
	ldrb r0, [r3]
	cmp r0, #0
	bne _080ED1F8
	add r0, sp, #4
	ldrb r1, [r0]
	ldr r4, _080ED214  @ =gUnknown_03003E74
	ldrh r0, [r4]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	ldr r5, _080ED20C  @ =0x00000F62
	add r0, r2, r5
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080ED184
	ldr r0, _080ED23C  @ =gUnknown_08178658
	mov r3, r9
	lsl r1, r3, #1
	add r1, r1, r0
	ldrh r0, [r1]
	lsr r0, r0, #2
	mov r8, r0
_080ED184:
	ldr r4, _080ED240  @ =0x00001142
	add r0, r2, r4
	add r0, r0, r9
	ldrb r7, [r0]
	cmp r7, #31
	bls _080ED192
	mov r7, #32
_080ED192:
	lsr r7, r7, #3
	ldr r0, _080ED218  @ =gUnknown_030031C2
	sub r0, r0, #192
	add r0, r0, r9
	ldrb r4, [r0]
	ldr r0, _080ED218  @ =gUnknown_030031C2
	sub r0, r0, #160
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r4, r4, r0
	ldr r5, _080ED218  @ =gUnknown_030031C2
	ldr r1, _080ED244  @ =0xFFFFF9C6
	add r0, r5, r1
	ldrh r0, [r0]
	sub r4, r4, r0
	ldr r2, _080ED228  @ =gUnknown_03002B94
	strh r4, [r2]
	add r4, r4, #12
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldr r3, _080ED248  @ =0xFFFFF9CE
	add r6, r5, r3
	ldr r5, _080ED24C  @ =0x0000FFF8
	add r1, r7, r5
	ldrh r0, [r6]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080ED250  @ =0x000025D4
	mov r5, #2
	str r5, [sp]
	mov r0, r8
	add r2, r4, #0
	bl sub_080C6368
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r2, r7, #0
	sub r2, r2, #8
	ldrh r1, [r6]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080ED254  @ =0x000065D4
	str r5, [sp]
	add r2, r4, #0
	bl sub_080C6368
_080ED1F8:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080ED208:
	.4byte gRam
_080ED20C:
	.4byte 0x00000F62
_080ED210:
	.4byte 0x000009AD
_080ED214:
	.4byte gUnknown_03003E74
_080ED218:
	.4byte gUnknown_030031C2
_080ED21C:
	.4byte gUnknown_081785B0
_080ED220:
	.4byte gUnknown_03002B90
_080ED224:
	.4byte gUnknown_081785E0
_080ED228:
	.4byte gUnknown_03002B94
_080ED22C:
	.4byte gUnknown_08178610
_080ED230:
	.4byte gUnknown_08178628
_080ED234:
	.4byte gUnknown_03002B99
_080ED238:
	.4byte gUnknown_08178640
_080ED23C:
	.4byte gUnknown_08178658
_080ED240:
	.4byte 0x00001142
_080ED244:
	.4byte 0xFFFFF9C6
_080ED248:
	.4byte 0xFFFFF9CE
_080ED24C:
	.4byte 0x0000FFF8
_080ED250:
	.4byte 0x000025D4
_080ED254:
	.4byte 0x000065D4
	THUMB_FUNC_END sub_080ED07C

