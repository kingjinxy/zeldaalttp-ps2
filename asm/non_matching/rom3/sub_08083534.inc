	THUMB_FUNC_START sub_08083534
sub_08083534: @ 0x08083534
	push {r4,lr}
	add r3, r0, #0
	ldr r4, _08083598  @ =gRam
	ldr r1, _0808359C  @ =0x00000964
	add r0, r4, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #64
	beq _080835BC
	cmp r0, #70
	beq _080835BC
	mov r0, #255
	and r0, r0, r3
	ldr r1, _080835A0  @ =0x00000BFE
	add r2, r4, r1
	ldr r1, _080835A4  @ =gUnknown_081676B2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080835B4
	asr r2, r3, #1
	mov r1, #16
	neg r1, r1
	add r0, r1, #0
	orr r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	lsl r0, r3, #1
	ldr r3, _080835A8  @ =0x000018D0
	add r1, r4, r3
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #1
	ldr r3, _080835AC  @ =gUnknown_0200CBE1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #63
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _080835B0  @ =gUnknown_0200CC22
	add r0, r0, r1
	strb r2, [r0]
	b _080835C2
	.byte 0x00
	.byte 0x00
_08083598:
	.4byte gRam
_0808359C:
	.4byte 0x00000964
_080835A0:
	.4byte 0x00000BFE
_080835A4:
	.4byte gUnknown_081676B2
_080835A8:
	.4byte 0x000018D0
_080835AC:
	.4byte gUnknown_0200CBE1
_080835B0:
	.4byte gUnknown_0200CC22
_080835B4:
	add r0, r3, #0
	bl sub_080830C8
	b _080835C2
_080835BC:
	add r0, r3, #0
	bl sub_080830C8
_080835C2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08083534

