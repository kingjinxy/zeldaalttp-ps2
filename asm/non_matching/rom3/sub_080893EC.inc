	THUMB_FUNC_START sub_080893EC
sub_080893EC: @ 0x080893EC
	push {r4-r7,lr}
	ldr r4, _08089590  @ =gRam
	ldr r0, _08089594  @ =0x00001770
	add r7, r4, r0
	mov r5, #0
	mov r0, #1
	strb r0, [r7]
	ldr r1, _08089598  @ =0x00000A02
	add r3, r4, r1
	ldr r0, _0808959C  @ =0x00000A03
	add r6, r4, r0
	ldrb r1, [r3]
	ldrb r2, [r6]
	add r0, r2, #0
	orr r0, r0, r1
	cmp r0, #0
	beq _0808943A
	sub r0, r1, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0808941A
	b _08089588
_0808941A:
	sub r0, r2, #1
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08089426
	b _08089588
_08089426:
	mov r0, #74
	mov r1, #0
	bl sub_0812A324
	ldr r1, _080895A0  @ =0x00001885
	add r0, r4, r1
	strb r5, [r0]
	ldr r3, _080895A4  @ =0x00001705
	add r0, r4, r3
	strb r5, [r0]
_0808943A:
	strb r5, [r7]
	ldr r0, _080895A8  @ =0x000009E8
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	beq _08089450
	b _08089588
_08089450:
	ldrh r0, [r2]
	sub r0, r0, #4
	asr r2, r0, #2
	ldr r1, _080895AC  @ =gUnknown_081535C4
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r4, [r0]
	mov r5, #0
	ldr r6, _080895B0  @ =gUnknown_02018000
_08089462:
	mov r1, #236
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	mov r3, #150
	lsl r3, r3, #2
	add r0, r5, r3
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r1, [r4, #2]
	strh r1, [r0]
	mov r1, #182
	lsl r1, r1, #2
	add r0, r5, r1
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r1, [r4, #4]
	strh r1, [r0]
	mov r3, #214
	lsl r3, r3, #2
	add r0, r5, r3
	bl sub_08080380
	asr r2, r0, #1
	lsl r0, r2, #1
	add r0, r0, r6
	ldrh r1, [r4, #6]
	strh r1, [r0]
	add r4, r4, #8
	add r5, r5, #2
	cmp r5, #16
	bne _08089462
	ldr r4, _08089590  @ =gRam
	ldr r0, _080895B4  @ =0x00000974
	add r1, r4, r0
	mov r5, #0
	mov r2, #0
	mov r0, #8
	strh r0, [r1]
	ldr r3, _080895B8  @ =0x0000096C
	add r1, r4, r3
	mov r0, #1
	strh r0, [r1]
	mov r0, #151
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #236
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r1, _080895BC  @ =0x00000978
	add r0, r4, r1
	strh r2, [r0]
	bl sub_08086E58
	ldr r3, _080895A8  @ =0x000009E8
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #16
	bne _08089588
	ldr r0, _080895C0  @ =gUnknown_0200CD0C
	mov r1, #2
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #63
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	sub r0, r0, #59
	strb r5, [r0]
	add r0, r0, #1
	strb r1, [r0]
	add r0, r0, #63
	strb r5, [r0]
	add r0, r0, #1
	strb r1, [r0]
	mov r2, #0
	mov r1, #0
_08089516:
	ldr r3, _080895C4  @ =gUnknown_0200CBCD
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #63
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #63
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #63
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #63
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #63
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #63
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r2, r2, #2
	cmp r2, #6
	bne _08089516
	ldr r0, _080895C8  @ =0x00000B74
	add r1, r4, r0
	mov r2, #0
	mov r3, #0
	ldr r0, _080895CC  @ =0x0000FFC0
	strh r0, [r1]
	ldr r1, _080895D0  @ =0x000009AD
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #59
	add r0, r4, r1
	strh r3, [r0]
_08089588:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089590:
	.4byte gRam
_08089594:
	.4byte 0x00001770
_08089598:
	.4byte 0x00000A02
_0808959C:
	.4byte 0x00000A03
_080895A0:
	.4byte 0x00001885
_080895A4:
	.4byte 0x00001705
_080895A8:
	.4byte 0x000009E8
_080895AC:
	.4byte gUnknown_081535C4
_080895B0:
	.4byte gUnknown_02018000
_080895B4:
	.4byte 0x00000974
_080895B8:
	.4byte 0x0000096C
_080895BC:
	.4byte 0x00000978
_080895C0:
	.4byte gUnknown_0200CD0C
_080895C4:
	.4byte gUnknown_0200CBCD
_080895C8:
	.4byte 0x00000B74
_080895CC:
	.4byte 0x0000FFC0
_080895D0:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080893EC

