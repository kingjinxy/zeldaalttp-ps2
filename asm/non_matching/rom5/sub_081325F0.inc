	THUMB_FUNC_START sub_081325F0
sub_081325F0: @ 0x081325F0
	push {r4-r7,lr}
	ldr r6, _08132674  @ =gUnknown_0822BF7E
	ldr r3, _08132678  @ =gRam
	ldr r0, _0813267C  @ =0x00000CF8
	add r5, r3, r0
	ldrh r2, [r5]
	cmp r2, #15
	bls _08132602
	add r6, r6, #2
_08132602:
	ldr r1, _08132680  @ =gUnknown_0822BF26
	mov r0, #15
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _08132684  @ =0x00000978
	add r0, r3, r2
	strh r1, [r0]
	ldr r0, _08132688  @ =gUnknown_0822BF72
	ldr r7, _0813268C  @ =0x00000CFA
	add r4, r3, r7
	ldrh r1, [r4]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r2, [r0]
	ldr r7, _08132690  @ =0x0000096C
	add r0, r3, r7
	strh r2, [r0]
	ldr r0, _08132694  @ =gUnknown_0822BF76
	add r0, r1, r0
	ldrh r2, [r0]
	add r7, r7, #4
	add r0, r3, r7
	strh r2, [r0]
	ldr r0, _08132698  @ =gUnknown_0822BF7A
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _0813269C  @ =0x00000974
	add r0, r3, r2
	strh r1, [r0]
	sub r7, r7, #16
	add r0, r3, r7
	ldrh r0, [r0]
	sub r2, r2, #16
	add r1, r3, r2
	ldrh r1, [r1]
	add r2, r6, #0
	bl sub_08131C1C
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bne _0813266E
	mov r0, #0
	strh r0, [r5]
	ldrh r0, [r4]
	mov r1, #2
	eor r0, r0, r1
	strh r0, [r4]
_0813266E:
	pop {r4-r7}
	pop {r0}
	bx r0
_08132674:
	.4byte gUnknown_0822BF7E
_08132678:
	.4byte gRam
_0813267C:
	.4byte 0x00000CF8
_08132680:
	.4byte gUnknown_0822BF26
_08132684:
	.4byte 0x00000978
_08132688:
	.4byte gUnknown_0822BF72
_0813268C:
	.4byte 0x00000CFA
_08132690:
	.4byte 0x0000096C
_08132694:
	.4byte gUnknown_0822BF76
_08132698:
	.4byte gUnknown_0822BF7A
_0813269C:
	.4byte 0x00000974
	THUMB_FUNC_END sub_081325F0

