	THUMB_FUNC_START sub_08106AF0
sub_08106AF0: @ 0x08106AF0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _08106BB0  @ =gRam
	ldr r0, _08106BB4  @ =0x00000EE2
	add r1, r4, r0
	add r1, r6, r1
	ldr r2, _08106BB8  @ =0x00000F62
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _08106BBC  @ =0x00000F02
	add r1, r4, r3
	add r1, r6, r1
	ldr r5, _08106BC0  @ =0x00000F72
	add r0, r4, r5
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08106BC4  @ =0x00000ED2
	add r1, r4, r0
	add r1, r6, r1
	add r2, r2, #32
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r3, r3, #16
	add r1, r4, r3
	add r1, r6, r1
	ldr r5, _08106BC8  @ =0x000010A2
	add r0, r4, r5
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080C1F70
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r6, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _08106B5E
	b _08106DD2
_08106B5E:
	ldr r0, _08106BCC  @ =0x000015F9
	add r2, r4, r0
	ldr r5, _08106BD0  @ =0x000015FA
	add r3, r4, r5
	strb r1, [r2]
	strb r1, [r3]
	ldr r5, _08106BD4  @ =0x00001052
	add r0, r4, r5
	add r0, r6, r0
	ldrb r5, [r0]
	cmp r1, r5
	bne _08106B78
	b _08106DBE
