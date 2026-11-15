	THUMB_FUNC_START sub_0807EB24
sub_0807EB24: @ 0x0807EB24
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r7, _0807EBA0  @ =gRam
	ldr r1, _0807EBA4  @ =0x00000964
	add r0, r7, r1
	ldrh r0, [r0]
	lsl r2, r0, #16
	asr r0, r2, #16
	cmp r0, #11
	ble _0807EB6C
	ldr r3, _0807EBA8  @ =0x00000B08
	add r5, r7, r3
	ldrh r0, [r5]
	str r0, [sp]
	ldrh r1, [r5]
	mov r0, #8
	orr r0, r0, r1
	strh r0, [r5]
	mov r0, #151
	lsl r0, r0, #4
	add r4, r7, r0
	mov r1, #0
	ldrsh r6, [r4, r1]
	ldr r1, _0807EBAC  @ =gUnknown_081677A8
	asr r0, r2, #17
	add r0, r0, #6
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r4]
	bl sub_0807EC0C
	strh r6, [r4]
	mov r0, sp
	ldrh r0, [r0]
	strh r0, [r5]
_0807EB6C:
	ldr r2, _0807EBA8  @ =0x00000B08
	add r0, r7, r2
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #2
	mov r1, sp
	bl sub_0807E398
	ldr r3, _0807EBB0  @ =0x0000097C
	add r1, r7, r3
	mov r2, #0
	mov r3, #68
	strh r3, [r1]
	ldr r4, _0807EBB4  @ =0x00000968
	add r0, r7, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r0, #72
	bne _0807EBBC
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807EBB8  @ =0x000018B0
	add r0, r7, r2
	b _0807EBCE
	.byte 0x00
	.byte 0x00
_0807EBA0:
	.4byte gRam
_0807EBA4:
	.4byte 0x00000964
_0807EBA8:
	.4byte 0x00000B08
_0807EBAC:
	.4byte gUnknown_081677A8
_0807EBB0:
	.4byte 0x0000097C
_0807EBB4:
	.4byte 0x00000968
_0807EBB8:
	.4byte 0x000018B0
_0807EBBC:
	mov r3, #64
	strh r3, [r1]
	cmp r0, #74
	bne _0807EBDC
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r4, _0807EC00  @ =0x000018B0
	add r0, r7, r4
_0807EBCE:
	add r1, r1, r0
	ldrh r2, [r1]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r2
	orr r0, r0, r3
	strh r0, [r1]
_0807EBDC:
	ldr r0, _0807EC04  @ =gRam
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807EC08  @ =0x000018D0
	add r0, r0, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807EC00:
	.4byte 0x000018B0
_0807EC04:
	.4byte gRam
_0807EC08:
	.4byte 0x000018D0
	THUMB_FUNC_END sub_0807EB24

