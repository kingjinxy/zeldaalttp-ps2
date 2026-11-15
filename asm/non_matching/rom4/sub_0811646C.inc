	THUMB_FUNC_START sub_0811646C
sub_0811646C: @ 0x0811646C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08116494  @ =gRam
	ldr r2, _08116498  @ =0x00000E1F
	add r0, r1, r2
	add r0, r3, r0
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	beq _0811649C
	add r0, r3, #0
	bl sub_080AC53C
	b _081165CA
_08116494:
	.4byte gRam
_08116498:
	.4byte 0x00000E1F
_0811649C:
	ldr r5, _081164D0  @ =0x00000E33
	add r0, r4, r5
	add r1, r3, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _081164DC
	mov r0, #3
	strb r0, [r1]
	ldr r0, _081164D4  @ =0x00000E29
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _081164C2
	b _081165CA
_081164C2:
	cmp r0, #6
	bne _081164DC
	ldr r1, _081164D8  @ =0x00000E15
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	b _081165CA
_081164D0:
	.4byte 0x00000E33
_081164D4:
	.4byte 0x00000E29
_081164D8:
	.4byte 0x00000E15
_081164DC:
	add r5, r4, #0
	ldr r2, _081165DC  @ =0x00000E29
	add r0, r5, r2
	add r6, r3, r0
	ldrb r0, [r6]
	cmp r0, #5
	beq _081165CA
	add r0, r3, #0
	bl sub_080C177C
	mov r0, #150
	lsl r0, r0, #4
	add r3, r5, r0
	ldrh r1, [r3]
	ldr r2, _081165E0  @ =0x0000096C
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _081165E4  @ =0x00000964
	add r0, r5, r1
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _081165E8  @ =gUnknown_0817EE52
	ldr r2, _081165EC  @ =0x000016D5
	add r0, r5, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _081165F0  @ =0x00000978
	add r0, r5, r2
	strh r1, [r0]
	mov r1, #0
	ldr r2, _081165F4  @ =0x000017E1
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811652E
	mov r1, #5
_0811652E:
	ldr r5, _081165F8  @ =0x00000968
	add r2, r4, r5
	strb r1, [r2]
	ldrb r0, [r6]
	add r0, r0, r1
	lsl r1, r0, #1
	add r0, r0, r1
	strb r0, [r2]
	ldr r0, _081165FC  @ =0x00001732
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	add r6, r4, #0
	mov r8, r2
	mov r10, r3
	mov r9, r1
	ldr r7, _08116600  @ =gUnknown_03003E74
_08116550:
	mov r2, r8
	ldrb r1, [r2]
	ldr r0, _08116604  @ =gUnknown_0817EE34
	add r3, r1, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _081165B4
	ldr r4, _081165E0  @ =0x0000096C
	add r2, r6, r4
	ldr r0, _08116608  @ =gUnknown_0817EDBC
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r5, r10
	strh r0, [r5]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r6, r0
	ldr r0, _0811660C  @ =gUnknown_0817EDF8
	add r1, r1, r0
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _081165F0  @ =0x00000978
	add r0, r6, r2
	ldrh r0, [r0]
	add r0, r0, r1
	sub r4, r4, #8
	add r1, r6, r4
	strh r0, [r1]
	ldrh r0, [r7]
	ldrh r1, [r1]
	ldrh r2, [r5]
	ldrb r3, [r3]
	ldr r5, _08116610  @ =0x00001724
	add r4, r6, r5
	ldrb r5, [r4]
	mov r4, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
_081165B4:
	mov r5, r8
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r1, r9
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08116550
_081165CA:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081165DC:
	.4byte 0x00000E29
_081165E0:
	.4byte 0x0000096C
_081165E4:
	.4byte 0x00000964
_081165E8:
	.4byte gUnknown_0817EE52
_081165EC:
	.4byte 0x000016D5
_081165F0:
	.4byte 0x00000978
_081165F4:
	.4byte 0x000017E1
_081165F8:
	.4byte 0x00000968
_081165FC:
	.4byte 0x00001732
_08116600:
	.4byte gUnknown_03003E74
_08116604:
	.4byte gUnknown_0817EE34
_08116608:
	.4byte gUnknown_0817EDBC
_0811660C:
	.4byte gUnknown_0817EDF8
_08116610:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811646C

