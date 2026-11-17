	THUMB_FUNC_START sub_0804FB80
sub_0804FB80: @ 0x0804FB80
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #3
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #6
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	add r2, r7, #4
	ldrh r3, [r2]
	sub r1, r1, r3
	ldr r2, _0804FBE0  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	add r3, r7, #4
	ldrh r4, [r3]
	sub r2, r2, r4
	ldr r3, _0804FBE0  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #2
	beq _0804FC64
	cmp r0, #2
	bgt _0804FBE4
	cmp r0, #1
	beq _0804FBEC
	b _0804FF4C
	.byte 0x00
	.byte 0x00
_0804FBE0:
	.4byte gUnknown_03000450
_0804FBE4:
	cmp r0, #3
	bne _0804FBEA
	b _0804FD74
_0804FBEA:
	b _0804FF4C
_0804FBEC:
	ldr r0, [r7]
	ldr r1, [r0, #96]
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	add r2, r7, #6
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #160
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FC60  @ =0x00000141
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #161
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	b _0804FF72
	.byte 0x00
	.byte 0x00
_0804FC60:
	.4byte 0x00000141
_0804FC64:
	ldr r0, [r7]
	ldr r1, [r0, #96]
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	add r2, r7, #6
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FD64  @ =0x00000143
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #160
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FD68  @ =0x00000145
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FD6C  @ =0x00000147
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #163
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #66
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FD70  @ =0x00000141
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #128
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #162
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #129
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #161
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #130
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	b _0804FF72
_0804FD64:
	.4byte 0x00000143
_0804FD68:
	.4byte 0x00000145
_0804FD6C:
	.4byte 0x00000147
_0804FD70:
	.4byte 0x00000141
_0804FD74:
	ldr r0, [r7]
	ldr r1, [r0, #96]
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	add r2, r7, #6
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF3C  @ =0x00000143
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #1
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF3C  @ =0x00000143
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #160
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF40  @ =0x00000145
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #64
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF44  @ =0x00000147
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #65
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF44  @ =0x00000147
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #66
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #163
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #67
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF40  @ =0x00000145
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #128
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF44  @ =0x00000147
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #129
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF44  @ =0x00000147
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #130
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #163
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #131
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, _0804FF48  @ =0x00000141
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #192
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #162
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #193
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #162
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #194
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #161
	lsl r0, r0, #1
	add r1, r7, #6
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #195
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	b _0804FF72
	.byte 0x00
	.byte 0x00
_0804FF3C:
	.4byte 0x00000143
_0804FF40:
	.4byte 0x00000145
_0804FF44:
	.4byte 0x00000147
_0804FF48:
	.4byte 0x00000141
_0804FF4C:
	ldr r0, [r7]
	bl sub_08003B64
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804FF5C
	b _0804FF78
_0804FF5C:
	mov r0, #155
	lsl r0, r0, #1
	add r2, r7, #6
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	b _0804FF72
_0804FF72:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804FF78:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804FB80

