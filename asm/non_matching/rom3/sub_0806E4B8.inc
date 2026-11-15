	THUMB_FUNC_START sub_0806E4B8
sub_0806E4B8: @ 0x0806E4B8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r6, _0806E564  @ =gRam
	ldr r1, _0806E568  @ =gUnknown_08153538
	ldr r0, _0806E56C  @ =0x00000B32
	add r2, r6, r0
	ldrh r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r3, _0806E570  @ =0x00000B1E
	add r0, r6, r3
	mov r3, #0
	mov r8, r3
	mov r7, #0
	strh r1, [r0]
	ldr r1, _0806E574  @ =gUnknown_0815353B
	ldrh r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r6, r2
	strb r1, [r0]
	ldr r3, _0806E578  @ =0x000009B4
	add r2, r6, r3
	ldrb r1, [r2]
	mov r0, #16
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _0806E57C  @ =0x000009B5
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0806E580  @ =0x00000B0A
	add r0, r6, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0806E512
	bl sub_08089F2C
_0806E512:
	ldr r2, _0806E584  @ =0x000009DA
	add r5, r6, r2
	ldrh r1, [r5]
	ldr r3, _0806E588  @ =0x00000B36
	add r0, r6, r3
	strh r1, [r0]
	ldr r0, _0806E58C  @ =0x00000A4C
	add r4, r6, r0
	strh r7, [r4]
	ldr r1, _0806E590  @ =0x000009E8
	add r0, r6, r1
	strh r7, [r0]
	add r2, r2, #228
	add r0, r6, r2
	strh r7, [r0]
	ldr r3, _0806E594  @ =0x000009AD
	add r0, r6, r3
	mov r1, r8
	strb r1, [r0]
	mov r2, #188
	lsl r2, r2, #4
	add r0, r6, r2
	strh r7, [r0]
	ldr r3, _0806E598  @ =0x00000BBF
	add r0, r6, r3
	strb r1, [r0]
	bl sub_0808B1FC
	strh r7, [r4]
	ldrh r0, [r5]
	cmp r0, #7
	bne _0806E55A
	ldr r0, _0806E59C  @ =0x00000A49
	add r1, r6, r0
	mov r0, #255
	strb r0, [r1]
_0806E55A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0806E564:
	.4byte gRam
_0806E568:
	.4byte gUnknown_08153538
_0806E56C:
	.4byte 0x00000B32
_0806E570:
	.4byte 0x00000B1E
_0806E574:
	.4byte gUnknown_0815353B
_0806E578:
	.4byte 0x000009B4
_0806E57C:
	.4byte 0x000009B5
_0806E580:
	.4byte 0x00000B0A
_0806E584:
	.4byte 0x000009DA
_0806E588:
	.4byte 0x00000B36
_0806E58C:
	.4byte 0x00000A4C
_0806E590:
	.4byte 0x000009E8
_0806E594:
	.4byte 0x000009AD
_0806E598:
	.4byte 0x00000BBF
_0806E59C:
	.4byte 0x00000A49
	THUMB_FUNC_END sub_0806E4B8

