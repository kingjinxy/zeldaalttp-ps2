	THUMB_FUNC_START sub_08081040
sub_08081040: @ 0x08081040
	push {r4,r5,lr}
	ldr r2, _08081078  @ =gRam
	lsl r4, r0, #1
	ldr r3, _0808107C  @ =0x000018D0
	add r1, r2, r3
	add r1, r4, r1
	ldrh r3, [r1]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r2, r5
	strh r3, [r1]
	ldr r3, _08081080  @ =0x00000B08
	add r1, r2, r3
	strh r0, [r1]
	ldr r5, _08081084  @ =0x00000C06
	add r1, r2, r5
	strh r0, [r1]
	ldr r0, _08081088  @ =0x000018F0
	add r2, r2, r0
	add r4, r4, r2
	ldrh r0, [r4]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _0808108C
	bl sub_0808A03C
	b _080810A4
_08081078:
	.4byte gRam
_0808107C:
	.4byte 0x000018D0
_08081080:
	.4byte 0x00000B08
_08081084:
	.4byte 0x00000C06
_08081088:
	.4byte 0x000018F0
_0808108C:
	cmp r1, #1
	bne _08081096
	bl sub_0808A060
	b _080810A4
_08081096:
	cmp r1, #2
	bne _080810A0
	bl sub_0808A084
	b _080810A4
_080810A0:
	bl sub_0808A0A8
_080810A4:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08081040

	.byte 0x00
	.byte 0x00
