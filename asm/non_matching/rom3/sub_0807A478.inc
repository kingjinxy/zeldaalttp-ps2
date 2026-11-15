	THUMB_FUNC_START sub_0807A478
sub_0807A478: @ 0x0807A478
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r2, _0807A5D4  @ =gRam
	ldr r1, _0807A5D8  @ =0x0000097C
	add r0, r2, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	ldr r4, _0807A5DC  @ =0x000009E6
	add r1, r2, r4
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldr r0, _0807A5E0  @ =0x00000A4C
	add r3, r2, r0
	mov r0, #0
	strh r0, [r3]
	sub r4, r4, #110
	add r1, r2, r4
	ldr r0, _0807A5E4  @ =0x00005858
	strh r0, [r1]
	ldr r0, _0807A5E8  @ =gUnknown_02000400
	ldrh r0, [r0]
	str r0, [sp]
	add r6, r2, #0
	add r7, r3, #0
	ldr r0, _0807A5EC  @ =0x00000C52
	add r0, r0, r6
	mov r8, r0
	ldr r1, _0807A5F0  @ =0x00007FFF
	mov r10, r1
	ldr r2, [sp]
	lsl r0, r2, #1
	ldr r3, _0807A5F4  @ =gUnknown_02000402
	add r5, r0, r3
	sub r4, r4, #24
	add r4, r4, r6
	mov r9, r4
