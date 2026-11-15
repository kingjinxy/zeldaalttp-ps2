	THUMB_FUNC_START sub_0808F678
sub_0808F678: @ 0x0808F678
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r2, r0, #0
	mov r1, #128
	lsl r1, r1, #5
	and r2, r2, r1
	lsl r2, r2, #1
	add r5, r0, #0
	mov r3, #128
	lsl r3, r3, #4
	and r5, r5, r3
	mov r7, #64
	add r4, r0, #0
	and r4, r4, r7
	lsl r4, r4, #6
	mov r6, #32
	mov r12, r6
	add r3, r0, #0
	and r3, r3, r6
	lsl r3, r3, #5
	mov r1, #240
	lsl r1, r1, #3
	mov r10, r1
	add r1, r0, #0
	mov r6, r10
	and r1, r1, r6
	asr r1, r1, #1
	orr r2, r2, r5
	orr r2, r2, r4
	orr r2, r2, r3
	orr r2, r2, r1
	mov r1, #31
	mov r9, r1
	add r1, r0, #0
	mov r3, r9
	and r1, r1, r3
	orr r2, r2, r1
	lsl r2, r2, #1
	ldr r5, _0808F85C  @ =gUnknown_02018000
	add r3, r2, r5
	ldr r6, _0808F860  @ =gUnknown_08155B4E
	mov r8, r6
	ldr r1, _0808F864  @ =0x000048C0
	add r1, r1, r8
	ldrh r1, [r1]
	strh r1, [r3]
	ldr r1, _0808F868  @ =gUnknown_02018002
	add r3, r2, r1
	ldr r1, _0808F86C  @ =0x000048C2
	add r1, r1, r8
	ldrh r1, [r1]
	strh r1, [r3]
	add r5, r5, #64
	add r3, r2, r5
	ldr r1, _0808F870  @ =0x000048C4
	add r1, r1, r8
	ldrh r1, [r1]
	strh r1, [r3]
	ldr r6, _0808F874  @ =gUnknown_02018042
	add r2, r2, r6
	ldr r1, _0808F878  @ =0x000048C6
	add r1, r1, r8
	ldrh r1, [r1]
	strh r1, [r2]
	add r4, r0, #2
	add r1, r4, #0
	mov r2, #128
	lsl r2, r2, #5
	and r1, r1, r2
	lsl r1, r1, #1
	add r6, r4, #0
	mov r3, #128
	lsl r3, r3, #4
	and r6, r6, r3
	add r5, r4, #0
	and r5, r5, r7
	lsl r5, r5, #6
	str r5, [sp]
	add r3, r4, #0
	mov r5, r12
	and r3, r3, r5
	lsl r3, r3, #5
	add r2, r4, #0
	mov r5, r10
	and r2, r2, r5
	asr r2, r2, #1
	orr r1, r1, r6
	ldr r6, [sp]
	orr r1, r1, r6
	orr r1, r1, r3
	orr r1, r1, r2
	mov r2, r9
	and r4, r4, r2
	orr r1, r1, r4
	lsl r1, r1, #1
	ldr r5, _0808F85C  @ =gUnknown_02018000
	add r3, r1, r5
	ldr r2, _0808F87C  @ =0x000048C8
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r3]
	ldr r6, _0808F868  @ =gUnknown_02018002
	add r3, r1, r6
	ldr r2, _0808F880  @ =0x000048CA
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r3]
	ldr r2, _0808F884  @ =gUnknown_02018040
	add r3, r1, r2
	ldr r2, _0808F888  @ =0x000048CC
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r3]
	ldr r3, _0808F874  @ =gUnknown_02018042
	add r1, r1, r3
	ldr r2, _0808F88C  @ =0x000048CE
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r1]
	add r4, r0, #0
	add r4, r4, #128
	add r1, r4, #0
	mov r5, #128
	lsl r5, r5, #5
	and r1, r1, r5
	lsl r1, r1, #1
	add r6, r4, #0
	mov r2, #128
	lsl r2, r2, #4
	and r6, r6, r2
	add r5, r4, #0
	and r5, r5, r7
	lsl r5, r5, #6
	str r5, [sp]
	add r3, r4, #0
	mov r5, r12
	and r3, r3, r5
	lsl r3, r3, #5
	add r2, r4, #0
	mov r5, r10
	and r2, r2, r5
	asr r2, r2, #1
	orr r1, r1, r6
	ldr r6, [sp]
	orr r1, r1, r6
	orr r1, r1, r3
	orr r1, r1, r2
	mov r2, r9
	and r4, r4, r2
	orr r1, r1, r4
	lsl r1, r1, #1
	ldr r5, _0808F85C  @ =gUnknown_02018000
	add r3, r1, r5
	ldr r2, _0808F890  @ =0x000048D0
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r3]
	ldr r6, _0808F868  @ =gUnknown_02018002
	add r3, r1, r6
	ldr r2, _0808F894  @ =0x000048D2
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r3]
	ldr r2, _0808F884  @ =gUnknown_02018040
	add r3, r1, r2
	ldr r2, _0808F898  @ =0x000048D4
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r3]
	ldr r3, _0808F874  @ =gUnknown_02018042
	add r1, r1, r3
	ldr r2, _0808F89C  @ =0x000048D6
	add r2, r2, r8
	ldrh r2, [r2]
	strh r2, [r1]
	add r0, r0, #130
	add r1, r0, #0
	mov r5, #128
	lsl r5, r5, #5
	and r1, r1, r5
	lsl r1, r1, #1
	add r5, r0, #0
	mov r6, #128
	lsl r6, r6, #4
	and r5, r5, r6
	add r4, r0, #0
	and r4, r4, r7
	lsl r4, r4, #6
	add r3, r0, #0
	mov r2, r12
	and r3, r3, r2
	lsl r3, r3, #5
	add r2, r0, #0
	mov r6, r10
	and r2, r2, r6
	asr r2, r2, #1
	orr r1, r1, r5
	orr r1, r1, r4
	orr r1, r1, r3
	orr r1, r1, r2
	mov r2, r9
	and r0, r0, r2
	orr r1, r1, r0
	lsl r1, r1, #1
	ldr r3, _0808F85C  @ =gUnknown_02018000
	add r2, r1, r3
	ldr r0, _0808F8A0  @ =0x000048D8
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r5, _0808F868  @ =gUnknown_02018002
	add r2, r1, r5
	ldr r0, _0808F8A4  @ =0x000048DA
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r6, _0808F884  @ =gUnknown_02018040
	add r2, r1, r6
	ldr r0, _0808F8A8  @ =0x000048DC
	add r0, r0, r8
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _0808F874  @ =gUnknown_02018042
	add r1, r1, r0
	ldr r2, _0808F8AC  @ =0x000048DE
	add r8, r8, r2
	mov r3, r8
	ldrh r0, [r3]
	strh r0, [r1]
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
_0808F85C:
	.4byte gUnknown_02018000
_0808F860:
	.4byte gUnknown_08155B4E
_0808F864:
	.4byte 0x000048C0
_0808F868:
	.4byte gUnknown_02018002
_0808F86C:
	.4byte 0x000048C2
_0808F870:
	.4byte 0x000048C4
_0808F874:
	.4byte gUnknown_02018042
_0808F878:
	.4byte 0x000048C6
_0808F87C:
	.4byte 0x000048C8
_0808F880:
	.4byte 0x000048CA
_0808F884:
	.4byte gUnknown_02018040
_0808F888:
	.4byte 0x000048CC
_0808F88C:
	.4byte 0x000048CE
_0808F890:
	.4byte 0x000048D0
_0808F894:
	.4byte 0x000048D2
_0808F898:
	.4byte 0x000048D4
_0808F89C:
	.4byte 0x000048D6
_0808F8A0:
	.4byte 0x000048D8
_0808F8A4:
	.4byte 0x000048DA
_0808F8A8:
	.4byte 0x000048DC
_0808F8AC:
	.4byte 0x000048DE
	THUMB_FUNC_END sub_0808F678

