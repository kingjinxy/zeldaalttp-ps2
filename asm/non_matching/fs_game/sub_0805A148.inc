	THUMB_FUNC_START sub_0805A148
sub_0805A148: @ 0x0805A148
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	mov r2, #238
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0805A168
	b _0805A298
_0805A168:
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7]
	ldrh r2, [r1, #44]
	mov r3, #224
	lsl r3, r3, #8
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	cmp r1, #0
	beq _0805A186
	mov r1, #64
	b _0805A188
_0805A186:
	mov r1, #192
_0805A188:
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, _0805A284  @ =gUnknown_0813E4CC
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	mov r3, #0
	ldrsh r2, [r1, r3]
	lsl r1, r2, #8
	add r2, r1, #0
	lsl r1, r2, #3
	ldr r2, [r0, #48]
	add r0, r1, r2
	asr r1, r0, #16
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, _0805A284  @ =gUnknown_0813E4CC
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #0
	add r2, r2, #64
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	mov r3, #0
	ldrsh r2, [r1, r3]
	lsl r1, r2, #8
	add r2, r1, #0
	lsl r1, r2, #3
	ldr r2, [r0, #52]
	sub r0, r2, r1
	asr r1, r0, #16
	str r1, [r7, #8]
	ldr r0, _0805A288  @ =gUnknown_03000450
	ldrh r1, [r0, #24]
	ldr r0, [r7, #4]
	sub r1, r0, r1
	lsr r0, r1, #4
	ldr r1, _0805A288  @ =gUnknown_03000450
	ldrh r2, [r1, #26]
	ldr r3, [r7, #8]
	sub r1, r3, r2
	lsr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #6
	add r1, r2, #0
	orr r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	lsl r1, r0, #16
	lsr r0, r1, #16
	mov r1, #128
	lsl r1, r1, #7
	cmp r0, r1
	bne _0805A298
	ldr r0, _0805A28C  @ =0x00004008
	ldr r1, _0805A288  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	ldr r1, [r7, #4]
	sub r2, r1, r2
	lsr r1, r2, #4
	ldr r2, _0805A288  @ =gUnknown_03000450
	ldrh r3, [r2, #26]
	ldr r4, [r7, #8]
	sub r2, r4, r3
	lsr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F48
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #255
	beq _0805A278
	ldr r0, _0805A290  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _0805A290  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _0805A294  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
_0805A278:
	ldr r0, [r7]
	bl DeleteThisEntity
	mov r0, #1
	b _0805A3E0
	.byte 0x00
	.byte 0x00
_0805A284:
	.4byte gUnknown_0813E4CC
_0805A288:
	.4byte gUnknown_03000450
_0805A28C:
	.4byte 0x00004008
_0805A290:
	.4byte gUnknown_0201F000
_0805A294:
	.4byte gUnknown_08137B10
_0805A298:
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	mov r2, #238
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0805A2AE
	b _0805A3DC
_0805A2AE:
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7]
	ldrh r2, [r1, #44]
	mov r3, #14
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	cmp r1, #0
	bne _0805A2CA
	mov r1, #128
	b _0805A2CC
_0805A2CA:
	mov r1, #0
_0805A2CC:
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, _0805A3C8  @ =gUnknown_0813E4CC
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	mov r3, #0
	ldrsh r2, [r1, r3]
	lsl r1, r2, #8
	add r2, r1, #0
	lsl r1, r2, #3
	ldr r2, [r0, #48]
	add r0, r1, r2
	asr r1, r0, #16
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, _0805A3C8  @ =gUnknown_0813E4CC
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #0
	add r2, r2, #64
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	mov r3, #0
	ldrsh r2, [r1, r3]
	lsl r1, r2, #8
	add r2, r1, #0
	lsl r1, r2, #3
	ldr r2, [r0, #52]
	sub r0, r2, r1
	asr r1, r0, #16
	str r1, [r7, #8]
	ldr r0, _0805A3CC  @ =gUnknown_03000450
	ldrh r1, [r0, #24]
	ldr r0, [r7, #4]
	sub r1, r0, r1
	lsr r0, r1, #4
	ldr r1, _0805A3CC  @ =gUnknown_03000450
	ldrh r2, [r1, #26]
	ldr r3, [r7, #8]
	sub r1, r3, r2
	lsr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #6
	add r1, r2, #0
	orr r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	lsl r1, r0, #16
	lsr r0, r1, #16
	mov r1, #128
	lsl r1, r1, #7
	cmp r0, r1
	bne _0805A3DC
	ldr r0, _0805A3D0  @ =0x00004008
	ldr r1, _0805A3CC  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	ldr r1, [r7, #4]
	sub r2, r1, r2
	lsr r1, r2, #4
	ldr r2, _0805A3CC  @ =gUnknown_03000450
	ldrh r3, [r2, #26]
	ldr r4, [r7, #8]
	sub r2, r4, r3
	lsr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F48
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #255
	beq _0805A3BC
	ldr r0, _0805A3D4  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _0805A3D4  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _0805A3D8  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
_0805A3BC:
	ldr r0, [r7]
	bl DeleteThisEntity
	mov r0, #1
	b _0805A3E0
	.byte 0x00
	.byte 0x00
_0805A3C8:
	.4byte gUnknown_0813E4CC
_0805A3CC:
	.4byte gUnknown_03000450
_0805A3D0:
	.4byte 0x00004008
_0805A3D4:
	.4byte gUnknown_0201F000
_0805A3D8:
	.4byte gUnknown_08137B10
_0805A3DC:
	mov r0, #0
	b _0805A3E0
_0805A3E0:
	add sp, sp, #16
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0805A148

