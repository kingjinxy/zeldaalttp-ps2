	THUMB_FUNC_START sub_080835C8
sub_080835C8: @ 0x080835C8
	push {r4,lr}
	add r3, r0, #0
	ldr r2, _08083604  @ =gRam
	lsl r0, r3, #1
	ldr r4, _08083608  @ =0x000018B0
	add r1, r2, r4
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	ldr r4, _0808360C  @ =0x00000964
	add r1, r2, r4
	strh r0, [r1]
	add r4, r2, #0
	cmp r0, #0
	beq _080835FC
	cmp r0, #6
	beq _080835FC
	cmp r0, #18
	beq _080835FC
	cmp r0, #10
	beq _080835FC
	cmp r0, #58
	beq _080835FC
	cmp r0, #14
	bne _08083610
_080835FC:
	add r0, r3, #0
	bl sub_08082ADC
	b _080836B2
_08083604:
	.4byte gRam
_08083608:
	.4byte 0x000018B0
_0808360C:
	.4byte 0x00000964
_08083610:
	cmp r0, #12
	beq _08083624
	cmp r0, #16
	beq _08083624
	cmp r0, #4
	beq _08083624
	cmp r0, #2
	beq _08083624
	cmp r0, #8
	bne _0808362C
_08083624:
	add r0, r3, #0
	bl sub_080830C8
	b _080836B2
_0808362C:
	cmp r0, #48
	beq _080836B2
	cmp r0, #63
	ble _0808363C
	add r0, r3, #0
	bl sub_08083534
	b _080836B2
_0808363C:
	cmp r0, #24
	beq _08083648
	cmp r0, #68
	beq _08083648
	mov r0, #7
	b _0808364A
_08083648:
	mov r0, #15
_0808364A:
	and r0, r0, r3
	ldr r1, _08083694  @ =0x00000BFE
	add r2, r4, r1
	ldr r1, _08083698  @ =gUnknown_081676B2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080836AC
	mov r2, #16
	neg r2, r2
	add r0, r2, #0
	add r1, r3, #0
	orr r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r0, r3, #1
	ldr r3, _0808369C  @ =0x000018D0
	add r2, r4, r3
	add r0, r0, r2
	ldrh r0, [r0]
	lsr r0, r0, #1
	ldr r4, _080836A0  @ =gUnknown_0200CBE1
	add r2, r0, r4
	strb r1, [r2]
	ldr r3, _080836A4  @ =gUnknown_0200CBE2
	add r2, r0, r3
	strb r1, [r2]
	add r4, r4, #64
	add r2, r0, r4
	strb r1, [r2]
	ldr r2, _080836A8  @ =gUnknown_0200CC22
	add r0, r0, r2
	strb r1, [r0]
	b _080836B2
_08083694:
	.4byte 0x00000BFE
_08083698:
	.4byte gUnknown_081676B2
_0808369C:
	.4byte 0x000018D0
_080836A0:
	.4byte gUnknown_0200CBE1
_080836A4:
	.4byte gUnknown_0200CBE2
_080836A8:
	.4byte gUnknown_0200CC22
_080836AC:
	add r0, r3, #0
	bl sub_08082ADC
_080836B2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080835C8

