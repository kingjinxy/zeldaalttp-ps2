	THUMB_FUNC_START sub_081238BC
sub_081238BC: @ 0x081238BC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _081238F8  @ =gRam
	ldr r1, _081238FC  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r6, #1
	cmp r0, #0
	beq _081238E0
	mov r6, #0
_081238E0:
	add r0, r6, #0
	bl sub_080BF9D8
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08123904
	ldr r2, _08123900  @ =0x00000E15
	add r0, r4, r2
	add r0, r7, r0
	strb r1, [r0]
	b _08123AB4
_081238F8:
	.4byte gRam
_081238FC:
	.4byte 0x000009B2
_08123900:
	.4byte 0x00000E15
_08123904:
	ldr r3, _08123990  @ =0x000009AD
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08123922
	ldr r1, _08123994  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08123922
	mov r0, #62
	bl sub_080C1A8C
_08123922:
	ldr r2, _08123998  @ =gRam
	ldr r3, _0812399C  @ =0x000017E1
	add r1, r2, r3
	mov r0, #1
	strb r0, [r1]
	ldr r4, _081239A0  @ =0x000016D4
	add r3, r2, r4
	ldrb r0, [r3]
	sub r1, r0, #6
	mov r0, #128
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	bne _08123940
	strb r1, [r3]
_08123940:
	ldr r1, _081239A4  @ =0x00000E33
	add r0, r4, r1
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _08123960
	mov r0, #2
	strb r0, [r1]
	ldr r3, _081239A8  @ =0x00000E29
	add r2, r4, r3
	add r2, r7, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
_08123960:
	ldr r1, _081239AC  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _081239B8
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #55
	bhi _081239B8
	ldr r3, _081239B0  @ =0x00000DC5
	add r0, r4, r3
	add r0, r7, r0
	mov r1, #56
	strb r1, [r0]
	ldr r1, _081239B4  @ =0x00000DD9
	add r0, r4, r1
	add r0, r7, r0
	mov r1, #13
	b _081239D4
	.byte 0x00
	.byte 0x00
_08123990:
	.4byte 0x000009AD
_08123994:
	.4byte 0x00000996
_08123998:
	.4byte gRam
_0812399C:
	.4byte 0x000017E1
_081239A0:
	.4byte 0x000016D4
_081239A4:
	.4byte 0x00000E33
_081239A8:
	.4byte 0x00000E29
_081239AC:
	.4byte 0x000009B2
_081239B0:
	.4byte 0x00000DC5
_081239B4:
	.4byte 0x00000DD9
_081239B8:
	ldr r2, _08123AC4  @ =0x00000DC5
	add r0, r4, r2
	add r0, r7, r0
	mov r3, #182
	lsl r3, r3, #5
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08123AC8  @ =0x00000DD9
	add r0, r4, r1
	add r0, r7, r0
	ldr r2, _08123ACC  @ =0x000016C1
	add r1, r4, r2
	ldrb r1, [r1]
_081239D4:
	strb r1, [r0]
	add r5, r4, #0
	ldr r3, _08123AD0  @ =0x00000DCF
	add r0, r5, r3
	add r0, r7, r0
	ldr r2, _08123AD4  @ =0x000016C4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #20
	add r0, r5, r3
	add r0, r7, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C17A8
	ldr r3, _08123AD8  @ =0x000016C8
	add r2, r5, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	blt _08123A14
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrh r1, [r0]
	ldrb r2, [r2]
	sub r1, r1, r2
	strh r1, [r0]
_08123A14:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	ldrh r1, [r2]
	add r3, r3, #12
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _08123ADC  @ =0x00000E29
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r6, r0, #24
	mov r8, r4
	mov r10, r2
	ldr r2, _08123AE0  @ =0x00000964
	add r2, r2, r8
	mov r9, r2
	ldr r7, _08123AE4  @ =gUnknown_03003E74
_08123A3A:
	ldr r0, _08123AE8  @ =gUnknown_08180424
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _08123AA6
	ldr r0, _08123AEC  @ =gUnknown_0818043C
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _08123AF0  @ =gUnknown_08180444
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r2, _08123AF4  @ =0x0000096C
	add r2, r2, r8
	orr r1, r1, r0
	ldrh r2, [r2]
	add r1, r1, r2
	mov r4, r10
	strh r1, [r4]
	ldr r0, _08123AF8  @ =gUnknown_0818044C
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _08123AFC  @ =gUnknown_08180454
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r2, _08123B00  @ =0x00000968
	add r2, r2, r8
	orr r1, r1, r0
	ldrh r2, [r2]
	add r1, r1, r2
	mov r0, r9
	strh r1, [r0]
	ldrh r0, [r7]
	mov r2, r9
	ldrh r1, [r2]
	ldrh r2, [r4]
	ldrb r3, [r3]
	ldr r4, _08123B04  @ =gUnknown_0818042C
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #48
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _08123B08  @ =gUnknown_08180434
	add r4, r6, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
_08123AA6:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #1
	and r0, r0, r6
	cmp r0, #0
	bne _08123A3A
_08123AB4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08123AC4:
	.4byte 0x00000DC5
_08123AC8:
	.4byte 0x00000DD9
_08123ACC:
	.4byte 0x000016C1
_08123AD0:
	.4byte 0x00000DCF
_08123AD4:
	.4byte 0x000016C4
_08123AD8:
	.4byte 0x000016C8
_08123ADC:
	.4byte 0x00000E29
_08123AE0:
	.4byte 0x00000964
_08123AE4:
	.4byte gUnknown_03003E74
_08123AE8:
	.4byte gUnknown_08180424
_08123AEC:
	.4byte gUnknown_0818043C
_08123AF0:
	.4byte gUnknown_08180444
_08123AF4:
	.4byte 0x0000096C
_08123AF8:
	.4byte gUnknown_0818044C
_08123AFC:
	.4byte gUnknown_08180454
_08123B00:
	.4byte 0x00000968
_08123B04:
	.4byte gUnknown_0818042C
_08123B08:
	.4byte gUnknown_08180434
	THUMB_FUNC_END sub_081238BC