_08106B78:
	mov r8, r2
	ldr r1, _08106BD8  @ =0x0000096C
	add r1, r1, r4
	mov r10, r1
	add r7, r4, #0
	str r0, [sp, #8]
	mov r9, r3
_08106B86:
	ldr r1, _08106BDC  @ =gUnknown_0817BF28
	add r1, r6, r1
	mov r2, r8
	ldrb r0, [r2]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r6, #2
	bne _08106BE8
	ldr r3, _08106BE0  @ =gUnknown_020109B0
	add r0, r2, r3
	ldrb r0, [r0]
	mov r1, #0
	mov r5, r10
	strb r0, [r5]
	ldr r3, _08106BE4  @ =0x0000096D
	add r0, r4, r3
	strb r1, [r0]
	b _08106BFE
	.byte 0x00
	.byte 0x00
_08106BB0:
	.4byte gRam
_08106BB4:
	.4byte 0x00000EE2
_08106BB8:
	.4byte 0x00000F62
_08106BBC:
	.4byte 0x00000F02
_08106BC0:
	.4byte 0x00000F72
_08106BC4:
	.4byte 0x00000ED2
_08106BC8:
	.4byte 0x000010A2
_08106BCC:
	.4byte 0x000015F9
_08106BD0:
	.4byte 0x000015FA
_08106BD4:
	.4byte 0x00001052
_08106BD8:
	.4byte 0x0000096C
_08106BDC:
	.4byte gUnknown_0817BF28
_08106BE0:
	.4byte gUnknown_020109B0
_08106BE4:
	.4byte 0x0000096D
_08106BE8:
	ldr r5, _08106C4C  @ =gUnknown_020109B0
	add r0, r2, r5
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	mov r1, r10
	strb r0, [r1]
	ldr r3, _08106C50  @ =0x0000096D
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
_08106BFE:
	ldr r5, _08106C54  @ =gUnknown_020109F0
	add r0, r2, r5
	ldrb r0, [r0]
	ldr r1, _08106C58  @ =0x0000097D
	add r3, r7, r1
	strb r0, [r3]
	mov r2, r10
	ldrh r1, [r2]
	mov r2, #255
	add r0, r2, #0
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r5, _08106C5C  @ =gUnknown_08173F38
	add r0, r0, r5
	ldrh r0, [r0]
	ldr r5, _08106C60  @ =0x00000974
	add r5, r5, r7
	mov r12, r5
	strh r0, [r5]
	add r1, r1, #128
	mov r5, #151
	lsl r5, r5, #4
	add r0, r7, r5
	strh r1, [r0]
	and r1, r1, r2
	lsl r1, r1, #1
	ldr r0, _08106C5C  @ =gUnknown_08173F38
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08106C64  @ =0x00000978
	add r0, r7, r2
	strh r1, [r0]
	ldr r5, _08106C68  @ =gUnknown_03002BA5
	mov r0, #0
	ldrsb r0, [r5, r0]
	cmp r0, #0
	beq _08106C6C
	ldrb r2, [r3]
	b _08106C84
_08106C4C:
	.4byte gUnknown_020109B0
_08106C50:
	.4byte 0x0000096D
_08106C54:
	.4byte gUnknown_020109F0
_08106C58:
	.4byte 0x0000097D
_08106C5C:
	.4byte gUnknown_08173F38
_08106C60:
	.4byte 0x00000974
_08106C64:
	.4byte 0x00000978
_08106C68:
	.4byte gUnknown_03002BA5
_08106C6C:
	mov r0, r12
	ldrb r1, [r0]
	ldrb r0, [r3]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
_08106C84:
	ldr r1, _08106CB8  @ =0x0000096D
	add r0, r4, r1
	ldrb r1, [r0]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08106C9C
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_08106C9C:
	ldr r5, _08106CBC  @ =0x000015E8
	add r0, r4, r5
	strb r2, [r0]
	ldr r1, _08106CC0  @ =0x00000979
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08106CC8
	ldr r2, _08106CC4  @ =0x0000097D
	add r0, r4, r2
	ldrb r2, [r0]
	b _08106CE4
_08106CB8:
	.4byte 0x0000096D
_08106CBC:
	.4byte 0x000015E8
_08106CC0:
	.4byte 0x00000979
_08106CC4:
	.4byte 0x0000097D
_08106CC8:
	ldr r5, _08106D74  @ =0x00000978
	add r0, r4, r5
	ldrb r1, [r0]
	ldr r2, _08106D78  @ =0x0000097D
	add r0, r4, r2
	ldrb r0, [r0]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	and r0, r0, r3
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r2, r1, #24
_08106CE4:
	ldr r5, _08106D7C  @ =gRam
	ldr r3, _08106D80  @ =0x00000971
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08106CFC
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_08106CFC:
	ldr r0, _08106D84  @ =0x000015E9
	add r4, r5, r0
	strb r2, [r4]
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #0
	beq _08106DA0
	ldr r2, _08106D88  @ =0x000015E8
	add r3, r5, r2
	ldr r0, _08106D8C  @ =gUnknown_03003E74
	mov r2, r9
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r2, r5, r1
	mov r1, #0
	ldrsb r1, [r3, r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _08106D90  @ =0x00000964
	add r3, r5, r2
	mov r2, #0
	ldrsb r2, [r4, r2]
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _08106D94  @ =0x00000969
	add r3, r5, r4
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	lsl r3, r3, #8
	mov r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r2, [r0, #2]
	ldr r3, _08106D98  @ =0x00001622
	add r1, r5, r3
	strb r2, [r1]
	ldrb r1, [r0]
	ldr r4, _08106D9C  @ =0x00001624
	add r0, r5, r4
	strb r1, [r0]
	mov r5, r9
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _08106DA6
_08106D74:
	.4byte 0x00000978
_08106D78:
	.4byte 0x0000097D
_08106D7C:
	.4byte gRam
_08106D80:
	.4byte 0x00000971
_08106D84:
	.4byte 0x000015E9
_08106D88:
	.4byte 0x000015E8
_08106D8C:
	.4byte gUnknown_03003E74
_08106D90:
	.4byte 0x00000964
_08106D94:
	.4byte 0x00000969
_08106D98:
	.4byte 0x00001622
_08106D9C:
	.4byte 0x00001624
_08106DA0:
	add r0, r6, #0
	bl sub_08106DEC
_08106DA6:
	mov r1, r8
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _08106DE4  @ =gRam
	ldr r2, [sp, #8]
	ldrb r2, [r2]
	cmp r0, r2
	beq _08106DBE
	b _08106B86
_08106DBE:
	ldr r3, _08106DE8  @ =0x000009AD
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08106DD2
	add r0, r6, #0
	mov r1, #2
	mov r2, #4
	bl sub_080C6350
_08106DD2:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08106DE4:
	.4byte gRam
_08106DE8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08106AF0

