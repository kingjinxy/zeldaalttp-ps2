	THUMB_FUNC_START sub_08084008
sub_08084008: @ 0x08084008
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	cmp r0, #99
	bne _0808401A
	b _080842D8
_0808401A:
	mov r2, #255
	and r2, r2, r0
	add r0, r2, #0
	sub r0, r0, #88
	str r0, [sp]
	ldr r0, _08084068  @ =gRam
	ldr r1, _0808406C  @ =0x0000097C
	add r4, r0, r1
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r4]
	ldr r5, [sp]
	lsl r3, r5, #1
	ldr r6, _08084070  @ =0x00000C52
	add r1, r0, r6
	add r1, r1, r3
	mov r9, r1
	mov r5, #0
	ldrsh r1, [r1, r5]
	cmp r1, #0
	blt _08084046
	b _08084170
_08084046:
	ldr r2, _08084074  @ =gBigKeys
	ldr r1, _08084078  @ =gUnknown_081676B2
	add r6, r0, #0
	ldr r4, _0808407C  @ =0x00000AB2
	add r0, r6, r4
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _08084080
	mov r0, #125
	b _08084708
	.byte 0x00
	.byte 0x00
_08084068:
	.4byte gRam
_0808406C:
	.4byte 0x0000097C
_08084070:
	.4byte 0x00000C52
_08084074:
	.4byte gBigKeys
_08084078:
	.4byte gUnknown_081676B2
_0808407C:
	.4byte 0x00000AB2
_08084080:
	ldr r5, _08084148  @ =gRam
	ldr r6, _0808414C  @ =0x00000AA8
	add r2, r5, r6
	ldr r0, _08084150  @ =gUnknown_081676F2
	add r0, r3, r0
	ldrh r1, [r2]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r2]
	mov r0, r9
	ldrh r1, [r0]
	ldr r4, _08084154  @ =0x00007FFF
	add r0, r4, #0
	and r0, r0, r1
	bl sub_08080380
	asr r7, r0, #1
	lsl r2, r7, #1
	ldr r6, _08084158  @ =gUnknown_02018000
	add r2, r2, r6
	ldr r1, _0808415C  @ =gUnknown_08164520
	mov r8, r1
	ldr r3, _08084160  @ =0x00000B12
	add r5, r5, r3
	ldrh r0, [r5]
	lsr r0, r0, #1
	add r0, r0, #2
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r2, _08084148  @ =gRam
	ldr r3, _08084164  @ =0x00000964
	add r0, r2, r3
	strh r1, [r0]
	mov r0, r9
	ldrh r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	asr r7, r0, #1
	lsl r1, r7, #1
	add r1, r1, r6
	ldrh r0, [r5]
	lsr r0, r0, #1
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08084148  @ =gRam
	ldr r3, _08084168  @ =0x00000968
	add r0, r1, r3
	strh r2, [r0]
	mov r0, r9
	ldrh r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	asr r7, r0, #1
	lsl r1, r7, #1
	add r1, r1, r6
	ldrh r0, [r5]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r1, _08084148  @ =gRam
	ldr r3, _0808416C  @ =0x0000096C
	add r0, r1, r3
	strh r2, [r0]
	mov r1, r9
	ldrh r0, [r1]
	and r4, r4, r0
	add r4, r4, #130
	add r0, r4, #0
	bl sub_08080380
	asr r7, r0, #1
	lsl r1, r7, #1
	add r1, r1, r6
	ldrh r0, [r5]
	lsr r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r2, [r0]
	strh r2, [r1]
	ldr r3, _08084148  @ =gRam
	mov r4, #151
	lsl r4, r4, #4
	add r0, r3, r4
	strh r2, [r0]
	b _080842B8
	.byte 0x00
	.byte 0x00
_08084148:
	.4byte gRam
_0808414C:
	.4byte 0x00000AA8
_08084150:
	.4byte gUnknown_081676F2
_08084154:
	.4byte 0x00007FFF
_08084158:
	.4byte gUnknown_02018000
_0808415C:
	.4byte gUnknown_08164520
_08084160:
	.4byte 0x00000B12
_08084164:
	.4byte 0x00000964
_08084168:
	.4byte 0x00000968
_0808416C:
	.4byte 0x0000096C
_08084170:
	mov r7, #3
	neg r7, r7
	add r0, r2, #0
	sub r0, r0, #87
	strh r0, [r4]
	mov r12, r3
	mov r6, r9
	ldr r5, _08084208  @ =0x00007FFF
	mov r8, r5
	ldr r0, _0808420C  @ =gUnknown_02018000
	mov r9, r0
	ldr r1, _08084210  @ =gUnknown_081659C4
	mov r10, r1
