	THUMB_FUNC_START sub_08093EB0
sub_08093EB0: @ 0x08093EB0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _08093FA4  @ =gRam
	ldr r1, _08093FA8  @ =gUnknown_03003906
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _08093EC8
	b _08094050
_08093EC8:
	ldr r2, _08093FAC  @ =0x000016D7
	add r7, r4, r2
	mov r2, #0
	ldrsb r2, [r7, r2]
	cmp r2, #0
	bne _08093ED6
	b _08094050
_08093ED6:
	ldr r3, _08093FB0  @ =gPlayerXPosition
	ldrb r0, [r3]
	ldr r1, _08093FB4  @ =gUnknown_03003998
	strb r0, [r1]
	ldr r3, _08093FB8  @ =0x000016C1
	add r0, r4, r3
	ldrb r1, [r0]
	add r3, r3, #168
	add r0, r4, r3
	strb r1, [r0]
	ldr r0, _08093FBC  @ =0x000016C4
	add r6, r4, r0
	ldrb r0, [r6]
	ldr r1, _08093FC0  @ =0x00001764
	add r5, r4, r1
	strb r0, [r5]
	sub r3, r3, #164
	add r0, r4, r3
	ldrb r1, [r0]
	add r3, r3, #160
	add r0, r4, r3
	strb r1, [r0]
	mov r3, #4
	cmp r2, #0
	blt _08093F0A
	mov r3, #6
_08093F0A:
	add r0, r3, #0
	bl sub_0809EB58
	ldr r0, _08093FC4  @ =0x00000978
	add r0, r0, r4
	mov r10, r0
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	bne _08093F22
	b _08094050
_08093F22:
	bl sub_08093CF8
	ldr r1, _08093FC8  @ =0x0000172B
	add r1, r1, r4
	mov r8, r1
	ldrb r1, [r1]
	mov r2, #15
	mov r9, r2
	mov r0, r9
	and r0, r0, r1
	cmp r0, #0
	bne _08093F3C
	b _08094050
_08093F3C:
	ldrh r0, [r6]
	ldrh r1, [r5]
	sub r0, r0, r1
	mov r3, #150
	lsl r3, r3, #4
	add r5, r4, r3
	strh r0, [r5]
	strh r1, [r6]
	ldrb r0, [r5]
	strb r0, [r7]
	ldr r1, _08093FA8  @ =gUnknown_03003906
	mov r0, #0
	ldrsb r0, [r1, r0]
	mvn r0, r0
	asr r0, r0, #31
	mov r1, #2
	and r0, r0, r1
	bl sub_0809EA40
	mov r2, r10
	ldrb r1, [r2]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08094050
	bl sub_08093B68
	mov r3, r8
	ldrb r1, [r3]
	mov r0, r9
	and r0, r0, r1
	cmp r0, #0
	beq _08094050
	ldr r2, _08093FCC  @ =0x0000172D
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08093FB0  @ =gPlayerXPosition
	ldrh r0, [r3]
	ldr r2, _08093FB4  @ =gUnknown_03003998
	ldrh r1, [r2]
	sub r0, r0, r1
	strh r0, [r5]
	ldrb r0, [r5]
	ldr r3, _08093FA8  @ =gUnknown_03003906
	strb r0, [r3]
	ldrb r3, [r7]
	mov r0, #0
	ldrsb r0, [r7, r0]
	cmp r0, #0
	blt _08093FD4
	ldr r0, _08093FD0  @ =gUnknown_08167D26
	b _08093FDC
_08093FA4:
	.4byte gRam
_08093FA8:
	.4byte gUnknown_03003906
_08093FAC:
	.4byte 0x000016D7
_08093FB0:
	.4byte gPlayerXPosition
_08093FB4:
	.4byte gUnknown_03003998
_08093FB8:
	.4byte 0x000016C1
_08093FBC:
	.4byte 0x000016C4
_08093FC0:
	.4byte 0x00001764
_08093FC4:
	.4byte 0x00000978
_08093FC8:
	.4byte 0x0000172B
_08093FCC:
	.4byte 0x0000172D
_08093FD0:
	.4byte gUnknown_08167D26
_08093FD4:
	neg r0, r3
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _08094010  @ =gUnknown_08167D30
_08093FDC:
	add r0, r3, r0
	ldrb r0, [r0]
	add r3, r0, #0
	cmp r3, #127
	bls _08093FEE
	mov r1, #255
	lsl r1, r1, #8
	add r0, r1, #0
	orr r3, r3, r0
_08093FEE:
	ldr r1, _08094014  @ =gRam
	ldr r0, _08094018  @ =0x000016C4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r3, r0
	strh r0, [r2]
	ldr r2, _0809401C  @ =0x000016D6
	add r0, r1, r2
	ldrb r3, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r2, r1, #0
	cmp r0, #0
	blt _08094024
	ldr r0, _08094020  @ =gUnknown_08167D3A
	b _0809402C
_08094010:
	.4byte gUnknown_08167D30
_08094014:
	.4byte gRam
_08094018:
	.4byte 0x000016C4
_0809401C:
	.4byte 0x000016D6
_08094020:
	.4byte gUnknown_08167D3A
_08094024:
	neg r0, r3
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r0, _0809404C  @ =gUnknown_08167D44
_0809402C:
	add r0, r3, r0
	ldrb r0, [r0]
	add r3, r0, #0
	cmp r3, #127
	bls _0809403E
	mov r1, #255
	lsl r1, r1, #8
	add r0, r1, #0
	orr r3, r3, r0
_0809403E:
	mov r0, #182
	lsl r0, r0, #5
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r3, r0
	strh r0, [r1]
	b _0809405A
_0809404C:
	.4byte gUnknown_08167D44
_08094050:
	ldr r2, _08094070  @ =gRam
	ldr r3, _08094074  @ =0x0000172D
	add r1, r2, r3
	mov r0, #0
	strb r0, [r1]
_0809405A:
	ldr r0, _08094078  @ =0x0000172B
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08094070:
	.4byte gRam
_08094074:
	.4byte 0x0000172D
_08094078:
	.4byte 0x0000172B
	THUMB_FUNC_END sub_08093EB0

