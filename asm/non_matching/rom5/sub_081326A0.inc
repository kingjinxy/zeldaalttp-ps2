	THUMB_FUNC_START sub_081326A0
sub_081326A0: @ 0x081326A0
	push {r4-r6,lr}
	ldr r4, _081326F8  @ =gRam
	ldr r1, _081326FC  @ =0x000009E8
	add r0, r4, r1
	ldrh r0, [r0]
	add r3, r4, #0
	cmp r0, #0
	bne _08132710
	mov r2, #14
	ldr r6, _08132700  @ =gUnknown_02000C00
	ldr r5, _08132704  @ =gUnknown_02000800
	mov r4, #128
	lsl r4, r4, #8
_081326BA:
	add r0, r2, #0
	add r0, r0, #128
	asr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r6
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r1]
	sub r0, r2, #2
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r0, r2, #0
	and r0, r0, r4
	cmp r0, #0
	beq _081326BA
	ldr r2, _08132708  @ =0x00000CF8
	add r0, r3, r2
	mov r1, #0
	strh r1, [r0]
	add r2, r2, #2
	add r0, r3, r2
	strh r1, [r0]
	ldr r1, _0813270C  @ =0x0000099B
	add r0, r3, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _081326FC  @ =0x000009E8
	add r0, r3, r2
	strh r1, [r0]
	b _08132748
	.byte 0x00
	.byte 0x00
_081326F8:
	.4byte gRam
_081326FC:
	.4byte 0x000009E8
_08132700:
	.4byte gUnknown_02000C00
_08132704:
	.4byte gUnknown_02000800
_08132708:
	.4byte 0x00000CF8
_0813270C:
	.4byte 0x0000099B
_08132710:
	bl sub_08132750
	ldr r3, _08132738  @ =0x00000CF8
	add r0, r4, r3
	ldrh r1, [r0]
	cmp r1, #0
	bne _08132744
	ldr r2, _0813273C  @ =0x000009B5
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08132740  @ =0x0000050C
	add r2, r4, r3
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	eor r0, r0, r1
	strh r0, [r2]
	b _08132748
	.byte 0x00
	.byte 0x00
_08132738:
	.4byte 0x00000CF8
_0813273C:
	.4byte 0x000009B5
_08132740:
	.4byte 0x0000050C
_08132744:
	bl sub_08132750
_08132748:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081326A0

	.byte 0x00
	.byte 0x00
