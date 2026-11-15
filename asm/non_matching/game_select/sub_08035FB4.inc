	THUMB_FUNC_START sub_08035FB4
sub_08035FB4: @ 0x08035FB4
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	add r3, r0, #0
	cmp r3, #0
	beq _08036028
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035FD6
	mov r0, #177
	bl play_sound
	mov r0, #129
	bl play_sound
_08035FD6:
	ldrb r3, [r4, #23]
	mov r0, #1
	and r0, r0, r3
	add r1, r3, #0
	cmp r0, #0
	beq _08035FF8
	ldr r2, _08036020  @ =gUnknown_0813DF44
	lsr r0, r1, #1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
_08035FF8:
	mov r0, #15
	and r0, r0, r3
	add r2, r4, #0
	add r2, r2, #126
	cmp r0, #0
	bne _0803600A
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
_0803600A:
	ldr r0, _08036024  @ =gUnknown_03000488
	add r1, r4, #0
	add r1, r1, #124
	ldrh r1, [r1]
	strh r1, [r0]
	ldrh r1, [r2]
	strh r1, [r0, #2]
	mov r1, #0
	strh r1, [r0, #4]
	b _08036076
	.byte 0x00
	.byte 0x00
_08036020:
	.4byte gUnknown_0813DF44
_08036024:
	.4byte gUnknown_03000488
_08036028:
	add r1, r4, #0
	add r1, r1, #120
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	beq _08036088
	cmp r0, #29
	bhi _08036050
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
_08036050:
	ldr r0, [r4, #52]
	ldr r1, _08036080  @ =0xFFFFE667
	add r0, r0, r1
	str r0, [r4, #52]
	add r2, r4, #0
	add r2, r2, #126
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	add r0, r4, #0
	add r0, r0, #124
	ldrh r1, [r0]
	add r1, r1, #8
	strh r1, [r0]
	ldr r0, _08036084  @ =gUnknown_03000488
	strh r1, [r0]
	ldrh r1, [r2]
	strh r1, [r0, #2]
	strh r3, [r0, #4]
_08036076:
	add r1, r4, #0
	bl sub_0803D770
	b _08036094
	.byte 0x00
	.byte 0x00
_08036080:
	.4byte 0xFFFFE667
_08036084:
	.4byte gUnknown_03000488
_08036088:
	add r0, r4, #0
	bl 0x08003BCC
	add r0, r4, #0
	bl DeleteThisEntity
_08036094:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035FB4

	.byte 0x00
	.byte 0x00
