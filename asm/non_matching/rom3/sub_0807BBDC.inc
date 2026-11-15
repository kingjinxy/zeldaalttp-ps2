	THUMB_FUNC_START sub_0807BBDC
sub_0807BBDC: @ 0x0807BBDC
	push {r4-r6,lr}
	ldr r2, _0807BC3C  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r3, r2, r1
	ldrh r1, [r3]
	add r1, r1, #2
	strh r1, [r3]
	ldr r4, _0807BC40  @ =0x000009EA
	add r1, r2, r4
	ldrh r1, [r1]
	sub r4, r4, #118
	add r2, r2, r4
	strh r1, [r2]
	ldrh r6, [r0, #2]
	add r4, r3, #0
	add r5, r2, #0
_0807BBFE:
	mov r0, #0
	ldrsh r3, [r4, r0]
	mov r2, #64
	and r2, r2, r3
	lsl r2, r2, #5
	mov r1, #248
	lsl r1, r1, #4
	and r1, r1, r3
	asr r1, r1, #1
	ldr r0, _0807BC44  @ =0x0000303F
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _0807BC48  @ =gUnknown_02018000
	add r0, r0, r1
	strh r6, [r0]
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807BBFE
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807BC3C:
	.4byte gRam
_0807BC40:
	.4byte 0x000009EA
_0807BC44:
	.4byte 0x0000303F
_0807BC48:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_0807BBDC

