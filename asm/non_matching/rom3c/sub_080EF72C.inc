	THUMB_FUNC_START sub_080EF72C
sub_080EF72C: @ 0x080EF72C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _080EF838  @ =gUnknown_08178C0C
	lsl r0, r7, #1
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [sp, #4]
	ldr r0, _080EF83C  @ =gUnknown_08178BE0
	add r0, r7, r0
	ldrb r0, [r0]
	str r0, [sp, #8]
	ldr r4, _080EF840  @ =gRam
	ldr r1, _080EF844  @ =0x00001052
	add r0, r4, r1
	add r5, r7, r0
	ldrb r2, [r5]
	mov r8, r2
	ldr r3, _080EF848  @ =0x00000F12
	add r1, r4, r3
	add r1, r7, r1
	ldr r6, _080EF84C  @ =0x00001152
	add r0, r4, r6
	add r0, r7, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #16
	add r0, r4, r3
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r6, _080EF850  @ =0x00000961
	add r0, r4, r6
	strb r1, [r0]
	bl sub_080CA32C
	ldr r2, _080EF854  @ =0x00000F92
	add r1, r4, r2
	add r1, r7, r1
	strb r0, [r1]
	ldrb r2, [r5]
	ldr r3, [sp, #8]
	add r2, r3, r2
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r6, _080EF858  @ =gUnknown_0200EF18
	add r1, r2, r6
	strb r0, [r1]
	ldr r0, _080EF85C  @ =gUnknown_0200EE18
	add r1, r2, r0
	ldr r3, _080EF860  @ =0x00001142
	add r0, r4, r3
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080EF864  @ =gUnknown_0200ED18
	add r1, r2, r6
	ldr r3, _080EF868  @ =0x00000ED2
	add r0, r4, r3
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _080EF86C  @ =gUnknown_0200EC18
	add r2, r2, r6
	ldr r1, _080EF870  @ =0x00000EE2
	add r0, r4, r1
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080EF874  @ =0x00000FA2
	add r0, r4, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080EF7F0
	ldr r3, _080EF878  @ =0x000009AD
	add r0, r4, r3
	ldr r6, _080EF87C  @ =0x00001605
	add r1, r4, r6
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080EF7F0
	ldrb r0, [r5]
	add r0, r0, #1
	mov r1, #63
	and r0, r0, r1
	strb r0, [r5]
_080EF7F0:
	ldr r2, _080EF840  @ =gRam
	ldr r0, _080EF880  @ =0x00001122
	add r1, r2, r0
	add r1, r7, r1
	ldr r3, _080EF884  @ =0x00000D94
	add r0, r2, r3
	add r0, r7, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	add r4, r0, #0
	orr r4, r4, r1
	str r4, [sp, #12]
	ldr r6, _080EF888  @ =0x000011F0
	add r0, r2, r6
	add r3, r7, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080EF81A
	b _080EFC32
_080EF81A:
	add r1, r2, #0
	ldr r2, _080EF848  @ =0x00000F12
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	lsr r0, r0, #7
	str r0, [sp, #16]
	ldr r0, _080EF88C  @ =gUnknown_08178C14
	ldr r4, [sp, #16]
	add r0, r4, r0
	ldrb r0, [r0]
	mov r9, r0
	ldrb r4, [r3]
	b _080EF96E
	.byte 0x00
	.byte 0x00
_080EF838:
	.4byte gUnknown_08178C0C
_080EF83C:
	.4byte gUnknown_08178BE0
_080EF840:
	.4byte gRam
_080EF844:
	.4byte 0x00001052
_080EF848:
	.4byte 0x00000F12
_080EF84C:
	.4byte 0x00001152
_080EF850:
	.4byte 0x00000961
_080EF854:
	.4byte 0x00000F92
_080EF858:
	.4byte gUnknown_0200EF18
_080EF85C:
	.4byte gUnknown_0200EE18
_080EF860:
	.4byte 0x00001142
_080EF864:
	.4byte gUnknown_0200ED18
_080EF868:
	.4byte 0x00000ED2
_080EF86C:
	.4byte gUnknown_0200EC18
_080EF870:
	.4byte 0x00000EE2
_080EF874:
	.4byte 0x00000FA2
_080EF878:
	.4byte 0x000009AD
_080EF87C:
	.4byte 0x00001605
_080EF880:
	.4byte 0x00001122
_080EF884:
	.4byte 0x00000D94
_080EF888:
	.4byte 0x000011F0
_080EF88C:
	.4byte gUnknown_08178C14
_080EF890:
	ldr r0, [sp, #8]
	add r0, r0, r8
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r6, #8
	neg r6, r6
	add r8, r8, r6
	mov r0, #63
	mov r1, r8
	and r1, r1, r0
	mov r8, r1
	ldr r3, _080EF8E0  @ =gUnknown_0200EE18
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r4, r4, #24
	mov r10, r4
	cmp r0, #0
	bne _080EF952
	ldr r4, _080EF8E4  @ =gRam
	ldr r6, _080EF8E8  @ =0x000011F0
	add r0, r4, r6
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #7
	bne _080EF8CA
	cmp r2, #0
	beq _080EF8F4
_080EF8CA:
	mov r6, #150
	mov r2, r10
	asr r0, r2, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080EF900
	ldr r1, _080EF8EC  @ =gUnknown_08178C18
	ldr r3, _080EF8F0  @ =gUnknown_0200EF18
	add r0, r5, r3
	b _080EF8FA
	.byte 0x00
	.byte 0x00
_080EF8E0:
	.4byte gUnknown_0200EE18
_080EF8E4:
	.4byte gRam
_080EF8E8:
	.4byte 0x000011F0
_080EF8EC:
	.4byte gUnknown_08178C18
_080EF8F0:
	.4byte gUnknown_0200EF18
_080EF8F4:
	ldr r1, _080EFA4C  @ =gUnknown_08178C28
	ldr r4, _080EFA50  @ =gUnknown_0200EF18
	add r0, r5, r4
_080EF8FA:
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r6, [r0]
_080EF900:
	ldr r0, [sp, #4]
	add r0, r0, r9
	lsr r0, r0, #2
	ldr r2, _080EFA54  @ =gUnknown_0200EC18
	add r1, r5, r2
	ldrb r1, [r1]
	ldr r3, _080EFA58  @ =gRam
	ldr r4, _080EFA5C  @ =0x00000952
	add r2, r3, r4
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080EFA60  @ =gUnknown_0200ED18
	add r2, r5, r3
	ldrb r2, [r2]
	ldr r4, _080EFA64  @ =gUnknown_0200EE18
	add r3, r5, r4
	ldrb r3, [r3]
	sub r2, r2, r3
	ldr r4, _080EFA68  @ =gUnknown_03002B88
	ldrh r3, [r4]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080EFA6C  @ =gUnknown_08178C38
	mov r12, r3
	ldr r4, _080EFA50  @ =gUnknown_0200EF18
	add r3, r5, r4
	ldrb r3, [r3]
	add r3, r3, r12
	ldrb r4, [r3]
	ldr r3, [sp, #12]
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r6, r6, r3
	mov r3, #2
	str r3, [sp]
	add r3, r6, #0
	bl sub_080C6004
_080EF952:
	mov r0, #255
	lsl r0, r0, #24
	add r0, r0, r10
	lsr r4, r0, #24
	ldr r1, _080EFA70  @ =gUnknown_08178C16
	ldr r6, [sp, #16]
	add r1, r6, r1
	mov r0, r9
	add r0, r0, #3
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
_080EF96E:
	lsl r2, r4, #24
	cmp r2, #0
	bge _080EF890
	ldr r1, _080EFA58  @ =gRam
	ldr r2, _080EFA74  @ =0x00001052
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	mov r8, r0
	ldr r3, _080EFA78  @ =0x000011F0
	add r0, r1, r3
	add r0, r7, r0
	mov r4, #32
	mov r9, r4
	ldrb r4, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080EFA0A
	mov r10, r1
	ldr r6, _080EFA7C  @ =0x00000958
	add r5, r1, r6
_080EF99C:
	ldr r0, [sp, #8]
	add r0, r0, r8
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r0, #8
	neg r0, r0
	add r8, r8, r0
	mov r0, #63
	mov r1, r8
	and r1, r1, r0
	mov r8, r1
	ldr r2, _080EFA64  @ =gUnknown_0200EE18
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080EF9F2
	ldr r0, [sp, #4]
	add r0, r0, r9
	lsr r0, r0, #2
	ldr r6, _080EFA54  @ =gUnknown_0200EC18
	add r1, r3, r6
	ldrb r1, [r1]
	ldr r2, _080EFA5C  @ =0x00000952
	add r2, r2, r10
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r6, _080EFA60  @ =gUnknown_0200ED18
	add r2, r3, r6
	ldrb r2, [r2]
	ldrh r3, [r5]
	sub r3, r3, #10
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #2
	str r3, [sp]
	ldr r3, _080EFA80  @ =0x000004CC
	bl sub_080C6004
_080EF9F2:
	lsl r1, r4, #24
	mov r0, #255
	lsl r0, r0, #24
	add r1, r1, r0
	mov r0, r9
	add r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	lsr r4, r1, #24
	cmp r1, #0
	bge _080EF99C
_080EFA0A:
	ldr r1, _080EFA58  @ =gRam
	ldr r2, _080EFA84  @ =0x00000F52
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080EFA1A
	b _080EFBB8
_080EFA1A:
	cmp r0, #5
	bne _080EFA20
	b _080EFC32
_080EFA20:
	ldr r3, _080EFA88  @ =0x00000FD2
	add r0, r1, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EFA2E
	b _080EFC32
_080EFA2E:
	ldr r4, _080EFA8C  @ =0x00000F12
	add r0, r1, r4
	add r0, r7, r0
	ldrb r1, [r0]
	lsr r1, r1, #7
	ldrb r0, [r0]
	lsl r0, r0, #3
	orr r1, r1, r0
	cmp r1, #0
	beq _080EFA90
	mov r0, #8
	bl sub_080CF3A0
	b _080EFA96
	.byte 0x00
	.byte 0x00
_080EFA4C:
	.4byte gUnknown_08178C28
_080EFA50:
	.4byte gUnknown_0200EF18
_080EFA54:
	.4byte gUnknown_0200EC18
_080EFA58:
	.4byte gRam
_080EFA5C:
	.4byte 0x00000952
_080EFA60:
	.4byte gUnknown_0200ED18
_080EFA64:
	.4byte gUnknown_0200EE18
_080EFA68:
	.4byte gUnknown_03002B88
_080EFA6C:
	.4byte gUnknown_08178C38
_080EFA70:
	.4byte gUnknown_08178C16
_080EFA74:
	.4byte 0x00001052
_080EFA78:
	.4byte 0x000011F0
_080EFA7C:
	.4byte 0x00000958
_080EFA80:
	.4byte 0x000004CC
_080EFA84:
	.4byte 0x00000F52
_080EFA88:
	.4byte 0x00000FD2
_080EFA8C:
	.4byte 0x00000F12
_080EFA90:
	mov r0, #8
	bl sub_080CF388
_080EFA96:
	ldr r2, _080EFB84  @ =gRam
	ldr r6, _080EFB88  @ =0x00000FD2
	add r0, r2, r6
	add r0, r7, r0
	ldrb r1, [r0]
	lsr r1, r1, #2
	mov r0, #3
	bic r0, r0, r1
	lsl r0, r0, #1
	ldr r3, _080EFB8C  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	ldr r4, _080EFB90  @ =0x00000FB2
	add r0, r2, r4
	add r0, r7, r0
	ldrb r1, [r0]
	sub r6, r6, #208
	add r0, r2, r6
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r3, r3, #26
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	strh r1, [r0]
	ldr r6, _080EFB94  @ =0x00001042
	add r0, r2, r6
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _080EFB98  @ =0x00000EF2
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r4, r4, #8
	add r0, r2, r4
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r6, _080EFB9C  @ =0x00000964
	add r0, r2, r6
	strh r1, [r0]
	mov r4, #1
	mov r7, #0
	mov r9, r7
	add r7, r2, #0
	mov r10, r0
_080EFAFE:
	ldr r1, _080EFB8C  @ =0x0000096C
	add r0, r7, r1
	ldrb r6, [r0]
	lsl r4, r4, #24
	mov r8, r4
	mov r2, r8
	asr r2, r2, #24
	mov r8, r2
	add r6, r6, r8
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r1, _080EFBA0  @ =gUnknown_08178C48
	add r1, r6, r1
	ldr r3, _080EFBA4  @ =gUnknown_08178C50
	add r3, r6, r3
	ldr r0, _080EFBA8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r9
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r4, #150
	lsl r4, r4, #4
	add r2, r7, r4
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, #0
	ldrsb r2, [r3, r2]
	mov r3, r10
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080EFBAC  @ =gUnknown_08178C58
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080EFBB0  @ =gUnknown_08178C60
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #49
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _080EFBB4  @ =gUnknown_08178C68
	add r6, r6, r4
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6004
	mov r4, #1
	neg r4, r4
	add r8, r8, r4
	mov r6, r8
	lsl r6, r6, #24
	mov r0, r9
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	lsr r4, r6, #24
	cmp r6, #0
	bge _080EFAFE
	b _080EFC32
_080EFB84:
	.4byte gRam
_080EFB88:
	.4byte 0x00000FD2
_080EFB8C:
	.4byte 0x0000096C
_080EFB90:
	.4byte 0x00000FB2
_080EFB94:
	.4byte 0x00001042
_080EFB98:
	.4byte 0x00000EF2
_080EFB9C:
	.4byte 0x00000964
_080EFBA0:
	.4byte gUnknown_08178C48
_080EFBA4:
	.4byte gUnknown_08178C50
_080EFBA8:
	.4byte gUnknown_03003E74
_080EFBAC:
	.4byte gUnknown_08178C58
_080EFBB0:
	.4byte gUnknown_08178C60
_080EFBB4:
	.4byte gUnknown_08178C68
_080EFBB8:
	ldr r0, _080EFC44  @ =gRam
	ldr r2, _080EFC48  @ =0x00000D94
	add r1, r0, r2
	add r1, r7, r1
	ldr r3, _080EFC4C  @ =0x00001122
	add r0, r0, r3
	add r0, r7, r0
	ldrb r5, [r1]
	ldrb r0, [r0]
	eor r5, r5, r0
	mov r0, #48
	and r5, r5, r0
	mov r0, #4
	bl sub_080CF388
	ldr r1, _080EFC50  @ =gUnknown_08178C7C
	ldr r4, _080EFC44  @ =gRam
	ldr r6, _080EFC54  @ =0x00000FC2
	add r0, r4, r6
	add r0, r7, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r0, r0, r1
	ldrb r6, [r0]
	ldr r0, _080EFC58  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r2, _080EFC5C  @ =0x00000EE2
	add r1, r4, r2
	add r1, r7, r1
	ldrb r1, [r1]
	ldr r3, _080EFC60  @ =0x00000952
	add r2, r4, r3
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080EFC64  @ =0x00000ED2
	add r2, r4, r3
	add r2, r7, r2
	ldrb r2, [r2]
	ldr r7, _080EFC68  @ =0x00000958
	add r3, r4, r7
	ldrh r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080EFC6C  @ =gUnknown_08178C70
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080EFC70  @ =gUnknown_08178C76
	add r6, r6, r4
	mov r4, #1
	orr r5, r5, r4
	ldrb r4, [r6]
	orr r5, r5, r4
	lsl r5, r5, #8
	orr r3, r3, r5
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
_080EFC32:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EFC44:
	.4byte gRam
_080EFC48:
	.4byte 0x00000D94
_080EFC4C:
	.4byte 0x00001122
_080EFC50:
	.4byte gUnknown_08178C7C
_080EFC54:
	.4byte 0x00000FC2
_080EFC58:
	.4byte gUnknown_03003E74
_080EFC5C:
	.4byte 0x00000EE2
_080EFC60:
	.4byte 0x00000952
_080EFC64:
	.4byte 0x00000ED2
_080EFC68:
	.4byte 0x00000958
_080EFC6C:
	.4byte gUnknown_08178C70
_080EFC70:
	.4byte gUnknown_08178C76
	THUMB_FUNC_END sub_080EF72C