_0808418A:
	add r7, r7, #3
	mov r0, #252
	lsl r0, r0, #1
	cmp r7, r0
	bne _08084196
	b _0808470C
_08084196:
	ldr r4, _08084214  @ =gRam
	ldr r5, _08084218  @ =gUnknown_081532FE
	add r0, r7, r5
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	strb r0, [r2]
	add r0, r7, #1
	add r0, r0, r5
	ldrb r3, [r0]
	mov r0, #127
	and r0, r0, r3
	ldr r1, _0808421C  @ =gUnknown_03002B91
	strb r0, [r1]
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r2, _08084220  @ =0x000009DA
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r1, r0
	bne _0808418A
	ldr r0, _08084224  @ =0x0000097C
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0808418A
	add r0, r7, #2
	add r0, r0, r5
	ldrb r1, [r0]
	sub r2, r2, #98
	add r0, r4, r2
	strh r1, [r0]
	mov r0, #128
	and r0, r0, r3
	cmp r0, #0
	beq _08084234
	ldr r1, _08084228  @ =gUnknown_081676B2
	ldr r3, _0808422C  @ =0x00000AB2
	add r0, r4, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldr r4, _08084230  @ =gBigKeys
	ldrh r1, [r4]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08084202
	b _080846DC
_08084202:
	mov r0, #125
	b _08084708
	.byte 0x00
	.byte 0x00
_08084208:
	.4byte 0x00007FFF
_0808420C:
	.4byte gUnknown_02018000
_08084210:
	.4byte gUnknown_081659C4
_08084214:
	.4byte gRam
_08084218:
	.4byte gUnknown_081532FE
_0808421C:
	.4byte gUnknown_03002B91
_08084220:
	.4byte 0x000009DA
_08084224:
	.4byte 0x0000097C
_08084228:
	.4byte gUnknown_081676B2
_0808422C:
	.4byte 0x00000AB2
_08084230:
	.4byte gBigKeys
