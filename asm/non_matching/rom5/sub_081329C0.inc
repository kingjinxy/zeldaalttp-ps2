	THUMB_FUNC_START sub_081329C0
sub_081329C0: @ 0x081329C0
	push {r4-r7,lr}
	ldr r2, _081329D4  @ =gRam
	ldr r0, _081329D8  @ =0x00000B67
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _081329DC
	sub r0, r0, #1
	strb r0, [r1]
	b _08132A2E
_081329D4:
	.4byte gRam
_081329D8:
	.4byte 0x00000B67
_081329DC:
	mov r4, #0
	mov r6, #248
	lsl r6, r6, #7
	ldr r7, _08132A34  @ =0x00000978
	add r5, r2, r7
	ldr r0, _08132A38  @ =0x000083FF
	mov r12, r0
_081329EA:
	add r1, r4, #0
	add r1, r1, #130
	asr r1, r1, #1
	lsl r1, r1, #1
	ldr r0, _08132A3C  @ =gUnknown_02000800
	add r0, r1, r0
	ldrh r2, [r0]
	add r0, r6, #0
	and r0, r0, r2
	strh r0, [r5]
	ldr r0, _08132A40  @ =gUnknown_02000C00
	add r1, r1, r0
	ldrh r3, [r1]
	add r2, r6, #0
	and r2, r2, r3
	mov r7, #0
	ldrsh r0, [r5, r7]
	cmp r2, r0
	beq _08132A18
	ldr r7, _08132A44  @ =0xFFFFFC00
	add r0, r2, r7
	lsl r0, r0, #16
	lsr r2, r0, #16
_08132A18:
	mov r0, r12
	and r0, r0, r3
	orr r2, r2, r0
	strh r2, [r1]
	add r0, r4, #2
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #14
	bne _081329EA
	bl sub_08132974
_08132A2E:
	pop {r4-r7}
	pop {r0}
	bx r0
_08132A34:
	.4byte 0x00000978
_08132A38:
	.4byte 0x000083FF
_08132A3C:
	.4byte gUnknown_02000800
_08132A40:
	.4byte gUnknown_02000C00
_08132A44:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_081329C0

