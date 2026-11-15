	THUMB_FUNC_START sub_08110450
sub_08110450: @ 0x08110450
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r4, sp
	add r4, r4, #5
	add r0, sp, #4
	add r1, r4, #0
	add r2, r7, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08110476
	b _0811066C
_08110476:
	ldrb r0, [r4]
	cmp r0, #1
	bne _0811047E
	b _0811066C
_0811047E:
	ldr r1, _0811067C  @ =gRam
	ldr r2, _08110680  @ =0x00000FB2
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, #255
	ldr r3, _08110684  @ =0x0000096C
	add r2, r1, r3
	strb r0, [r2]
	mov r4, #1
	str r4, [sp, #8]
	add r4, r1, #0
	mov r10, r2
	ldr r0, _08110688  @ =gUnknown_03003E74
	mov r9, r0
_0811049C:
	mov r1, r10
	ldrb r0, [r1]
	mov r2, #15
	and r2, r2, r0
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r4
	mov r8, r3
	ldr r0, _0811068C  @ =gUnknown_0817D444
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	add r0, r6, #0
	and r0, r0, r1
	ldr r3, _08110690  @ =0x0000097C
	add r1, r4, r3
	strh r0, [r1]
	ldr r0, _08110694  @ =gUnknown_0817D464
	add r2, r2, r0
	ldrh r0, [r2]
	ldr r1, _08110698  @ =gUnknown_03002B94
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	mov r2, r9
	ldrh r0, [r2]
	sub r3, r3, #19
	add r1, r4, r3
	mov r3, #0
	ldrsb r3, [r1, r3]
	lsl r3, r3, #8
	ldr r2, _0811069C  @ =0x0000011D
	add r1, r2, #0
	orr r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r2, _081106A0  @ =gUnknown_03002BAD
	ldrb r1, [r2]
	str r1, [sp]
	add r1, r6, #0
	add r2, r5, #0
	bl sub_080C6368
	mov r3, r9
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	mov r1, r10
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	ldr r2, [sp, #8]
	lsl r0, r2, #24
	mov r3, #255
	lsl r3, r3, #24
	add r0, r0, r3
	lsr r1, r0, #24
	str r1, [sp, #8]
	cmp r0, #0
	bge _0811049C
	ldr r0, _081106A4  @ =0x000006F2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r2, [r0]
	mov r1, #31
	ldr r0, _081106A8  @ =gUnknown_0817D3F4
	add r0, r7, r0
	and r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r3, _081106AC  @ =gUnknown_0200EC18
	add r2, r1, r3
	ldr r0, _081106B0  @ =0x00000582
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r4, _081106B4  @ =gUnknown_0200EC98
	add r2, r1, r4
	ldr r0, _081106B8  @ =0x000005A2
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _081106BC  @ =gUnknown_0200ED18
	add r2, r1, r0
	ldr r0, _081106C0  @ =0x00000572
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _081106C4  @ =gUnknown_0200ED98
	add r1, r1, r2
	ldr r0, _081106C8  @ =0x00000592
	add r0, r0, r8
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #2
	mov r3, r8
	strb r0, [r3, #12]
	ldr r7, _081106CC  @ =0xFFFFF6A0
	add r7, r7, r8
	mov r4, #12
	add r4, r4, r8
	mov r9, r4
	ldr r0, _08110698  @ =gUnknown_03002B94
	mov r10, r0
	ldr r1, _08110688  @ =gUnknown_03003E74
	mov r8, r1
_0811058C:
	mov r2, r9
	ldrb r4, [r2]
	ldr r3, _081106D0  @ =0x000015DC
	add r0, r7, r3
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, _081106D4  @ =0x00001052
	add r1, r7, r0
	add r1, r2, r1
	ldr r0, _081106D8  @ =gUnknown_0817D441
	add r0, r4, r0
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	mov r3, #31
	ldr r1, _081106A8  @ =gUnknown_0817D3F4
	add r2, r2, r1
	and r0, r0, r3
	ldrb r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r2, _081106AC  @ =gUnknown_0200EC18
	add r1, r0, r2
	ldrb r1, [r1]
	ldr r3, _081106DC  @ =gUnknown_03002B90
	strb r1, [r3]
	add r2, r2, #128
	add r1, r0, r2
	ldrb r2, [r1]
	ldr r3, _081106E0  @ =0x00000961
	add r1, r7, r3
	strb r2, [r1]
	ldr r2, _081106BC  @ =gUnknown_0200ED18
	add r1, r0, r2
	ldrb r1, [r1]
	mov r3, r10
	strb r1, [r3]
	ldr r1, _081106C4  @ =gUnknown_0200ED98
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _081106E4  @ =0x00000965
	add r0, r7, r2
	strb r1, [r0]
	ldr r3, _081106E8  @ =0x00000952
	add r0, r7, r3
	ldr r2, _081106DC  @ =gUnknown_03002B90
	ldrh r1, [r2]
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r2, _081106EC  @ =gUnknown_0817D438
	lsl r4, r4, #24
	asr r4, r4, #24
	lsl r0, r4, #1
	add r0, r0, r2
	ldrh r2, [r0]
	add r1, r2, r1
	lsl r1, r1, #16
	lsr r6, r1, #16
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	add r0, r6, #0
	and r0, r0, r1
	ldr r3, _08110690  @ =0x0000097C
	add r1, r7, r3
	strh r0, [r1]
	ldr r0, _081106F0  @ =0x00000958
	add r1, r7, r0
	mov r3, r10
	ldrh r0, [r3]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r5, r2, #16
	mov r1, r8
	ldrh r0, [r1]
	ldr r1, _081106F4  @ =gUnknown_0817D434
	add r1, r4, r1
	ldrb r3, [r1]
	ldr r2, _081106F8  @ =0x00000969
	add r1, r7, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	orr r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r1, _081106FC  @ =gUnknown_0817D43E
	add r4, r4, r1
	ldrb r2, [r4]
	ldr r4, _081106A0  @ =gUnknown_03002BAD
	ldrb r1, [r4]
	orr r1, r1, r2
	str r1, [sp]
	add r1, r6, #0
	add r2, r5, #0
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r2, r9
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811058C
_0811066C:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811067C:
	.4byte gRam
_08110680:
	.4byte 0x00000FB2
_08110684:
	.4byte 0x0000096C
_08110688:
	.4byte gUnknown_03003E74
_0811068C:
	.4byte gUnknown_0817D444
_08110690:
	.4byte 0x0000097C
_08110694:
	.4byte gUnknown_0817D464
_08110698:
	.4byte gUnknown_03002B94
_0811069C:
	.4byte 0x0000011D
_081106A0:
	.4byte gUnknown_03002BAD
_081106A4:
	.4byte 0x000006F2
_081106A8:
	.4byte gUnknown_0817D3F4
_081106AC:
	.4byte gUnknown_0200EC18
_081106B0:
	.4byte 0x00000582
_081106B4:
	.4byte gUnknown_0200EC98
_081106B8:
	.4byte 0x000005A2
_081106BC:
	.4byte gUnknown_0200ED18
_081106C0:
	.4byte 0x00000572
_081106C4:
	.4byte gUnknown_0200ED98
_081106C8:
	.4byte 0x00000592
_081106CC:
	.4byte 0xFFFFF6A0
_081106D0:
	.4byte 0x000015DC
_081106D4:
	.4byte 0x00001052
_081106D8:
	.4byte gUnknown_0817D441
_081106DC:
	.4byte gUnknown_03002B90
_081106E0:
	.4byte 0x00000961
_081106E4:
	.4byte 0x00000965
_081106E8:
	.4byte 0x00000952
_081106EC:
	.4byte gUnknown_0817D438
_081106F0:
	.4byte 0x00000958
_081106F4:
	.4byte gUnknown_0817D434
_081106F8:
	.4byte 0x00000969
_081106FC:
	.4byte gUnknown_0817D43E
	THUMB_FUNC_END sub_08110450

