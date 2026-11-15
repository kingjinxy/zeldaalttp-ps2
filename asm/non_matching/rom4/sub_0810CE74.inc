	THUMB_FUNC_START sub_0810CE74
sub_0810CE74: @ 0x0810CE74
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _0810CFA0  @ =gRam
	ldr r0, _0810CFA4  @ =0x00000D16
	add r3, r1, r0
	ldr r4, _0810CFA8  @ =0x00000D1A
	add r2, r1, r4
	ldrh r0, [r3]
	ldrb r2, [r2]
	add r0, r0, r2
	strh r0, [r3]
	ldr r7, _0810CFAC  @ =0x00000996
	add r0, r1, r7
	ldrb r2, [r0]
	mov r0, #3
	and r0, r0, r2
	add r5, r1, #0
	cmp r0, #0
	bne _0810CEBC
	ldr r1, _0810CFB0  @ =0x00000F62
	add r0, r5, r1
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #13
	bne _0810CEBC
	mov r0, #0
	strb r0, [r1]
_0810CEBC:
	ldr r2, _0810CFAC  @ =0x00000996
	add r0, r5, r2
	ldrb r0, [r0]
	mov r2, #7
	and r2, r2, r0
	cmp r2, #0
	bne _0810CEE0
	ldr r3, _0810CFB4  @ =0x00000F72
	add r0, r5, r3
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #13
	bne _0810CEE0
	strb r2, [r1]
_0810CEE0:
	ldr r4, _0810CFB8  @ =0x000015F9
	add r1, r5, r4
	mov r0, #0
	strb r0, [r1]
	mov r8, r5
	mov r12, r1
	ldr r7, _0810CFBC  @ =0x0000097D
	add r7, r7, r5
	mov r10, r7
	ldr r0, _0810CFC0  @ =0x00000964
	add r0, r0, r5
	mov r9, r0
_0810CEF8:
	mov r1, r12
	ldrb r3, [r1]
	lsl r1, r3, #1
	ldr r2, _0810CFC4  @ =gUnknown_0817CDFC
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r4, _0810CFC8  @ =gUnknown_03002F46
	ldrh r4, [r4]
	add r2, r2, r4
	ldr r7, _0810CFCC  @ =gUnknown_0817CE16
	add r1, r1, r7
	ldrh r0, [r1]
	eor r2, r2, r0
	ldr r0, _0810CFD0  @ =gUnknown_03002B90
	strh r2, [r0]
	ldr r1, _0810CFD4  @ =0x00000D18
	add r1, r1, r8
	ldr r4, _0810CFD8  @ =gUnknown_0817CE30
	add r0, r3, r4
	ldrb r3, [r0]
	ldrb r1, [r1]
	add r3, r3, r1
	ldr r7, _0810CFDC  @ =gUnknown_03002BAC
	strb r3, [r7]
	mov r0, r10
	strb r3, [r0]
	mov r1, r12
	ldrb r0, [r1]
	mov r4, r9
	strb r0, [r4]
	ldr r1, _0810CFB0  @ =0x00000F62
	add r1, r1, r8
	add r1, r6, r1
	mov r0, #0
	ldrsb r0, [r4, r0]
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r7, _0810CFE0  @ =gUnknown_0817CE3D
	add r0, r0, r7
	ldrb r0, [r0]
	add r0, r3, r0
	mov r1, r10
	strb r0, [r1]
	ldr r1, _0810CFB4  @ =0x00000F72
	add r1, r1, r8
	add r1, r6, r1
	mov r0, #0
	ldrsb r0, [r4, r0]
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, r7
	ldrb r0, [r0]
	add r3, r3, r0
	ldr r4, _0810CFDC  @ =gUnknown_03002BAC
	strb r3, [r4]
	mov r1, #255
	add r0, r2, #0
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r7, _0810CFE4  @ =gUnknown_08173F38
	add r0, r0, r7
	ldrh r0, [r0]
	ldr r3, _0810CFE8  @ =gUnknown_03002B98
	strh r0, [r3]
	add r2, r2, #128
	mov r4, r9
	strh r2, [r4]
	and r2, r2, r1
	lsl r2, r2, #1
	add r2, r2, r7
	ldrh r1, [r2]
	ldr r0, _0810CFEC  @ =0x0000096C
	add r0, r0, r8
	strh r1, [r0]
	ldr r0, _0810CFF0  @ =0x00000969
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0810CFF4
	mov r7, r10
	ldrb r2, [r7]
	b _0810D00E
