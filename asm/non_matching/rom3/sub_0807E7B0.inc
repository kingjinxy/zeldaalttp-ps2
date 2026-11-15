	THUMB_FUNC_START sub_0807E7B0
sub_0807E7B0: @ 0x0807E7B0
	push {r4-r7,lr}
	ldr r5, _0807E878  @ =gRam
	ldr r1, _0807E87C  @ =gUnknown_081677D8
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	ldr r3, _0807E880  @ =0x00000B08
	add r3, r3, r5
	mov r12, r3
	ldrh r3, [r3]
	lsl r6, r3, #1
	ldr r2, _0807E884  @ =0x000018D0
	add r0, r5, r2
	add r0, r6, r0
	add r1, r1, #20
	strh r1, [r0]
	ldr r1, _0807E888  @ =0x000018B0
	add r0, r5, r1
	add r7, r6, r0
	lsl r4, r3, #8
	mov r0, #48
	orr r4, r4, r0
	strh r4, [r7]
	ldr r0, _0807E88C  @ =0x00000BFE
	add r2, r5, r0
	ldr r1, _0807E890  @ =gUnknown_081676B2
	mov r0, #15
	and r3, r3, r0
	lsl r0, r3, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r3, [r0]
	and r3, r3, r1
	cmp r3, #0
	beq _0807E8A4
	mov r3, #0
	ldr r1, _0807E894  @ =0x000009E6
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #32
	beq _0807E818
	cmp r0, #37
	beq _0807E818
	mov r1, #40
	eor r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r3, r0, #31
_0807E818:
	ldr r5, _0807E898  @ =gUnknown_03002C16
	add r1, r3, r5
	mov r0, #0
	strb r0, [r1]
	add r6, r5, #0
	sub r6, r6, #118
	mov r2, #0
	ldrsh r4, [r6, r2]
	sub r2, r5, #5
	ldrb r0, [r2]
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	mov r3, #137
	lsl r3, r3, #1
	add r2, r5, r3
	ldrh r1, [r2]
	sub r3, r3, #18
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _0807E89C  @ =gUnknown_08167A5C
	add r0, r0, #168
	ldr r0, [r0]
	bl sub_0807E604
	mov r0, #192
	lsl r0, r0, #2
	add r4, r4, r0
	strh r4, [r6]
	mov r2, #145
	lsl r2, r2, #1
	add r1, r5, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldrh r1, [r5, #46]
	mov r3, #128
	lsl r3, r3, #2
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r5, #46]
	ldr r0, _0807E8A0  @ =gUnknown_0816798C
	add r0, r0, #168
	ldr r0, [r0]
	bl sub_0807E604
	b _0807E8B6
_0807E878:
	.4byte gRam
_0807E87C:
	.4byte gUnknown_081677D8
_0807E880:
	.4byte 0x00000B08
_0807E884:
	.4byte 0x000018D0
_0807E888:
	.4byte 0x000018B0
_0807E88C:
	.4byte 0x00000BFE
_0807E890:
	.4byte gUnknown_081676B2
_0807E894:
	.4byte 0x000009E6
_0807E898:
	.4byte gUnknown_03002C16
_0807E89C:
	.4byte gUnknown_08167A5C
_0807E8A0:
	.4byte gUnknown_0816798C
_0807E8A4:
	ldr r1, _0807E8BC  @ =0x000018F0
	add r0, r5, r1
	add r0, r6, r0
	strh r3, [r0]
	strh r4, [r7]
	mov r2, r12
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
_0807E8B6:
	pop {r4-r7}
	pop {r0}
	bx r0
_0807E8BC:
	.4byte 0x000018F0
	THUMB_FUNC_END sub_0807E7B0

