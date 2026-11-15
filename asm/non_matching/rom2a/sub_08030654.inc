	THUMB_FUNC_START sub_08030654
sub_08030654: @ 0x08030654
	push {r4,r5,lr}
	ldr r0, _08030698  @ =gUnknown_03000450
	ldr r1, [r0]
	add r4, r0, #0
	cmp r1, #0
	beq _08030718
	add r5, r1, #0
	ldrh r0, [r5, #50]
	sub r0, r0, #112
	lsl r0, r0, #16
	lsr r2, r0, #16
	asr r0, r0, #16
	mov r1, #8
	neg r1, r1
	cmp r0, r1
	bge _08030676
	ldr r2, _0803069C  @ =0x0000FFF8
_08030676:
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r0, #24
	ble _08030680
	mov r2, #24
_08030680:
	ldrh r3, [r4, #32]
	mov r0, #32
	ldrsh r1, [r4, r0]
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r1, r0
	beq _080306A4
	add r2, r4, #0
	cmp r1, r0
	bge _080306A0
	add r0, r3, #1
	b _080306A2
_08030698:
	.4byte gUnknown_03000450
_0803069C:
	.4byte 0x0000FFF8
_080306A0:
	sub r0, r3, #1
_080306A2:
	strh r0, [r2, #32]
_080306A4:
	ldr r3, _080306F4  @ =gUnknown_030004A0
	ldrh r1, [r4, #32]
	strh r1, [r3, #46]
	ldr r2, _080306F8  @ =0x0000FFFF
	add r0, r2, #0
	and r0, r0, r1
	strh r0, [r3, #34]
	and r0, r0, r2
	ldr r1, _080306FC  @ =gUnknown_02016D60
	ldrh r1, [r1, #38]
	sub r0, r0, r1
	strh r0, [r3, #22]
	ldrh r0, [r5, #54]
	sub r0, r0, #72
	lsl r0, r0, #16
	lsr r2, r0, #16
	asr r0, r0, #16
	mov r1, #8
	neg r1, r1
	add r5, r3, #0
	cmp r0, r1
	bge _080306D2
	ldr r2, _08030700  @ =0x0000FFF8
_080306D2:
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r0, #24
	ble _080306DC
	mov r2, #24
_080306DC:
	ldrh r3, [r4, #34]
	mov r0, #34
	ldrsh r1, [r4, r0]
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r1, r0
	beq _08030708
	add r2, r4, #0
	cmp r1, r0
	bge _08030704
	add r0, r3, #1
	b _08030706
_080306F4:
	.4byte gUnknown_030004A0
_080306F8:
	.4byte 0x0000FFFF
_080306FC:
	.4byte gUnknown_02016D60
_08030700:
	.4byte 0x0000FFF8
_08030704:
	sub r0, r3, #1
_08030706:
	strh r0, [r2, #34]
_08030708:
	ldrh r0, [r4, #34]
	strh r0, [r5, #48]
	ldr r2, _08030720  @ =0x0000FFFF
	add r1, r2, #0
	and r1, r1, r0
	strh r1, [r5, #36]
	and r1, r1, r2
	strh r1, [r5, #24]
_08030718:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08030720:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08030654

