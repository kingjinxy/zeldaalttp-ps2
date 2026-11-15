	THUMB_FUNC_START sub_0807EA94
sub_0807EA94: @ 0x0807EA94
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0807EAE4  @ =gRam
	ldr r1, _0807EAE8  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #1
	mov r1, sp
	bl sub_0807E398
	ldr r2, _0807EAEC  @ =0x0000097C
	add r3, r4, r2
	mov r1, #0
	mov r5, #64
	strh r5, [r3]
	cmp r0, #72
	beq _0807EAC0
	mov r5, #68
	strh r5, [r3]
	cmp r0, #74
	bne _0807EAF4
_0807EAC0:
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807EAF0  @ =0x000018B0
	add r0, r4, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r2
	orr r0, r0, r5
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r3, r1]
	bl sub_0807E9A8
	b _0807EAF8
	.byte 0x00
	.byte 0x00
_0807EAE4:
	.4byte gRam
_0807EAE8:
	.4byte 0x00000B08
_0807EAEC:
	.4byte 0x0000097C
_0807EAF0:
	.4byte 0x000018B0
_0807EAF4:
	bl sub_0807E9A8
_0807EAF8:
	ldr r0, _0807EB1C  @ =gRam
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807EB20  @ =0x000018D0
	add r0, r0, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807EB1C:
	.4byte gRam
_0807EB20:
	.4byte 0x000018D0
	THUMB_FUNC_END sub_0807EA94

