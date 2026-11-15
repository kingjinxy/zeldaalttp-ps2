	THUMB_FUNC_START sub_08108654
sub_08108654: @ 0x08108654
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _08108850  @ =gRam
	ldr r1, _08108854  @ =0x00000D94
	add r0, r4, r1
	add r3, r5, r0
	ldrb r0, [r3]
	mov r7, #48
	mov r6, #0
	mov r2, #0
	mov r8, r2
	add r2, r7, #0
	orr r2, r2, r0
	strb r2, [r3]
	ldr r1, _08108858  @ =0x00000F52
	add r0, r4, r1
	add r0, r0, r5
	mov r9, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08108692
	orr r2, r2, r7
	strb r2, [r3]
_08108692:
	ldr r2, _0810885C  @ =0x00000F92
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _08108860  @ =gUnknown_0817BFFC
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #4
	bl sub_080C9480
	ldr r1, _08108864  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
	ldr r3, _08108868  @ =0x000015FA
	add r1, r4, r3
	mov r7, r8
	strb r7, [r1]
	ldr r2, _0810886C  @ =0x00001092
	add r0, r4, r2
	add r0, r5, r0
	ldrb r3, [r0]
	cmp r8, r3
	bne _081086C6
	b _081088F8
_081086C6:
	add r6, r4, #0
	mov r8, r1
	str r0, [sp]
	ldr r4, _08108870  @ =0x00001624
	add r4, r4, r6
	mov r10, r4
_081086D2:
	ldr r7, _08108874  @ =0x00001052
	add r1, r6, r7
	add r1, r5, r1
	ldr r2, _08108878  @ =gUnknown_0817C1FC
	mov r3, r8
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	mov r0, #127
	and r1, r1, r0
	ldr r4, _0810887C  @ =gUnknown_0200EC18
	add r0, r1, r4
	ldrb r0, [r0]
	ldr r7, _08108880  @ =gUnknown_03003852
	strb r0, [r7]
	ldr r2, _08108884  @ =gUnknown_0200EC98
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r4, _08108888  @ =0x00001623
	add r3, r6, r4
	strb r0, [r3]
	ldr r7, _0810888C  @ =gUnknown_0200ED18
	add r0, r1, r7
	ldrb r0, [r0]
	mov r2, r10
	strb r0, [r2]
	ldr r4, _08108890  @ =gUnknown_0200ED98
	add r1, r1, r4
	ldrb r0, [r1]
	ldr r7, _08108894  @ =0x00001625
	add r4, r6, r7
	strb r0, [r4]
	ldr r0, _08108898  @ =0x000016C4
	add r2, r6, r0
	ldr r7, _08108880  @ =gUnknown_03003852
	ldrb r1, [r7]
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bhi _081087A8
	mov r0, #182
	lsl r0, r0, #5
	add r2, r6, r0
	mov r3, r10
	ldrb r1, [r3]
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bhi _081087A8
	mov r4, r9
	ldrb r1, [r4]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _081087A8
	ldr r7, _0810889C  @ =0x000017AA
	add r0, r6, r7
	ldr r1, _081088A0  @ =0x0000180D
	add r2, r6, r1
	ldrb r1, [r0]
	ldrb r0, [r2]
	orr r1, r1, r0
	ldr r2, _081088A4  @ =0x000009AD
	add r0, r6, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r3, _081088A8  @ =0x00001605
	add r0, r6, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _081087A8
	ldr r4, _081088AC  @ =0x00001702
	add r1, r6, r4
	mov r0, #1
	strb r0, [r1]
	add r7, r7, #91
	add r1, r6, r7
	mov r0, #8
	strb r0, [r1]
	ldr r0, _081088B0  @ =0x000016F8
	add r1, r6, r0
	mov r0, #16
	strb r0, [r1]
	ldr r2, _081088B4  @ =0x000016CE
	add r1, r6, r2
	ldrb r0, [r1]
	mvn r0, r0
	strb r0, [r1]
	ldr r3, _081088B8  @ =gUnknown_030038FD
	ldrb r0, [r3]
	mvn r0, r0
	strb r0, [r3]
