	THUMB_FUNC_START sub_0807CBF0
sub_0807CBF0: @ 0x0807CBF0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r2, _0807CDC8  @ =gRam
	ldr r0, _0807CDCC  @ =0x000009EA
	add r4, r2, r0
	ldrh r0, [r4]
	lsl r0, r0, #2
	ldr r1, _0807CDD0  @ =0x000009EE
	add r3, r2, r1
	ldrh r1, [r3]
	orr r0, r0, r1
	add r0, r0, #4
	strh r0, [r4]
	strh r0, [r3]
	ldr r3, _0807CDD4  @ =0x0000097C
	add r1, r2, r3
	strh r0, [r1]
	mov r5, #151
	lsl r5, r5, #4
	add r0, r2, r5
	mov r3, #0
	ldrsh r4, [r0, r3]
	add r7, r2, #0
	add r6, r0, #0
	add r5, r1, #0
_0807CC2A:
	ldr r0, _0807CDD8  @ =gUnknown_08164ACA
	bl sub_0807BB70
	ldrh r0, [r6]
	ldr r2, _0807CDDC  @ =0x00000978
	add r1, r7, r2
	strh r0, [r1]
	add r0, r0, #128
	strh r0, [r6]
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807CC2A
	add r0, r1, #0
	sub r0, r0, #8
	strh r4, [r0]
	mov r0, #2
	strh r0, [r1, #4]
	ldr r3, _0807CDE0  @ =gUnknown_08164B5C
	ldr r5, _0807CDE4  @ =0xFFFFF688
	add r5, r5, r1
	mov r8, r5
	ldr r6, _0807CDE8  @ =0x00000974
	add r6, r6, r8
	mov r0, #64
	mov r9, r0
	mov r2, #248
	lsl r2, r2, #4
	mov r12, r2
	mov r5, #192
	lsl r5, r5, #6
	mov r10, r5
	ldr r7, _0807CDEC  @ =gUnknown_02018000
_0807CC70:
	ldr r1, _0807CDF0  @ =gUnknown_03002C1A
	ldrh r0, [r1]
	sub r0, r0, #2
	strh r0, [r6]
	add r2, r4, #0
	mov r5, r9
	and r2, r2, r5
	lsl r2, r2, #5
	add r1, r4, #0
	mov r0, r12
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, r10
	mov r5, #63
	orr r0, r0, r5
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r1, [r3]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r3, #6
	str r0, [sp]
_0807CCA4:
	add r2, r4, #0
	mov r1, r9
	and r2, r2, r1
	lsl r2, r2, #5
	add r1, r4, #0
	mov r5, r12
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r10
	mov r5, #63
	orr r0, r0, r5
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r1, [r3, #2]
	strh r1, [r0]
	add r4, r4, #2
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807CCA4
	add r2, r4, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r4, #0
	mov r5, r12
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r10
	mov r5, #63
	orr r0, r0, r5
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r7
	ldrh r1, [r3, #4]
	strh r1, [r0]
	ldr r3, [sp]
	ldr r1, _0807CDC8  @ =gRam
	ldr r2, _0807CDDC  @ =0x00000978
	add r0, r1, r2
	mov r5, #0
	ldrsh r4, [r0, r5]
	ldr r1, _0807CDF4  @ =gUnknown_03002BAC
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807CC70
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r8
	mov r2, #0
	ldrsh r0, [r0, r2]
	add r4, r0, #0
	add r4, r4, #128
	ldr r0, _0807CDCC  @ =0x000009EA
	add r0, r0, r8
	ldrh r0, [r0]
	sub r2, r0, #1
	sub r0, r0, #2
	ldr r1, _0807CDD0  @ =0x000009EE
	add r1, r1, r8
	strh r0, [r1]
_0807CD36:
	add r4, r4, #2
	sub r2, r2, #1
	cmp r2, #0
	bne _0807CD36
	ldr r2, _0807CDDC  @ =0x00000978
	add r2, r2, r8
	strh r4, [r2]
	ldr r1, _0807CDD4  @ =0x0000097C
	add r1, r1, r8
	mov r0, #2
	strh r0, [r1]
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r8
	mov r3, #0
	ldrsh r0, [r0, r3]
	add r4, r0, #0
	add r4, r4, #128
	ldr r3, _0807CDF8  @ =gUnknown_08164B68
	ldr r5, _0807CDD0  @ =0x000009EE
	add r5, r5, r8
	mov r9, r5
	ldr r5, _0807CDE8  @ =0x00000974
	add r5, r5, r8
	add r7, r1, #0
	mov r8, r2
_0807CD6A:
	mov r1, r9
	ldrh r0, [r1]
	strh r0, [r5]
	add r6, r3, #2
_0807CD72:
	mov r2, #64
	and r2, r2, r4
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	and r1, r1, r4
	asr r1, r1, #1
	ldr r0, _0807CDFC  @ =0x0000303F
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r1, r2, #1
	ldr r0, _0807CDEC  @ =gUnknown_02018000
	add r1, r1, r0
	ldrh r0, [r3]
	strh r0, [r1]
	add r4, r4, #128
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807CD72
	add r3, r6, #0
	mov r2, r8
	mov r0, #0
	ldrsh r4, [r2, r0]
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807CD6A
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807CDC8:
	.4byte gRam
_0807CDCC:
	.4byte 0x000009EA
_0807CDD0:
	.4byte 0x000009EE
_0807CDD4:
	.4byte 0x0000097C
_0807CDD8:
	.4byte gUnknown_08164ACA
_0807CDDC:
	.4byte 0x00000978
_0807CDE0:
	.4byte gUnknown_08164B5C
_0807CDE4:
	.4byte 0xFFFFF688
_0807CDE8:
	.4byte 0x00000974
_0807CDEC:
	.4byte gUnknown_02018000
_0807CDF0:
	.4byte gUnknown_03002C1A
_0807CDF4:
	.4byte gUnknown_03002BAC
_0807CDF8:
	.4byte gUnknown_08164B68
_0807CDFC:
	.4byte 0x0000303F
	THUMB_FUNC_END sub_0807CBF0

