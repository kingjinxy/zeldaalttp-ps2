	THUMB_FUNC_START sub_0807E080
sub_0807E080: @ 0x0807E080
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _0807E0CC  @ =gRam
	ldr r1, _0807E0D0  @ =0x00000AA8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _0807E09E
	b _0807E1FC
_0807E09E:
	ldr r3, _0807E0D4  @ =0x0000097C
	add r1, r2, r3
	mov r0, #3
	strh r0, [r1]
	ldr r1, _0807E0D8  @ =0x000009F8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	cmp r1, r0
	bne _0807E0DC
	sub r3, r3, #12
	add r0, r2, r3
	ldrh r0, [r0]
	mov r2, #128
	lsl r2, r2, #6
	add r1, r2, #0
	orr r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r12, r0
	b _0807E0E8
	.byte 0x00
	.byte 0x00
_0807E0CC:
	.4byte gRam
_0807E0D0:
	.4byte 0x00000AA8
_0807E0D4:
	.4byte 0x0000097C
_0807E0D8:
	.4byte 0x000009F8
_0807E0DC:
	mov r3, #151
	lsl r3, r3, #4
	add r0, r2, r3
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r12, r1
_0807E0E8:
	ldr r3, _0807E20C  @ =gUnknown_0816623C
	mov r8, r3
	mov r7, #63
	mov r6, #64
	mov r5, #248
	lsl r5, r5, #4
	mov r0, #192
	lsl r0, r0, #6
	mov r9, r0
	ldr r4, _0807E210  @ =gUnknown_02018000
	ldr r1, _0807E214  @ =gUnknown_03002BAC
	mov r10, r1
_0807E100:
	mov r2, r12
	and r2, r2, r6
	lsl r2, r2, #5
	mov r1, r12
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	mov r3, r12
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r2, r8
	ldrh r1, [r2]
	strh r1, [r0]
	mov r3, #192
	lsl r3, r3, #1
	add r3, r3, r12
	add r2, r3, #0
	and r2, r2, r6
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r3, r8
	ldrh r1, [r3]
	strh r1, [r0]
	mov r3, #192
	lsl r3, r3, #2
	add r3, r3, r12
	add r2, r3, #0
	and r2, r2, r6
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r2, r8
	ldrh r1, [r2]
	strh r1, [r0]
	mov r3, r12
	add r3, r3, #128
	add r2, r3, #0
	and r2, r2, r6
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r3, r8
	ldrh r1, [r3, #2]
	strh r1, [r0]
	mov r3, #128
	lsl r3, r3, #2
	add r3, r3, r12
	add r2, r3, #0
	and r2, r2, r6
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r2, r8
	ldrh r1, [r2, #2]
	strh r1, [r0]
	mov r3, #224
	lsl r3, r3, #2
	add r3, r3, r12
	add r2, r3, #0
	and r2, r2, r6
	lsl r2, r2, #5
	add r1, r3, #0
	and r1, r1, r5
	asr r1, r1, #1
	mov r0, r9
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	mov r3, r8
	ldrh r1, [r3, #2]
	strh r1, [r0]
	mov r0, #4
	add r12, r12, r0
	mov r1, r10
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807E100
_0807E1FC:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807E20C:
	.4byte gUnknown_0816623C
_0807E210:
	.4byte gUnknown_02018000
_0807E214:
	.4byte gUnknown_03002BAC
	THUMB_FUNC_END sub_0807E080

