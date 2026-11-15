	THUMB_FUNC_START sub_0813290C
sub_0813290C: @ 0x0813290C
	push {r4-r7,lr}
	ldr r0, _08132920  @ =gRam
	ldr r2, _08132924  @ =0x00000B67
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _08132928
	sub r0, r0, #1
	strb r0, [r1]
	b _08132966
_08132920:
	.4byte gRam
_08132924:
	.4byte 0x00000B67
_08132928:
	mov r4, #0
	mov r5, #248
	lsl r5, r5, #7
	ldr r0, _0813296C  @ =0x000083FF
	mov r12, r0
	ldr r7, _08132970  @ =gUnknown_02000C00
	mov r2, #128
	lsl r2, r2, #3
	add r6, r2, #0
_0813293A:
	add r0, r4, #0
	add r0, r0, #130
	asr r0, r0, #1
	lsl r0, r0, #1
	add r3, r0, r7
	ldrh r2, [r3]
	add r1, r5, #0
	and r1, r1, r2
	cmp r1, r5
	beq _08132950
	add r1, r6, r1
_08132950:
	mov r0, r12
	and r0, r0, r2
	orr r1, r1, r0
	strh r1, [r3]
	add r0, r4, #2
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #14
	bne _0813293A
	bl sub_08132974
_08132966:
	pop {r4-r7}
	pop {r0}
	bx r0
_0813296C:
	.4byte 0x000083FF
_08132970:
	.4byte gUnknown_02000C00
	THUMB_FUNC_END sub_0813290C

