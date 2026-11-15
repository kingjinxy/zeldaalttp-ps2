	THUMB_FUNC_START sub_08130FF8
sub_08130FF8: @ 0x08130FF8
	push {r4-r7,lr}
	ldr r4, _08131074  @ =gRam
	ldr r0, _08131078  @ =0x00000CF8
	add r5, r4, r0
	ldrh r1, [r5]
	ldr r2, _0813107C  @ =gUnknown_0822BF26
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r2, _08131080  @ =0x00000978
	add r0, r4, r2
	mov r7, #0
	strh r1, [r0]
	ldr r0, _08131084  @ =gUnknown_0822BF72
	ldr r3, _08131088  @ =0x00000CFA
	add r6, r4, r3
	ldrh r1, [r6]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r2, [r0]
	ldr r3, _0813108C  @ =0x0000096C
	add r0, r4, r3
	strh r2, [r0]
	ldr r0, _08131090  @ =gUnknown_0822BF76
	add r0, r1, r0
	ldrh r2, [r0]
	add r3, r3, #4
	add r0, r4, r3
	strh r2, [r0]
	ldr r0, _08131094  @ =gUnknown_0822BF7A
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08131098  @ =0x00000974
	add r0, r4, r2
	strh r1, [r0]
	mov r0, #0
	bl sub_08130ED4
	ldrh r2, [r6]
	cmp r2, #0
	bne _081310A4
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r3, _0813109C  @ =0x00000CFC
	add r1, r4, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r1]
	cmp r0, r1
	bne _081310D0
	mov r0, #2
	eor r0, r0, r2
	strh r0, [r6]
	strh r7, [r5]
	ldr r0, _081310A0  @ =0x000009E8
	add r1, r4, r0
	b _081310BC
	.byte 0x00
	.byte 0x00
_08131074:
	.4byte gRam
_08131078:
	.4byte 0x00000CF8
_0813107C:
	.4byte gUnknown_0822BF26
_08131080:
	.4byte 0x00000978
_08131084:
	.4byte gUnknown_0822BF72
_08131088:
	.4byte 0x00000CFA
_0813108C:
	.4byte 0x0000096C
_08131090:
	.4byte gUnknown_0822BF76
_08131094:
	.4byte gUnknown_0822BF7A
_08131098:
	.4byte 0x00000974
_0813109C:
	.4byte 0x00000CFC
_081310A0:
	.4byte 0x000009E8
_081310A4:
	ldr r1, _081310C4  @ =0x00000CFC
	add r0, r4, r1
	ldrh r1, [r5]
	ldrh r0, [r0]
	cmp r1, r0
	bne _081310CC
	mov r0, #2
	eor r0, r0, r2
	strh r0, [r6]
	strh r7, [r5]
	ldr r2, _081310C8  @ =0x000009E8
	add r1, r4, r2
_081310BC:
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	b _081310D0
_081310C4:
	.4byte 0x00000CFC
_081310C8:
	.4byte 0x000009E8
_081310CC:
	sub r0, r1, #1
	strh r0, [r5]
_081310D0:
	ldr r0, _081310E0  @ =gRam
	ldr r3, _081310E4  @ =0x0000099B
	add r0, r0, r3
	mov r1, #1
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_081310E0:
	.4byte gRam
_081310E4:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08130FF8

