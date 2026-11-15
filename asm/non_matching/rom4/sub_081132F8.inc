	THUMB_FUNC_START sub_081132F8
sub_081132F8: @ 0x081132F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08113354  @ =gRam
	ldr r2, _08113358  @ =0x00001042
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r7, r1, #0
	cmp r0, #0
	beq _08113332
	ldr r3, _0811335C  @ =0x00000F12
	add r0, r7, r3
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r5, _08113360  @ =0x00000F22
	add r0, r7, r5
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08113364  @ =0x00000F62
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
_08113332:
	ldr r2, _08113368  @ =0x00000F72
	add r0, r7, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08113374
	ldr r3, _0811336C  @ =0x00001152
	add r0, r7, r3
	add r0, r4, r0
	ldr r5, _08113370  @ =0x00000FC2
	add r1, r7, r5
	add r1, r4, r1
	ldrb r1, [r1]
	neg r1, r1
	lsl r1, r1, #1
	strb r1, [r0]
	b _081133B4
_08113354:
	.4byte gRam
_08113358:
	.4byte 0x00001042
_0811335C:
	.4byte 0x00000F12
_08113360:
	.4byte 0x00000F22
_08113364:
	.4byte 0x00000F62
_08113368:
	.4byte 0x00000F72
_0811336C:
	.4byte 0x00001152
_08113370:
	.4byte 0x00000FC2
_08113374:
	cmp r0, #1
	bne _081133B4
	ldr r1, _08113424  @ =0x00001142
	add r0, r7, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _081133A0
	ldr r0, _08113428  @ =0x00001152
	add r2, r7, r0
	add r2, r4, r2
	ldr r1, _0811342C  @ =gUnknown_0817D852
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r5, _08113430  @ =0x00000FC2
	add r0, r7, r5
	add r0, r4, r0
	ldrb r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #2
	strb r1, [r2]
_081133A0:
	mov r0, #0
	ldrsb r0, [r3, r0]
	cmp r0, #0
	ble _081133B4
	ldr r1, _08113428  @ =0x00001152
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	strb r1, [r3]
_081133B4:
	add r6, r7, #0
	ldr r2, _08113430  @ =0x00000FC2
	add r0, r6, r2
	add r0, r0, r4
	mov r8, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _081134B0
	ldr r3, _08113434  @ =0x00000F72
	add r1, r6, r3
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _0811342C  @ =gUnknown_0817D852
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	mov r2, r8
	strb r0, [r2]
	ldrb r1, [r1]
	mov r9, r1
	cmp r1, #2
	bne _081134B0
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
	ldr r3, _08113438  @ =gUnknown_02010993
	mov r10, r3
	strb r5, [r3]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _08113408
	ldr r1, _0811343C  @ =0x00000F62
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
_08113408:
	ldr r2, _0811343C  @ =0x00000F62
	add r0, r6, r2
	add r3, r4, r0
	ldrb r2, [r3]
	cmp r2, #0
	beq _08113480
	ldr r0, _08113440  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #3
	bne _08113444
	add r0, r4, #0
	bl sub_0811223C
	b _081134B0
_08113424:
	.4byte 0x00001142
_08113428:
	.4byte 0x00001152
_0811342C:
	.4byte gUnknown_0817D852
_08113430:
	.4byte 0x00000FC2
_08113434:
	.4byte 0x00000F72
_08113438:
	.4byte gUnknown_02010993
_0811343C:
	.4byte 0x00000F62
_08113440:
	.4byte gUnknown_02010992
_08113444:
	strb r5, [r3]
	ldr r3, _08113470  @ =0x00000F92
	add r0, r6, r3
	add r0, r4, r0
	strb r5, [r0]
	ldr r0, _08113474  @ =gUnknown_02010990
	mov r5, r9
	strb r5, [r0]
	ldr r1, _08113478  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #6
	strb r1, [r0]
	ldr r2, _0811347C  @ =0x00000EA5
	add r1, r6, r2
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #7
	b _081134AE
	.byte 0x00
	.byte 0x00
_08113470:
	.4byte 0x00000F92
_08113474:
	.4byte gUnknown_02010990
_08113478:
	.4byte 0x00000F52
_0811347C:
	.4byte 0x00000EA5
_08113480:
	mov r1, #5
	strb r2, [r3]
	ldr r3, _081134C0  @ =0x00000F92
	add r0, r7, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r5, _081134C4  @ =0x00000F52
	add r0, r7, r5
	add r0, r4, r0
	strb r2, [r0]
	mov r0, r8
	strb r1, [r0]
	ldr r0, _081134C8  @ =gUnknown_02010990
	strb r2, [r0]
	mov r1, r10
	strb r2, [r1]
	ldr r2, _081134CC  @ =0x00000EA5
	add r1, r7, r2
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
_081134AE:
	strb r0, [r1]
_081134B0:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081134C0:
	.4byte 0x00000F92
_081134C4:
	.4byte 0x00000F52
_081134C8:
	.4byte gUnknown_02010990
_081134CC:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_081132F8