_08084234:
	ldr r5, _080842C4  @ =0x00000AA8
	add r2, r4, r5
	ldr r0, _080842C8  @ =gUnknown_081676F2
	add r0, r0, r12
	ldrh r1, [r2]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r2]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r9
	mov r2, r10
	ldrh r1, [r2]
	strh r1, [r0]
	ldr r3, _080842CC  @ =0x00000964
	add r0, r4, r3
	strh r1, [r0]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r9
	mov r5, r10
	ldrh r1, [r5, #2]
	strh r1, [r0]
	ldr r2, _080842D0  @ =0x00000968
	add r0, r4, r2
	strh r1, [r0]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r9
	ldrh r1, [r5, #4]
	strh r1, [r0]
	ldr r3, _080842D4  @ =0x0000096C
	add r0, r4, r3
	strh r1, [r0]
	ldrh r1, [r6]
	mov r0, r8
	and r0, r0, r1
	add r0, r0, #130
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r9
	ldrh r1, [r5, #6]
	strh r1, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	strh r1, [r0]
_080842B8:
	ldr r0, [sp]
	bl sub_08083D64
	mov r0, #1
	b _0808470E
	.byte 0x00
	.byte 0x00
_080842C4:
	.4byte 0x00000AA8
_080842C8:
	.4byte gUnknown_081676F2
_080842CC:
	.4byte 0x00000964
_080842D0:
	.4byte 0x00000968
_080842D4:
	.4byte 0x0000096C
_080842D8:
	ldr r1, _08084478  @ =gRam
	ldr r6, _0808447C  @ =0x00000B6C
	add r3, r1, r6
	ldrb r2, [r3]
	add r0, r2, #0
	cmp r0, #0
	bne _080842E8
	b _08084704
_080842E8:
	cmp r0, #255
	bne _080842EE
	b _080846C8
_080842EE:
	sub r0, r2, #1
	strb r0, [r3]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	ldrh r2, [r0]
	sub r2, r2, #4
	mov r3, #150
	lsl r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	mov r3, #252
	lsl r3, r3, #1
	and r2, r2, r3
	lsl r2, r2, #3
	ldr r4, _08084480  @ =0x0000096C
	add r0, r1, r4
	strh r2, [r0]
	ldr r5, _08084484  @ =0x000016C4
	add r0, r1, r5
	ldrh r0, [r0]
	add r0, r0, #7
	ldr r6, _08084488  @ =0x00000964
	add r1, r1, r6
	strh r0, [r1]
	and r0, r0, r3
	lsr r7, r0, #3
	orr r7, r7, r2
	ldr r1, _0808448C  @ =gUnknown_0200CBA0
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #99
	bne _0808433A
	ldr r2, _08084490  @ =gUnknown_0200CBA1
	add r0, r7, r2
	ldrb r0, [r0]
	cmp r0, #99
	beq _08084350
_0808433A:
	sub r7, r7, #1
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #99
	bne _0808434E
	ldr r3, _08084490  @ =gUnknown_0200CBA1
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #99
	beq _08084350
_0808434E:
	add r7, r7, #2
_08084350:
	ldr r4, _0808448C  @ =gUnknown_0200CBA0
	add r0, r7, r4
	mov r1, #2
	strb r1, [r0]
	ldr r5, _08084490  @ =gUnknown_0200CBA1
	add r0, r7, r5
	strb r1, [r0]
	ldr r6, _08084494  @ =gUnknown_0200CBE0
	add r0, r7, r6
	strb r1, [r0]
	ldr r2, _08084498  @ =gUnknown_0200CBE1
	add r0, r7, r2
	strb r1, [r0]
	ldr r3, _08084478  @ =gRam
	mov r8, r3
	lsl r0, r7, #1
	ldr r4, _0808449C  @ =0x00000978
	add r4, r4, r8
	mov r9, r4
	strh r0, [r4]
	ldrb r2, [r4]
	ldr r1, _080844A0  @ =0x00001732
	add r1, r1, r8
	strb r2, [r1]
	ldr r1, _080844A4  @ =0x00000979
	add r1, r1, r8
	ldrb r2, [r1]
	ldr r1, _080844A8  @ =0x00001733
	add r1, r1, r8
	strb r2, [r1]
	ldr r4, _080844AC  @ =0x00007FFF
	and r0, r0, r4
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	ldr r6, _080844B0  @ =gUnknown_02018000
	add r0, r0, r6
	ldr r5, _080844B4  @ =gUnknown_081659C4
	ldrh r1, [r5]
	strh r1, [r0]
	ldr r0, _08084488  @ =0x00000964
	add r0, r0, r8
	strh r1, [r0]
	mov r0, r9
	ldrh r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r6
	ldrh r1, [r5, #2]
	strh r1, [r0]
	ldr r0, _080844B8  @ =0x00000968
	add r0, r0, r8
	strh r1, [r0]
	mov r2, r9
	ldrh r1, [r2]
	add r0, r4, #0
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r6
	ldrh r1, [r5, #4]
	strh r1, [r0]
	ldr r0, _08084480  @ =0x0000096C
	add r0, r0, r8
	strh r1, [r0]
	mov r3, r9
	ldrh r0, [r3]
	and r4, r4, r0
	add r4, r4, #130
	add r0, r4, #0
	bl sub_08080380
	asr r7, r0, #1
	lsl r0, r7, #1
	add r0, r0, r6
	ldrh r1, [r5, #6]
	strh r1, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r8
	strh r1, [r0]
	ldr r0, _080844BC  @ =gUnknown_02000400
	ldrh r7, [r0]
	mov r4, r9
	ldrh r1, [r4]
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r1
	cmp r0, #0
	beq _080844D8
	ldr r4, _080844C0  @ =0x00001FFF
	and r4, r4, r1
	add r0, r4, #0
	bl sub_08080380
	mov r5, #150
	lsl r5, r5, #4
	add r8, r8, r5
	mov r6, r8
	strh r0, [r6]
	lsl r5, r7, #1
	ldr r2, _080844C4  @ =gUnknown_02000402
	add r1, r5, r2
	ldr r3, _080844C8  @ =0xFFFFA000
	add r6, r3, #0
	add r0, r0, r6
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #128
	bl sub_08080380
	mov r1, r8
	strh r0, [r1]
	ldr r2, _080844CC  @ =gUnknown_02000408
	add r1, r5, r2
	add r0, r0, r6
	strh r0, [r1]
	add r0, r4, #2
	bl sub_08080380
	mov r3, r8
	strh r0, [r3]
	ldr r2, _080844D0  @ =gUnknown_0200040E
	add r1, r5, r2
	add r0, r0, r6
	strh r0, [r1]
	add r4, r4, #130
	add r0, r4, #0
	bl sub_08080380
	mov r3, r8
	strh r0, [r3]
	ldr r4, _080844D4  @ =gUnknown_02000414
	add r1, r5, r4
	add r0, r0, r6
	strh r0, [r1]
	add r4, r5, #0
	b _0808453A
	.byte 0x00
	.byte 0x00
_08084478:
	.4byte gRam
_0808447C:
	.4byte 0x00000B6C
_08084480:
	.4byte 0x0000096C
_08084484:
	.4byte 0x000016C4
_08084488:
	.4byte 0x00000964
_0808448C:
	.4byte gUnknown_0200CBA0
_08084490:
	.4byte gUnknown_0200CBA1
_08084494:
	.4byte gUnknown_0200CBE0
_08084498:
	.4byte gUnknown_0200CBE1
_0808449C:
	.4byte 0x00000978
_080844A0:
	.4byte 0x00001732
_080844A4:
	.4byte 0x00000979
_080844A8:
	.4byte 0x00001733
_080844AC:
	.4byte 0x00007FFF
_080844B0:
	.4byte gUnknown_02018000
_080844B4:
	.4byte gUnknown_081659C4
_080844B8:
	.4byte 0x00000968
_080844BC:
	.4byte gUnknown_02000400
_080844C0:
	.4byte 0x00001FFF
_080844C4:
	.4byte gUnknown_02000402
_080844C8:
	.4byte 0xFFFFA000
_080844CC:
	.4byte gUnknown_02000408
_080844D0:
	.4byte gUnknown_0200040E
_080844D4:
	.4byte gUnknown_02000414
_080844D8:
	mov r5, r9
	mov r6, #0
	ldrsh r0, [r5, r6]
	bl sub_08080380
	mov r6, #150
	lsl r6, r6, #4
	add r6, r6, r8
	strh r0, [r6]
	lsl r4, r7, #1
	ldr r2, _080845B4  @ =gUnknown_02000402
	add r1, r4, r2
	ldr r3, _080845B8  @ =0xFFFFC000
	add r5, r3, #0
	add r0, r0, r5
	strh r0, [r1]
	mov r1, r9
	mov r2, #0
	ldrsh r0, [r1, r2]
	add r0, r0, #128
	bl sub_08080380
	strh r0, [r6]
	ldr r3, _080845BC  @ =gUnknown_02000408
	add r1, r4, r3
	add r0, r0, r5
	strh r0, [r1]
	mov r1, r9
	mov r2, #0
	ldrsh r0, [r1, r2]
	add r0, r0, #2
	bl sub_08080380
	strh r0, [r6]
	ldr r3, _080845C0  @ =gUnknown_0200040E
	add r1, r4, r3
	add r0, r0, r5
	strh r0, [r1]
	mov r1, r9
	mov r2, #0
	ldrsh r0, [r1, r2]
	add r0, r0, #130
	bl sub_08080380
	strh r0, [r6]
	ldr r3, _080845C4  @ =gUnknown_02000414
	add r1, r4, r3
	add r0, r0, r5
	strh r0, [r1]
_0808453A:
	ldr r5, _080845C8  @ =gUnknown_02000404
	add r0, r4, r5
	mov r2, #1
	strh r2, [r0]
	ldr r6, _080845CC  @ =gUnknown_02000406
	add r1, r4, r6
	ldr r5, _080845D0  @ =gRam
	ldr r3, _080845D4  @ =0x00000964
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r6, r6, #4
	add r0, r4, r6
	strh r2, [r0]
	ldr r0, _080845D8  @ =gUnknown_0200040C
	add r1, r4, r0
	add r3, r3, #4
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r6, r6, #6
	add r0, r4, r6
	strh r2, [r0]
	ldr r0, _080845DC  @ =gUnknown_02000412
	add r1, r4, r0
	add r3, r3, #4
	add r0, r5, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r6, r6, #6
	add r0, r4, r6
	strh r2, [r0]
	ldr r0, _080845E0  @ =gUnknown_02000418
	add r1, r4, r0
	mov r2, #151
	lsl r2, r2, #4
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r3, _080845E4  @ =gUnknown_0200041A
	add r1, r4, r3
	ldr r4, _080845E8  @ =0x0000FFFF
	add r0, r4, #0
	strh r0, [r1]
	ldr r1, _080845EC  @ =gUnknown_02000400
	add r0, r7, #0
	add r0, r0, #12
	strh r0, [r1]
	ldr r6, _080845F0  @ =0x000009DA
	add r0, r5, r6
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	cmp r1, r0
	bne _080845F8
	bl GetRandomInt
	mov r7, #15
	and r7, r7, r0
	ldr r0, _080845F4  @ =gUnknown_081534FE
	b _08084660
_080845B4:
	.4byte gUnknown_02000402
_080845B8:
	.4byte 0xFFFFC000
_080845BC:
	.4byte gUnknown_02000408
_080845C0:
	.4byte gUnknown_0200040E
_080845C4:
	.4byte gUnknown_02000414
_080845C8:
	.4byte gUnknown_02000404
_080845CC:
	.4byte gUnknown_02000406
_080845D0:
	.4byte gRam
_080845D4:
	.4byte 0x00000964
_080845D8:
	.4byte gUnknown_0200040C
_080845DC:
	.4byte gUnknown_02000412
_080845E0:
	.4byte gUnknown_02000418
_080845E4:
	.4byte gUnknown_0200041A
_080845E8:
	.4byte 0x0000FFFF
_080845EC:
	.4byte gUnknown_02000400
_080845F0:
	.4byte 0x000009DA
_080845F4:
	.4byte gUnknown_081534FE
_080845F8:
	mov r0, #140
	lsl r0, r0, #1
	cmp r1, r0
	bne _08084614
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	add r7, r1, #0
	add r7, r7, #16
	ldr r0, _08084610  @ =gUnknown_081534FE
	b _08084660
_08084610:
	.4byte gUnknown_081534FE
_08084614:
	bl GetRandomInt
	mov r1, #7
	add r7, r1, #0
	and r7, r7, r0
	cmp r7, #1
	ble _08084630
	ldr r2, _08084650  @ =0x00000A02
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r7, r0
	bne _08084630
	add r7, r7, #1
	and r7, r7, r1
_08084630:
	cmp r7, #7
	bne _0808465E
	ldr r0, _08084654  @ =gRam
	ldr r4, _08084658  @ =0x00000AA8
	add r3, r0, r4
	ldrh r1, [r3]
	mov r2, #128
	lsl r2, r2, #7
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0808465C
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r3]
	b _0808465E
_08084650:
	.4byte 0x00000A02
_08084654:
	.4byte gRam
_08084658:
	.4byte 0x00000AA8
_0808465C:
	mov r7, #0
_0808465E:
	ldr r0, _080846A8  @ =gUnknown_081534F6
_08084660:
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _080846AC  @ =gRam
	ldr r5, _080846B0  @ =0x00000A02
	add r0, r3, r5
	strb r7, [r0]
	ldr r6, _080846B4  @ =0x00000978
	add r0, r3, r6
	strh r1, [r0]
	ldr r1, _080846B8  @ =0x000016C4
	add r0, r3, r1
	ldr r2, _080846BC  @ =0x00000952
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r4, _080846C0  @ =0x00000504
	add r1, r3, r4
	strh r0, [r1]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r3, r5
	sub r6, r6, #32
	add r2, r3, r6
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r2, _080846C4  @ =0x00000506
	add r3, r3, r2
	strh r0, [r3]
	mov r0, #16
	bl sub_0812A324
	mov r0, #1
	b _0808470E
	.byte 0x00
	.byte 0x00
_080846A8:
	.4byte gUnknown_081534F6
_080846AC:
	.4byte gRam
_080846B0:
	.4byte 0x00000A02
_080846B4:
	.4byte 0x00000978
_080846B8:
	.4byte 0x000016C4
_080846BC:
	.4byte 0x00000952
_080846C0:
	.4byte 0x00000504
_080846C4:
	.4byte 0x00000506
_080846C8:
	ldr r3, _080846D4  @ =0x00000A02
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080846D8  @ =0x00000165
	b _08084708
	.byte 0x00
	.byte 0x00
_080846D4:
	.4byte 0x00000A02
_080846D8:
	.4byte 0x00000165
_080846DC:
	ldr r4, [sp]
	lsl r0, r4, #1
	ldr r5, _080846F8  @ =gRam
	ldr r6, _080846FC  @ =0x00000C52
	add r1, r5, r6
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _08084700  @ =0x00007FFF
	and r0, r0, r1
	add r1, r4, #0
	bl sub_08083C08
	mov r0, #1
	b _0808470E
_080846F8:
	.4byte gRam
_080846FC:
	.4byte 0x00000C52
_08084700:
	.4byte 0x00007FFF
_08084704:
	mov r0, #179
	lsl r0, r0, #1
_08084708:
	bl sub_080AF4FC
_0808470C:
	mov r0, #0
_0808470E:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08084008

	.byte 0x00
	.byte 0x00