_0810CFA0:
	.4byte gRam
_0810CFA4:
	.4byte 0x00000D16
_0810CFA8:
	.4byte 0x00000D1A
_0810CFAC:
	.4byte 0x00000996
_0810CFB0:
	.4byte 0x00000F62
_0810CFB4:
	.4byte 0x00000F72
_0810CFB8:
	.4byte 0x000015F9
_0810CFBC:
	.4byte 0x0000097D
_0810CFC0:
	.4byte 0x00000964
_0810CFC4:
	.4byte gUnknown_0817CDFC
_0810CFC8:
	.4byte gUnknown_03002F46
_0810CFCC:
	.4byte gUnknown_0817CE16
_0810CFD0:
	.4byte gUnknown_03002B90
_0810CFD4:
	.4byte 0x00000D18
_0810CFD8:
	.4byte gUnknown_0817CE30
_0810CFDC:
	.4byte gUnknown_03002BAC
_0810CFE0:
	.4byte gUnknown_0817CE3D
_0810CFE4:
	.4byte gUnknown_08173F38
_0810CFE8:
	.4byte gUnknown_03002B98
_0810CFEC:
	.4byte 0x0000096C
_0810CFF0:
	.4byte 0x00000969
_0810CFF4:
	ldr r0, _0810D080  @ =gUnknown_03002B98
	ldrb r1, [r0]
	mov r2, r10
	ldrb r0, [r2]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
_0810D00E:
	ldr r3, _0810D084  @ =0x00000961
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0810D024
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_0810D024:
	ldr r7, _0810D088  @ =0x00000974
	add r4, r5, r7
	mov r0, #0
	strb r0, [r4]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _0810D03A
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
_0810D03A:
	mov r0, r12
	ldrb r3, [r0]
	ldr r1, _0810D08C  @ =0x00000EE2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r7, _0810D090  @ =0x00000F02
	add r0, r5, r7
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, r2
	mov r0, #0
	ldrsb r0, [r4, r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _0810D094  @ =gUnknown_02003040
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _0810D098  @ =gUnknown_02003050
	add r0, r3, r4
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r7, _0810D09C  @ =0x0000096D
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0810D0A4
	ldr r0, _0810D0A0  @ =gUnknown_03002BAC
	ldrb r2, [r0]
	b _0810D0C0
	.byte 0x00
	.byte 0x00
_0810D080:
	.4byte gUnknown_03002B98
_0810D084:
	.4byte 0x00000961
_0810D088:
	.4byte 0x00000974
_0810D08C:
	.4byte 0x00000EE2
_0810D090:
	.4byte 0x00000F02
_0810D094:
	.4byte gUnknown_02003040
_0810D098:
	.4byte gUnknown_02003050
_0810D09C:
	.4byte 0x0000096D
_0810D0A0:
	.4byte gUnknown_03002BAC
_0810D0A4:
	ldr r1, _0810D13C  @ =0x0000096C
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _0810D140  @ =gUnknown_03002BAC
	ldrb r0, [r2]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	mov r4, #1
	and r0, r0, r4
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r2, r1, #24
_0810D0C0:
	add r4, r5, #0
	ldr r7, _0810D144  @ =0x00000965
	add r0, r4, r7
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0810D0D8
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_0810D0D8:
	ldr r0, _0810D148  @ =0x00000974
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _0810D0EE
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
_0810D0EE:
	ldr r1, _0810D14C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r7, _0810D150  @ =0x00000EF2
	add r0, r5, r7
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, r2
	mov r0, #0
	ldrsb r0, [r4, r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #16
	ldr r2, _0810D154  @ =gUnknown_02003060
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _0810D158  @ =gUnknown_02003070
	add r0, r3, r4
	lsr r1, r1, #8
	strb r1, [r0]
	mov r7, r12
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #13
	beq _0810D12E
	b _0810CEF8
_0810D12E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0810D13C:
	.4byte 0x0000096C
_0810D140:
	.4byte gUnknown_03002BAC
_0810D144:
	.4byte 0x00000965
_0810D148:
	.4byte 0x00000974
_0810D14C:
	.4byte 0x00000ED2
_0810D150:
	.4byte 0x00000EF2
_0810D154:
	.4byte gUnknown_02003060
_0810D158:
	.4byte gUnknown_02003070
	THUMB_FUNC_END sub_0810CE74

