	THUMB_FUNC_START sub_0807C970
sub_0807C970: @ 0x0807C970
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	str r1, [sp]
	add r7, r2, #0
	ldr r3, _0807C9C8  @ =gRam
	ldr r1, _0807C9CC  @ =0x00000AD2
	add r2, r3, r1
	ldrh r5, [r2]
	add r1, r5, #1
	strh r1, [r2]
	lsl r2, r5, #1
	ldr r4, _0807C9D0  @ =0x0000195C
	add r1, r3, r4
	add r1, r2, r1
	strh r0, [r1]
	ldr r1, _0807C9D4  @ =0x0000197C
	add r0, r3, r1
	add r0, r2, r0
	ldr r4, _0807C9D8  @ =0x000009F4
	add r1, r3, r4
	ldrh r1, [r1]
	strh r1, [r0]
	ldr r1, _0807C9DC  @ =0x000009F8
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	mov r12, r3
	cmp r1, r0
	bne _0807C9E4
	ldr r0, _0807C9E0  @ =0x0000199C
	add r0, r0, r12
	add r0, r2, r0
	mov r3, #128
	lsl r3, r3, #6
	add r2, r3, #0
	add r1, r7, #0
	orr r1, r1, r2
	strh r1, [r0]
	b _0807C9EC
_0807C9C8:
	.4byte gRam
_0807C9CC:
	.4byte 0x00000AD2
_0807C9D0:
	.4byte 0x0000195C
_0807C9D4:
	.4byte 0x0000197C
_0807C9D8:
	.4byte 0x000009F4
_0807C9DC:
	.4byte 0x000009F8
_0807C9E0:
	.4byte 0x0000199C
_0807C9E4:
	ldr r0, _0807CAE0  @ =0x0000199C
	add r0, r0, r12
	add r0, r2, r0
	strh r7, [r0]
_0807C9EC:
	mov r4, #63
	mov r10, r4
	mov r0, #64
	mov r9, r0
	add r2, r7, #0
	and r2, r2, r0
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	mov r8, r1
	add r1, r7, #0
	mov r3, r8
	and r1, r1, r3
	asr r1, r1, #1
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	mov r3, r10
	orr r0, r0, r3
	and r0, r0, r7
	orr r0, r0, r2
	orr r0, r0, r1
	asr r2, r0, #1
	lsl r5, r5, #1
	ldr r1, _0807CAE4  @ =0x000019BC
	add r1, r1, r12
	add r1, r5, r1
	lsl r0, r2, #1
	ldr r6, _0807CAE8  @ =gUnknown_02018000
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r3, r7, #0
	add r3, r3, #128
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	add r0, r4, #0
	mov r2, r10
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r2, r0, #1
	ldr r1, _0807CAEC  @ =0x000019DC
	add r1, r1, r12
	add r1, r5, r1
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r3, r7, #2
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp, #4]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	add r0, r4, #0
	mov r2, r10
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp, #4]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r2, r0, #1
	ldr r1, _0807CAF0  @ =0x000019FC
	add r1, r1, r12
	add r1, r5, r1
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r1]
	add r2, r7, #0
	add r2, r2, #130
	add r1, r2, #0
	mov r0, r9
	and r1, r1, r0
	lsl r1, r1, #5
	add r0, r2, #0
	mov r3, r8
	and r0, r0, r3
	asr r0, r0, #1
	mov r3, r10
	orr r4, r4, r3
	and r4, r4, r2
	orr r4, r4, r1
	orr r4, r4, r0
	asr r2, r4, #1
	ldr r0, _0807CAF4  @ =0x00001A1C
	add r0, r0, r12
	add r5, r5, r0
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r0, [r0]
	strh r0, [r5]
	ldr r0, _0807CAF8  @ =gUnknown_08165382
	ldr r4, [sp]
	lsl r1, r4, #1
	add r1, r1, r0
	add r0, r7, #0
	bl sub_0807B97C
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807CAE0:
	.4byte 0x0000199C
_0807CAE4:
	.4byte 0x000019BC
_0807CAE8:
	.4byte gUnknown_02018000
_0807CAEC:
	.4byte 0x000019DC
_0807CAF0:
	.4byte 0x000019FC
_0807CAF4:
	.4byte 0x00001A1C
_0807CAF8:
	.4byte gUnknown_08165382
	THUMB_FUNC_END sub_0807C970

