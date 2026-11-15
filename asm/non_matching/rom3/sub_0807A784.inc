	THUMB_FUNC_START sub_0807A784
sub_0807A784: @ 0x0807A784
	push {r4-r7,lr}
	ldr r6, _0807A830  @ =gRam
	mov r0, #188
	lsl r0, r0, #4
	add r7, r6, r0
	ldrh r0, [r7]
	cmp r0, #0
	beq _0807A82A
	ldr r2, _0807A834  @ =0x000009AD
	add r1, r6, r2
	mov r4, #0
	mov r0, #12
	strb r0, [r1]
	ldr r5, _0807A838  @ =0x00000ACA
	add r1, r6, r5
	mov r5, #0
	mov r0, #1
	strh r0, [r1]
	ldr r0, _0807A83C  @ =0x0000051A
	add r1, r6, r0
	mov r0, #63
	strh r0, [r1]
	ldr r2, _0807A840  @ =0x0000051C
	add r1, r6, r2
	mov r0, #61
	strh r0, [r1]
	mov r0, #1
	bl sub_0806BD6C
	bl sub_0808B158
	ldr r1, _0807A844  @ =0x00000CF8
	add r0, r6, r1
	strh r4, [r0]
	ldr r2, _0807A848  @ =0x00000CFA
	add r0, r6, r2
	strh r4, [r0]
	ldr r0, _0807A84C  @ =0x00000CFC
	add r1, r6, r0
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0807A850  @ =0x000009E7
	add r0, r6, r1
	strb r5, [r0]
	ldr r5, _0807A854  @ =0x00000AA8
	add r2, r6, r5
	ldr r1, _0807A858  @ =gUnknown_081676B2
	ldrh r0, [r2]
	ldrh r1, [r1, #8]
	orr r0, r0, r1
	strh r0, [r2]
	strh r4, [r7]
	ldr r1, _0807A85C  @ =0x00000BF4
	add r0, r6, r1
	ldrh r2, [r0]
	ldr r0, _0807A860  @ =0x000001FF
	add r1, r0, #0
	and r1, r1, r2
	sub r1, r1, #16
	lsl r1, r1, #4
	mov r2, #151
	lsl r2, r2, #4
	add r3, r6, r2
	ldr r5, _0807A864  @ =0x00000BF2
	add r2, r6, r5
	ldrh r2, [r2]
	and r0, r0, r2
	sub r0, r0, #16
	asr r0, r0, #2
	orr r1, r1, r0
	strh r1, [r3]
	bl sub_0807D9F8
	ldr r1, _0807A868  @ =0x00000978
	add r0, r6, r1
	strh r4, [r0]
	bl sub_08089F74
	ldr r2, _0807A86C  @ =0x00000504
	add r1, r6, r2
	mov r0, #53
	bl sub_0812A324
_0807A82A:
	pop {r4-r7}
	pop {r0}
	bx r0
_0807A830:
	.4byte gRam
_0807A834:
	.4byte 0x000009AD
_0807A838:
	.4byte 0x00000ACA
_0807A83C:
	.4byte 0x0000051A
_0807A840:
	.4byte 0x0000051C
_0807A844:
	.4byte 0x00000CF8
_0807A848:
	.4byte 0x00000CFA
_0807A84C:
	.4byte 0x00000CFC
_0807A850:
	.4byte 0x000009E7
_0807A854:
	.4byte 0x00000AA8
_0807A858:
	.4byte gUnknown_081676B2
_0807A85C:
	.4byte 0x00000BF4
_0807A860:
	.4byte 0x000001FF
_0807A864:
	.4byte 0x00000BF2
_0807A868:
	.4byte 0x00000978
_0807A86C:
	.4byte 0x00000504
	THUMB_FUNC_END sub_0807A784

