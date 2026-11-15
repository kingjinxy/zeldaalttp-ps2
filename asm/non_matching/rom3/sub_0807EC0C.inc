	THUMB_FUNC_START sub_0807EC0C
sub_0807EC0C: @ 0x0807EC0C
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0807EC44  @ =gRam
	ldr r1, _0807EC48  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	str r0, [sp]
	mov r0, #3
	mov r1, sp
	bl sub_0807E398
	ldr r2, _0807EC4C  @ =0x0000097C
	add r1, r4, r2
	mov r2, #0
	mov r3, #64
	strh r3, [r1]
	ldr r5, _0807EC50  @ =0x00000968
	add r0, r4, r5
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r0, #72
	bne _0807EC58
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807EC54  @ =0x000018B0
	add r0, r4, r2
	b _0807EC6A
_0807EC44:
	.4byte gRam
_0807EC48:
	.4byte 0x00000B08
_0807EC4C:
	.4byte 0x0000097C
_0807EC50:
	.4byte 0x00000968
_0807EC54:
	.4byte 0x000018B0
_0807EC58:
	mov r3, #68
	strh r3, [r1]
	cmp r0, #74
	bne _0807EC78
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r5, _0807EC9C  @ =0x000018B0
	add r0, r4, r5
_0807EC6A:
	add r1, r1, r0
	ldrh r2, [r1]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r2
	orr r0, r0, r3
	strh r0, [r1]
_0807EC78:
	ldr r0, _0807ECA0  @ =gRam
	ldr r1, [sp]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _0807ECA4  @ =0x000018D0
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
_0807EC9C:
	.4byte 0x000018B0
_0807ECA0:
	.4byte gRam
_0807ECA4:
	.4byte 0x000018D0
	THUMB_FUNC_END sub_0807EC0C

