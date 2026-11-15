	THUMB_FUNC_START sub_080FCBF0
sub_080FCBF0: @ 0x080FCBF0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r1, _080FCCC8  @ =gRam
	ldr r0, _080FCCCC  @ =0x000015F9
	add r2, r1, r0
	mov r0, #0
	strb r0, [r2]
	mov r1, sp
	add r1, r1, #5
	str r1, [sp, #8]
	mov r12, r2
	mov r2, #255
	lsl r2, r2, #8
	mov r8, r2
	mov r3, #128
	lsl r3, r3, #1
	mov r10, r3
_080FCC20:
	mov r6, r12
	ldrb r4, [r6]
	add r5, r4, #0
	ldr r1, _080FCCC8  @ =gRam
	ldr r2, _080FCCD0  @ =0x00001092
	add r0, r1, r2
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FCC3C
	add r0, r4, #0
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r4, r0, #24
_080FCC3C:
	ldr r1, _080FCCD4  @ =gUnknown_020109B6
	ldr r0, _080FCCD8  @ =gUnknown_020109BA
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsl r0, r2, #24
	lsr r3, r0, #24
	ldr r6, _080FCCDC  @ =0xFFFFFF00
	add r1, r2, r6
	mov r0, #128
	lsl r0, r0, #8
	and r1, r1, r0
	cmp r1, #0
	beq _080FCC64
	mvn r0, r3
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FCC64:
	ldr r6, _080FCCE0  @ =gUnknown_0817A978
	add r0, r4, r6
	ldrb r0, [r0]
	mul r0, r3, r0
	asr r0, r0, #8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r1, #0
	beq _080FCC80
	mvn r0, r3
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FCC80:
	mov r0, r8
	and r2, r2, r0
	orr r2, r2, r3
	add r4, r5, #0
	ldr r0, _080FCCE4  @ =gUnknown_020109B8
	ldrb r1, [r0]
	ldr r3, _080FCCE8  @ =gUnknown_0817A998
	add r0, r4, r3
	ldrb r0, [r0]
	mul r0, r1, r0
	lsr r5, r0, #8
	add r0, r2, #0
	mov r6, #255
	and r0, r0, r6
	lsl r0, r0, #1
	ldr r1, _080FCCEC  @ =gUnknown_08173F38
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #128
	lsl r0, r0, #16
	lsr r7, r0, #16
	add r0, r7, #0
	and r0, r0, r6
	lsl r0, r0, #1
	ldr r3, _080FCCEC  @ =gUnknown_08173F38
	add r0, r0, r3
	ldrh r6, [r0]
	add r0, r1, #0
	mov r3, r8
	and r0, r0, r3
	cmp r0, #0
	beq _080FCCF0
	add r3, r5, #0
	b _080FCCFA
	.byte 0x00
	.byte 0x00
_080FCCC8:
	.4byte gRam
_080FCCCC:
	.4byte 0x000015F9
_080FCCD0:
	.4byte 0x00001092
_080FCCD4:
	.4byte gUnknown_020109B6
_080FCCD8:
	.4byte gUnknown_020109BA
_080FCCDC:
	.4byte 0xFFFFFF00
_080FCCE0:
	.4byte gUnknown_0817A978
_080FCCE4:
	.4byte gUnknown_020109B8
_080FCCE8:
	.4byte gUnknown_0817A998
_080FCCEC:
	.4byte gUnknown_08173F38
_080FCCF0:
	add r0, r1, #0
	mul r0, r5, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FCCFA:
	mov r0, r10
	and r2, r2, r0
	cmp r2, #0
	beq _080FCD0A
	mvn r0, r3
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FCD0A:
	ldr r1, _080FCD20  @ =gUnknown_02010995
	add r0, r4, r1
	strb r3, [r0]
	add r0, r6, #0
	mov r2, r8
	and r0, r0, r2
	cmp r0, #0
	beq _080FCD24
	add r3, r5, #0
	b _080FCD2E
	.byte 0x00
	.byte 0x00
_080FCD20:
	.4byte gUnknown_02010995
_080FCD24:
	add r0, r6, #0
	mul r0, r5, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FCD2E:
	add r0, r7, #0
	mov r6, r10
	and r0, r0, r6
	cmp r0, #0
	beq _080FCD40
	mvn r0, r3
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
_080FCD40:
	ldr r0, _080FCE9C  @ =gUnknown_020109A5
	add r1, r4, r0
	add r0, r3, #0
	sub r0, r0, #40
	strb r0, [r1]
	mov r1, r12
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #16
	beq _080FCD5C
	b _080FCC20
_080FCD5C:
	ldr r2, _080FCEA0  @ =gRam
	ldr r3, _080FCEA4  @ =0x0000097D
	add r0, r2, r3
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080FCEA8  @ =gUnknown_020109BC
	ldrb r5, [r0]
	add r0, sp, #4
	strb r1, [r0]
	lsl r1, r5, #24
	cmp r5, #16
	beq _080FCE58
	add r4, r2, #0
	ldr r6, _080FCEAC  @ =0x000016CD
	add r2, r2, r6
	mov r10, r2
	add r0, sp, #4
	mov r8, r0
_080FCD80:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	asr r1, r1, #24
	ldr r6, _080FCEB0  @ =gUnknown_02010995
	add r0, r1, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r6, r0, #16
	ldr r0, _080FCEB4  @ =0x00000964
	add r2, r4, r0
	ldr r3, _080FCE9C  @ =gUnknown_020109A5
	add r1, r1, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r2, #204
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #0
	bne _080FCDBA
	mov r2, #212
_080FCDBA:
	ldr r1, _080FCEB8  @ =gUnknown_03003E74
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080FCEBC  @ =0x00000969
	add r1, r4, r3
	ldrb r3, [r1]
	mov r1, #27
	eor r3, r3, r1
	lsl r3, r3, #8
	orr r3, r3, r2
	mov r1, #2
	str r1, [sp]
	add r1, r6, #0
	add r2, r7, #0
	bl sub_080C6004
	ldr r1, _080FCEC0  @ =0x000017AA
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #0
	bne _080FCE40
	ldr r3, _080FCEC4  @ =0x00001092
	add r0, r4, r3
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FCE40
	sub r1, r1, #230
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r3, _080FCEC8  @ =0x00000952
	add r1, r4, r3
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r0, r0, r6
	add r0, r0, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #23
	bhi _080FCE40
	mov r6, #182
	lsl r6, r6, #5
	add r0, r4, r6
	ldrb r0, [r0]
	add r3, r3, #6
	add r1, r4, r3
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r0, r0, r7
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _080FCE40
	ldr r6, _080FCEA4  @ =0x0000097D
	add r1, r4, r6
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FCECC  @ =0x000016CE
	add r0, r4, r1
	strb r2, [r0]
	mov r0, #56
	mov r2, r10
	strb r0, [r2]
_080FCE40:
	lsl r0, r5, #24
	mov r3, #128
	lsl r3, r3, #17
	add r0, r0, r3
	lsr r5, r0, #24
	mov r6, r8
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r1, r5, #24
	cmp r5, #16
	bne _080FCD80
_080FCE58:
	ldr r1, _080FCEA0  @ =gRam
	ldr r2, _080FCEA4  @ =0x0000097D
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080FCE78
	ldr r3, _080FCED0  @ =0x00001649
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FCE78
	mov r0, r9
	bl sub_080C3BD0
_080FCE78:
	mov r0, r9
	mov r1, #2
	mov r2, #15
	bl sub_080C6350
	add r0, sp, #4
	ldr r1, [sp, #8]
	mov r2, r9
	bl sub_080C5ACC
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FCE9C:
	.4byte gUnknown_020109A5
_080FCEA0:
	.4byte gRam
_080FCEA4:
	.4byte 0x0000097D
_080FCEA8:
	.4byte gUnknown_020109BC
_080FCEAC:
	.4byte 0x000016CD
_080FCEB0:
	.4byte gUnknown_02010995
_080FCEB4:
	.4byte 0x00000964
_080FCEB8:
	.4byte gUnknown_03003E74
_080FCEBC:
	.4byte 0x00000969
_080FCEC0:
	.4byte 0x000017AA
_080FCEC4:
	.4byte 0x00001092
_080FCEC8:
	.4byte 0x00000952
_080FCECC:
	.4byte 0x000016CE
_080FCED0:
	.4byte 0x00001649
	THUMB_FUNC_END sub_080FCBF0

