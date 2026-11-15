	THUMB_FUNC_START sub_08120028
sub_08120028: @ 0x08120028
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08120108  @ =gRam
	ldr r1, _0812010C  @ =gUnknown_02006894
	ldrh r2, [r1]
	ldr r1, _08120110  @ =0x0000FFFF
	add r2, r2, r1
	ldr r4, _08120114  @ =0x00000958
	add r1, r3, r4
	ldrh r1, [r1]
	sub r2, r2, r1
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r3
	mov r8, r1
	mov r6, #0
	strh r2, [r1]
	ldr r1, _08120118  @ =gUnknown_02006896
	ldrh r2, [r1]
	ldr r4, _0812011C  @ =0x0000FFF8
	add r2, r2, r4
	ldr r4, _08120120  @ =0x00000952
	add r1, r3, r4
	ldrh r1, [r1]
	sub r2, r2, r1
	ldr r1, _08120124  @ =0x00000964
	add r4, r3, r1
	strh r2, [r4]
	add r1, r1, #4
	add r5, r3, r1
	strh r2, [r5]
	mov r2, #151
	lsl r2, r2, #4
	add r1, r3, r2
	strh r6, [r1]
	ldr r2, _08120128  @ =0x00000E29
	add r1, r3, r2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	ldr r2, _0812012C  @ =0x0000096C
	add r1, r3, r2
	strb r0, [r1]
	ldr r7, _08120130  @ =gUnknown_03003E74
	add r6, r4, #0
	mov r9, r8
	mov r10, r5
	mov r8, r1
_08120094:
	ldrh r0, [r7]
	ldrh r1, [r6]
	mov r3, r9
	ldrh r2, [r3]
	ldr r3, _08120134  @ =gUnknown_08180120
	mov r4, r8
	mov r5, #0
	ldrsb r5, [r4, r5]
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _08120138  @ =gUnknown_08180128
	add r5, r5, r4
	ldrb r4, [r5]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C1918
	lsl r0, r0, #24
	lsr r0, r0, #24
	strh r0, [r7]
	ldrh r0, [r6]
	add r0, r0, #16
	strh r0, [r6]
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r2, _08120108  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r1, r2, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #4
	beq _0812013C
	cmp r0, #2
	bne _08120094
	mov r4, r9
	ldrh r0, [r4]
	add r0, r0, #16
	strh r0, [r4]
	mov r1, r10
	ldrh r0, [r1]
	strh r0, [r6]
	b _08120094
	.byte 0x00
	.byte 0x00
_08120108:
	.4byte gRam
_0812010C:
	.4byte gUnknown_02006894
_08120110:
	.4byte 0x0000FFFF
_08120114:
	.4byte 0x00000958
_08120118:
	.4byte gUnknown_02006896
_0812011C:
	.4byte 0x0000FFF8
_08120120:
	.4byte 0x00000952
_08120124:
	.4byte 0x00000964
_08120128:
	.4byte 0x00000E29
_0812012C:
	.4byte 0x0000096C
_08120130:
	.4byte gUnknown_03003E74
_08120134:
	.4byte gUnknown_08180120
_08120138:
	.4byte gUnknown_08180128
_0812013C:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08120028

