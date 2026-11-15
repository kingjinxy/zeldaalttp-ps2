	THUMB_FUNC_START sub_0807D638
sub_0807D638: @ 0x0807D638
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _0807D70C  @ =gRam
	ldr r1, _0807D710  @ =0x0000097C
	add r2, r0, r1
	mov r1, #4
	strh r1, [r2]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r0, r3
	mov r7, #0
	ldrsh r4, [r0, r7]
	mov r0, #63
	mov r8, r0
	mov r1, #64
	mov r12, r1
	mov r3, #192
	lsl r3, r3, #6
	mov r9, r3
	ldr r6, _0807D714  @ =gUnknown_02018000
	ldr r5, _0807D718  @ =gUnknown_081659E4
	mov r10, r2
_0807D66A:
	add r2, r4, #0
	mov r7, r12
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r4, #0
	mov r0, #248
	lsl r0, r0, #4
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, r9
	mov r3, r8
	orr r0, r0, r3
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5]
	strh r1, [r0]
	add r3, r4, #0
	add r3, r3, #128
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	mov r7, #248
	lsl r7, r7, #4
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r7, r8
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #2]
	strh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	add r3, r4, r0
	add r2, r3, #0
	mov r1, r12
	and r2, r2, r1
	lsl r2, r2, #5
	add r1, r3, #0
	mov r7, #248
	lsl r7, r7, #4
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r7, r8
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r5, #4]
	strh r1, [r0]
	add r4, r4, #2
	add r5, r5, #6
	mov r1, r10
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807D66A
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D70C:
	.4byte gRam
_0807D710:
	.4byte 0x0000097C
_0807D714:
	.4byte gUnknown_02018000
_0807D718:
	.4byte gUnknown_081659E4
	THUMB_FUNC_END sub_0807D638

