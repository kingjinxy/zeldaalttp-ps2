	THUMB_FUNC_START sub_0807E218
sub_0807E218: @ 0x0807E218
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _0807E2F4  @ =gUnknown_08164B1A
	mov r9, r0
	ldr r2, _0807E2F8  @ =gRam
	ldr r1, _0807E2FC  @ =0x000009EA
	add r4, r2, r1
	ldrh r0, [r4]
	lsl r0, r0, #2
	ldr r5, _0807E300  @ =0x000009EE
	add r3, r2, r5
	ldrh r1, [r3]
	orr r0, r0, r1
	add r0, r0, #2
	mov r1, #0
	strh r0, [r4]
	strh r1, [r3]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r2, r0
	mov r1, #0
	ldrsh r3, [r2, r1]
	mov r2, #64
	and r2, r2, r3
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	and r1, r1, r3
	asr r1, r1, #1
	ldr r0, _0807E304  @ =0x0000303F
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r2, r0, #1
	ldr r5, _0807E308  @ =gUnknown_02018000
	add r0, r2, r5
	ldrh r1, [r0]
	ldr r0, _0807E30C  @ =0x000003FF
	and r0, r0, r1
	cmp r0, #227
	beq _0807E278
	add r1, r2, r5
	mov r2, r9
	ldrh r0, [r2]
	strh r0, [r1]
_0807E278:
	mov r5, #2
	add r9, r9, r5
	mov r12, r4
_0807E27E:
	add r3, r3, #128
	mov r0, #63
	mov r8, r0
	mov r7, #64
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	mov r5, #248
	lsl r5, r5, #4
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	mov r6, #192
	lsl r6, r6, #6
	add r0, r6, #0
	mov r4, r8
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r1, r0, #1
	ldr r4, _0807E308  @ =gUnknown_02018000
	add r1, r1, r4
	mov r2, r9
	ldrh r0, [r2]
	strh r0, [r1]
	mov r1, r12
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807E27E
	add r3, r3, #128
	add r2, r3, #0
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	add r0, r6, #0
	mov r5, r8
	orr r0, r0, r5
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r2, r9
	ldrh r1, [r2, #2]
	strh r1, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0807E2F4:
	.4byte gUnknown_08164B1A
_0807E2F8:
	.4byte gRam
_0807E2FC:
	.4byte 0x000009EA
_0807E300:
	.4byte 0x000009EE
_0807E304:
	.4byte 0x0000303F
_0807E308:
	.4byte gUnknown_02018000
_0807E30C:
	.4byte 0x000003FF
	THUMB_FUNC_END sub_0807E218

