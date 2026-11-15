	THUMB_FUNC_START sub_08119C98
sub_08119C98: @ 0x08119C98
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	bl sub_080C17A8
	ldr r2, _08119D54  @ =gRam
	ldr r1, _08119D58  @ =0x00000A74
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08119CC4
	ldr r3, _08119D5C  @ =0x00001724
	add r1, r2, r3
	mov r0, #48
	strb r0, [r1]
_08119CC4:
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	ldrh r4, [r0]
	ldr r7, _08119D60  @ =0x00000978
	add r5, r2, r7
	strh r4, [r5]
	ldr r1, _08119D64  @ =0x00000964
	add r0, r2, r1
	ldrh r3, [r0]
	add r7, r7, #4
	add r7, r7, r2
	mov r9, r7
	strh r3, [r7]
	ldr r0, _08119D68  @ =0x00000968
	add r6, r2, r0
	strh r3, [r6]
	ldr r1, _08119D6C  @ =0x0000185B
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _08119D1C
	ldr r7, _08119D70  @ =0x00000958
	add r0, r2, r7
	sub r7, r7, #2
	add r1, r2, r7
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r4, r0
	strh r0, [r5]
	ldr r1, _08119D74  @ =0x00000952
	add r0, r2, r1
	mov r4, #149
	lsl r4, r4, #4
	add r1, r2, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r3, r0
	mov r7, r9
	strh r0, [r7]
	strh r0, [r6]
_08119D1C:
	ldr r1, _08119D78  @ =0x00000E29
	add r0, r2, r1
	mov r3, r8
	add r4, r3, r0
	ldrb r1, [r4]
	ldr r7, _08119D7C  @ =0x0000096D
	add r0, r2, r7
	strb r1, [r0]
	ldr r1, _08119D80  @ =0x00000E3D
	add r0, r2, r1
	add r0, r0, r8
	ldrb r0, [r0]
	mov r3, #251
	and r3, r3, r0
	ldr r7, _08119D84  @ =0x00000E15
	add r0, r2, r7
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #10
	bne _08119DAC
	ldrb r1, [r4]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08119D88
	mov r2, #1
	b _08119D8C
	.byte 0x00
	.byte 0x00
_08119D54:
	.4byte gRam
_08119D58:
	.4byte 0x00000A74
_08119D5C:
	.4byte 0x00001724
_08119D60:
	.4byte 0x00000978
_08119D64:
	.4byte 0x00000964
_08119D68:
	.4byte 0x00000968
_08119D6C:
	.4byte 0x0000185B
_08119D70:
	.4byte 0x00000958
_08119D74:
	.4byte 0x00000952
_08119D78:
	.4byte 0x00000E29
_08119D7C:
	.4byte 0x0000096D
_08119D80:
	.4byte 0x00000E3D
_08119D84:
	.4byte 0x00000E15
_08119D88:
	mov r2, #3
	and r2, r2, r1
_08119D8C:
	ldr r1, _08119DA4  @ =gRam
	ldr r4, _08119DA8  @ =0x00000974
	add r0, r1, r4
	strb r2, [r0]
	lsl r0, r3, #2
	add r0, r0, #8
	add r0, r2, r0
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r2, r1, #0
	b _08119DBC
	.byte 0x00
	.byte 0x00
_08119DA4:
	.4byte gRam
_08119DA8:
	.4byte 0x00000974
_08119DAC:
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #0
	blt _08119DBC
	mov r0, #4
	orr r3, r3, r0
	lsl r0, r3, #24
	lsr r3, r0, #24
_08119DBC:
	lsl r0, r3, #26
	lsr r6, r0, #24
	mov r3, #2
	ldr r0, _08119EC0  @ =gBow
	ldrb r0, [r0]
	cmp r0, #2
	bhi _08119DCC
	mov r3, #4
_08119DCC:
	ldr r7, _08119EC4  @ =0x00001734
	add r0, r2, r7
	mov r1, #0
	strb r3, [r0]
	ldr r3, _08119EC8  @ =0x0000096C
	add r0, r2, r3
	strb r1, [r0]
	add r7, r2, #0
	mov r10, r0
	ldr r4, _08119ECC  @ =gUnknown_03003E74
	mov r9, r4
_08119DE2:
	ldr r0, _08119ED0  @ =gUnknown_0817F3CC
	lsr r1, r6, #1
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r1]
	ldrb r5, [r1]
	lsr r4, r0, #8
	cmp r5, #255
	beq _08119E5C
	lsl r1, r6, #1
	ldr r0, _08119ED4  @ =gUnknown_0817F42C
	add r1, r1, r0
	ldr r2, _08119ED8  @ =0x00000978
	add r0, r7, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _08119EDC  @ =gUnknown_03002B90
	strh r0, [r3]
	add r1, r6, #1
	lsl r1, r1, #1
	ldr r0, _08119ED4  @ =gUnknown_0817F42C
	add r1, r1, r0
	add r2, r2, #4
	add r0, r7, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r3, _08119EE0  @ =0x00000964
	add r1, r7, r3
	strh r0, [r1]
	mov r2, r9
	ldrh r0, [r2]
	ldrh r1, [r1]
	ldr r3, _08119EDC  @ =gUnknown_03002B90
	ldrh r3, [r3]
	str r3, [sp, #4]
	mov r3, #193
	and r4, r4, r3
	ldr r2, _08119EC4  @ =0x00001734
	ldrb r3, [r2, r7]
	mov r12, r3
	mov r2, r12
	orr r4, r4, r2
	ldr r3, _08119EE4  @ =gUnknown_03003954
	ldrb r3, [r3]
	mov r12, r3
	mov r2, r12
	orr r4, r4, r2
	lsl r3, r4, #8
	orr r5, r5, r3
	mov r3, #0
	str r3, [sp]
	ldr r2, [sp, #4]
	add r3, r5, #0
	bl sub_080C6368
	mov r4, r9
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
_08119E5C:
	add r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, r10
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r2, _08119EE8  @ =gRam
	cmp r0, #2
	bne _08119DE2
	add r1, r2, #0
	mov r3, #150
	lsl r3, r3, #4
	add r0, r1, r3
	ldrh r0, [r0]
	add r0, r0, #20
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #180
	bls _08119E92
	ldr r4, _08119EEC  @ =0x00000E15
	add r0, r1, r4
	add r0, r0, r8
	mov r1, #0
	strb r1, [r0]
_08119E92:
	ldr r7, _08119EE0  @ =0x00000964
	add r0, r2, r7
	ldrh r0, [r0]
	add r0, r0, #20
	lsl r0, r0, #16
	mov r1, #140
	lsl r1, r1, #17
	cmp r0, r1
	bls _08119EAE
	ldr r1, _08119EEC  @ =0x00000E15
	add r0, r2, r1
	add r0, r0, r8
	mov r1, #0
	strb r1, [r0]
_08119EAE:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08119EC0:
	.4byte gBow
_08119EC4:
	.4byte 0x00001734
_08119EC8:
	.4byte 0x0000096C
_08119ECC:
	.4byte gUnknown_03003E74
_08119ED0:
	.4byte gUnknown_0817F3CC
_08119ED4:
	.4byte gUnknown_0817F42C
_08119ED8:
	.4byte 0x00000978
_08119EDC:
	.4byte gUnknown_03002B90
_08119EE0:
	.4byte 0x00000964
_08119EE4:
	.4byte gUnknown_03003954
_08119EE8:
	.4byte gRam
_08119EEC:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08119C98