_081087A8:
	ldr r0, _08108864  @ =gUnknown_03003E74
	ldrh r2, [r0]
	lsl r2, r2, #3
	ldr r4, _08108850  @ =gRam
	add r2, r2, r4
	ldr r7, _081088BC  @ =0x00000552
	add r2, r2, r7
	ldrh r4, [r2]
	lsl r1, r4, #23
	ldr r3, _081088C0  @ =gUnknown_0817C22C
	mov r7, r8
	ldrb r0, [r7]
	add r0, r0, r3
	lsr r1, r1, #23
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r3, _081088C4  @ =0x000001FF
	add r0, r3, #0
	and r1, r1, r0
	ldr r7, _081088C8  @ =0xFFFFFE00
	add r0, r7, #0
	and r4, r4, r0
	orr r4, r4, r1
	strh r4, [r2]
	ldr r0, _081088CC  @ =gUnknown_03003352
	add r4, r5, r0
	mov r7, #0
	mov r0, #1
	strb r0, [r4]
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #4
	bne _08108800
	mov r2, r9
	ldrb r0, [r2]
	cmp r0, #0
	beq _08108800
	add r0, r5, #0
	bl sub_0810890C
	ldrb r0, [r4]
	mov r1, #14
	orr r0, r0, r1
	strb r0, [r4]
_08108800:
	ldr r2, _08108850  @ =gRam
	ldr r3, _0810885C  @ =0x00000F92
	add r0, r2, r3
	add r3, r5, r0
	ldr r1, _081088D0  @ =gUnknown_0817C214
	mov r4, r8
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r4, #0
	strb r0, [r3]
	cmp r0, #3
	bne _081088D4
	mov r0, #8
	strb r0, [r3]
	mov r7, r9
	ldrb r1, [r7]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08108838
	ldr r1, _08108854  @ =0x00000D94
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #48
	orr r1, r1, r2
	strb r1, [r0]
_08108838:
	ldrb r1, [r3]
	lsl r1, r1, #5
	ldr r0, _08108860  @ =gUnknown_0817BFFC
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #4
	bl sub_080C9480
	ldr r1, _08108864  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #4
	b _081088E0
_08108850:
	.4byte gRam
_08108854:
	.4byte 0x00000D94
_08108858:
	.4byte 0x00000F52
_0810885C:
	.4byte 0x00000F92
_08108860:
	.4byte gUnknown_0817BFFC
_08108864:
	.4byte gUnknown_03003E74
_08108868:
	.4byte 0x000015FA
_0810886C:
	.4byte 0x00001092
_08108870:
	.4byte 0x00001624
_08108874:
	.4byte 0x00001052
_08108878:
	.4byte gUnknown_0817C1FC
_0810887C:
	.4byte gUnknown_0200EC18
_08108880:
	.4byte gUnknown_03003852
_08108884:
	.4byte gUnknown_0200EC98
_08108888:
	.4byte 0x00001623
_0810888C:
	.4byte gUnknown_0200ED18
_08108890:
	.4byte gUnknown_0200ED98
_08108894:
	.4byte 0x00001625
_08108898:
	.4byte 0x000016C4
_0810889C:
	.4byte 0x000017AA
_081088A0:
	.4byte 0x0000180D
_081088A4:
	.4byte 0x000009AD
_081088A8:
	.4byte 0x00001605
_081088AC:
	.4byte 0x00001702
_081088B0:
	.4byte 0x000016F8
_081088B4:
	.4byte 0x000016CE
_081088B8:
	.4byte gUnknown_030038FD
_081088BC:
	.4byte 0x00000552
_081088C0:
	.4byte gUnknown_0817C22C
_081088C4:
	.4byte 0x000001FF
_081088C8:
	.4byte 0xFFFFFE00
_081088CC:
	.4byte gUnknown_03003352
_081088D0:
	.4byte gUnknown_0817C214
_081088D4:
	add r0, r5, #0
	bl sub_080C6240
	ldr r1, _08108908  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #1
_081088E0:
	strh r0, [r1]
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, [sp]
	ldrb r3, [r3]
	cmp r0, r3
	beq _081088F8
	b _081086D2
_081088F8:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08108908:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_08108654

