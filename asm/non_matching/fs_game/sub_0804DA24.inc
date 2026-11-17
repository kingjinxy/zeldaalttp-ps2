	THUMB_FUNC_START sub_0804DA24
sub_0804DA24: @ 0x0804DA24
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #22
	bls _0804DA36
	b _0804DDB4
_0804DA36:
	lsl r1, r0, #2
	ldr r2, _0804DA40  @ =0x0804DA44
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
_0804DA40:
	.4byte _0804DA40+0x4
	.4byte _0804DAA0
	.4byte _0804DAF4
	.4byte _0804DB88
	.4byte _0804DB88
	.4byte _0804DB88
	.4byte _0804DB88
	.4byte _0804DB88
	.4byte _0804DBB8
	.4byte _0804DBE8
	.4byte _0804DBE8
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DDB4
	.4byte _0804DD80
_0804DAA0:
	ldr r0, [r7]
	ldr r1, _0804DAEC  @ =gUnknown_030004A0
	ldrh r2, [r1, #22]
	neg r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #88
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, _0804DAEC  @ =gUnknown_030004A0
	ldrh r2, [r1, #24]
	neg r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #60
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _0804DAF0  @ =gUnknown_02016D60
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _0804DAEA
	ldr r0, [r7]
	bl DeleteThisEntity
_0804DAEA:
	b _0804DDB6
_0804DAEC:
	.4byte gUnknown_030004A0
_0804DAF0:
	.4byte gUnknown_02016D60
_0804DAF4:
	ldr r0, [r7]
	ldr r1, _0804DB54  @ =gUnknown_030004A0
	ldrh r2, [r1, #10]
	neg r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #88
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, _0804DB54  @ =gUnknown_030004A0
	ldrh r2, [r1, #12]
	neg r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #60
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _0804DB58  @ =gGameLanguage
	ldrb r1, [r0]
	cmp r1, #0
	bne _0804DB5C
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _0804DB72
	.byte 0x00
	.byte 0x00
_0804DB54:
	.4byte gUnknown_030004A0
_0804DB58:
	.4byte gGameLanguage
_0804DB5C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_0804DB72:
	ldr r0, _0804DB84  @ =gUnknown_02016D60
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _0804DB80
	ldr r0, [r7]
	bl DeleteThisEntity
_0804DB80:
	b _0804DDB6
	.byte 0x00
	.byte 0x00
_0804DB84:
	.4byte gUnknown_02016D60
_0804DB88:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	mov r0, #152
	lsl r0, r0, #1
	cmp r1, r0
	ble _0804DBB0
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804DBB4  @ =0x0000FFC0
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_0804DBB0:
	b _0804DDB6
	.byte 0x00
	.byte 0x00
_0804DBB4:
	.4byte 0x0000FFC0
_0804DBB8:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	mov r0, #192
	lsl r0, r0, #1
	cmp r1, r0
	ble _0804DBE0
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804DBE4  @ =0x0000FF80
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_0804DBE0:
	b _0804DDB6
	.byte 0x00
	.byte 0x00
_0804DBE4:
	.4byte 0x0000FF80
_0804DBE8:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	mov r2, #50
	ldrsh r1, [r0, r2]
	mov r0, #128
	lsl r0, r0, #1
	cmp r1, r0
	ble _0804DCB4
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	neg r1, r2
	add r2, r1, #0
	add r1, r2, #0
	sub r1, r1, #16
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, [r7]
	mov r3, #31
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	add r2, r2, #112
	ldrh r3, [r1, #54]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	add r3, r2, #0
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r1, #54]
	add r1, r2, #0
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	add r2, r2, #32
	str r2, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #22]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #22]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	ldr r0, [r7]
	bl sub_08003870
_0804DCB4:
	ldr r0, [r7]
	ldrb r1, [r0, #22]
	cmp r1, #0
	bne _0804DCE6
	bl sub_0800099C
	lsl r1, r0, #22
	lsr r0, r1, #22
	cmp r0, #13
	bne _0804DCE4
	ldr r0, [r7]
	mov r1, #21
	bl sub_08003870
	ldr r0, [r7]
	ldrb r1, [r0, #22]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #22]
_0804DCE4:
	b _0804DD14
_0804DCE6:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #128
	bne _0804DD14
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_0804DD14:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #0
	ldr r2, _0804DD78  @ =gUnknown_08428910
	ldr r3, [r7]
	ldrb r4, [r3, #23]
	mov r5, #15
	add r3, r4, #0
	and r3, r3, r5
	add r5, r3, #0
	lsl r4, r5, #24
	lsr r3, r4, #24
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _0804DD7C  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0804DD76
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
_0804DD76:
	b _0804DDB6
_0804DD78:
	.4byte gUnknown_08428910
_0804DD7C:
	.4byte gUnknown_03000948
_0804DD80:
	ldr r0, _0804DDAC  @ =gGameLanguage
	ldrb r1, [r0]
	cmp r1, #0
	beq _0804DD9C
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_0804DD9C:
	ldr r0, _0804DDB0  @ =gUnknown_02016D60
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _0804DDAA
	ldr r0, [r7]
	bl DeleteThisEntity
_0804DDAA:
	b _0804DDB6
_0804DDAC:
	.4byte gGameLanguage
_0804DDB0:
	.4byte gUnknown_02016D60
_0804DDB4:
	b _0804DDB6
_0804DDB6:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804DA24

	.byte 0x00
	.byte 0x00