_0807A4CA:
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	bl sub_08080380
	add r4, r0, #0
	asr r4, r4, #1
	lsl r2, r4, #1
	ldr r1, _0807A5F8  @ =gUnknown_02018000
	add r0, r2, r1
	ldr r3, _0807A5FC  @ =gUnknown_081659BC
	ldrh r1, [r3]
	strh r1, [r0]
	ldr r4, _0807A600  @ =0x00000964
	add r0, r6, r4
	strh r1, [r0]
	ldr r1, _0807A604  @ =gUnknown_02018040
	add r0, r2, r1
	ldrh r1, [r3, #2]
	strh r1, [r0]
	ldr r3, _0807A608  @ =0x00000968
	add r0, r6, r3
	strh r1, [r0]
	ldr r4, _0807A60C  @ =gUnknown_02018002
	add r0, r2, r4
	ldr r3, _0807A5FC  @ =gUnknown_081659BC
	ldrh r1, [r3, #4]
	strh r1, [r0]
	ldr r4, _0807A610  @ =0x0000096C
	add r0, r6, r4
	strh r1, [r0]
	ldr r0, _0807A614  @ =gUnknown_02018042
	add r2, r2, r0
	ldrh r1, [r3, #6]
	strh r1, [r2]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	lsr r4, r0, #1
	ldr r3, _0807A618  @ =gUnknown_0200CBA0
	add r1, r4, r3
	ldr r0, _0807A61C  @ =0x00000978
	add r3, r6, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r2, _0807A620  @ =gUnknown_0200CBA1
	add r1, r4, r2
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _0807A624  @ =gUnknown_0200CBE0
	add r1, r4, r0
	ldr r0, _0807A628  @ =0x00000979
	add r2, r6, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _0807A62C  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _0807A630  @ =0x00000101
	add r0, r1, #0
	ldrh r2, [r3]
	add r0, r0, r2
	strh r0, [r3]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0807A63C
	ldr r0, _0807A634  @ =0x00001FFF
	and r0, r0, r1
	bl sub_08080380
	mov r4, r9
	strh r0, [r4]
	ldr r1, _0807A638  @ =0xFFFFA000
	add r4, r1, #0
	add r0, r0, r4
	strh r0, [r5]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	ldr r0, _0807A634  @ =0x00001FFF
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	mov r2, r9
	strh r0, [r2]
	add r0, r0, r4
	strh r0, [r5, #6]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	ldr r0, _0807A634  @ =0x00001FFF
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	mov r3, r9
	strh r0, [r3]
	add r0, r0, r4
	strh r0, [r5, #12]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	ldr r0, _0807A634  @ =0x00001FFF
	and r0, r0, r1
	add r0, r0, #130
	bl sub_08080380
	mov r1, r9
	strh r0, [r1]
	b _0807A69A
	.byte 0x00
	.byte 0x00
_0807A5D4:
	.4byte gRam
_0807A5D8:
	.4byte 0x0000097C
_0807A5DC:
	.4byte 0x000009E6
_0807A5E0:
	.4byte 0x00000A4C
_0807A5E4:
	.4byte 0x00005858
_0807A5E8:
	.4byte gUnknown_02000400
_0807A5EC:
	.4byte 0x00000C52
_0807A5F0:
	.4byte 0x00007FFF
_0807A5F4:
	.4byte gUnknown_02000402
_0807A5F8:
	.4byte gUnknown_02018000
_0807A5FC:
	.4byte gUnknown_081659BC
_0807A600:
	.4byte 0x00000964
_0807A604:
	.4byte gUnknown_02018040
_0807A608:
	.4byte 0x00000968
_0807A60C:
	.4byte gUnknown_02018002
_0807A610:
	.4byte 0x0000096C
_0807A614:
	.4byte gUnknown_02018042
_0807A618:
	.4byte gUnknown_0200CBA0
_0807A61C:
	.4byte 0x00000978
_0807A620:
	.4byte gUnknown_0200CBA1
_0807A624:
	.4byte gUnknown_0200CBE0
_0807A628:
	.4byte 0x00000979
_0807A62C:
	.4byte gUnknown_0200CBE1
_0807A630:
	.4byte 0x00000101
_0807A634:
	.4byte 0x00001FFF
_0807A638:
	.4byte 0xFFFFA000
_0807A63C:
	mov r0, r10
	and r0, r0, r1
	bl sub_08080380
	mov r2, r9
	strh r0, [r2]
	ldr r3, _0807A714  @ =0xFFFFC000
	add r4, r3, #0
	add r0, r0, r4
	strh r0, [r5]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	add r0, r0, #128
	bl sub_08080380
	mov r1, r9
	strh r0, [r1]
	add r0, r0, r4
	strh r0, [r5, #6]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	add r0, r0, #2
	bl sub_08080380
	mov r2, r9
	strh r0, [r2]
	add r0, r0, r4
	strh r0, [r5, #12]
	ldrh r0, [r7]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r1, [r0]
	mov r0, r10
	and r0, r0, r1
	add r0, r0, #130
	bl sub_08080380
	mov r3, r9
	strh r0, [r3]
_0807A69A:
	add r0, r0, r4
	strh r0, [r5, #18]
	mov r1, #1
	strh r1, [r5, #2]
	ldr r4, _0807A718  @ =0x00000964
	add r2, r6, r4
	ldrh r0, [r2]
	strh r0, [r5, #4]
	strh r1, [r5, #8]
	ldr r3, _0807A71C  @ =0x00000968
	add r0, r6, r3
	ldrh r0, [r0]
	strh r0, [r5, #10]
	strh r1, [r5, #14]
	add r4, r4, #8
	add r0, r6, r4
	ldrh r0, [r0]
	strh r0, [r5, #16]
	strh r1, [r5, #20]
	mov r1, #151
	lsl r1, r1, #4
	add r0, r6, r1
	ldrh r0, [r0]
	strh r0, [r5, #22]
	ldr r3, _0807A720  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r5, #24]
	add r5, r5, #24
	ldr r4, [sp]
	add r4, r4, #12
	str r4, [sp]
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _0807A724  @ =gUnknown_03002D6E
	ldrh r1, [r1]
	cmp r0, r1
	beq _0807A6EC
	b _0807A4CA
_0807A6EC:
	mov r1, #0
	ldr r0, _0807A728  @ =gUnknown_02000400
	strh r4, [r0]
	add r0, r2, #0
	add r0, r0, #232
	strh r1, [r0]
	ldr r4, _0807A72C  @ =0xFFFFFBA0
	add r1, r2, r4
	mov r0, #124
	bl sub_0812A324
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
_0807A714:
	.4byte 0xFFFFC000
_0807A718:
	.4byte 0x00000964
_0807A71C:
	.4byte 0x00000968
_0807A720:
	.4byte 0x0000FFFF
_0807A724:
	.4byte gUnknown_03002D6E
_0807A728:
	.4byte gUnknown_02000400
_0807A72C:
	.4byte 0xFFFFFBA0
	THUMB_FUNC_END sub_0807A478

