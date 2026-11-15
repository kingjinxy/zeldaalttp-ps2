	THUMB_FUNC_START sub_08029C88
sub_08029C88: @ 0x08029C88
	push {r4-r6,lr}
	add r5, r0, #0
	bl 0x08003828
	mov r1, #128
	lsl r1, r1, #6
	add r0, r5, #0
	bl 0x08003594
	add r0, r5, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #3
	beq _08029CF0
	cmp r0, #3
	ble _08029CC8
	cmp r0, #4
	bne _08029D04
	ldr r0, [r5, #56]
	cmp r0, #0
	beq _08029CB4
	b _08029E42
_08029CB4:
	ldrb r0, [r5, #23]
	sub r0, r0, #10
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08029D04
	mov r0, #192
	lsl r0, r0, #10
	str r0, [r5, #16]
	b _08029E42
_08029CC8:
	cmp r0, #0
	blt _08029D04
	add r1, r5, #0
	add r1, r1, #114
	mov r0, #24
	ldrsb r0, [r5, r0]
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r5, #50]
	ldrb r0, [r5, #24]
	neg r0, r0
	strb r0, [r5, #24]
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08029CEE
	b _08029E42
_08029CEE:
	b _08029D04
_08029CF0:
	add r0, r5, #0
	bl sub_0803CC20
	add r2, r5, #0
	add r2, r2, #43
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
_08029D04:
	add r0, r5, #0
	add r0, r0, #114
	ldrh r0, [r0]
	strh r0, [r5, #50]
	add r0, r5, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #4
	bls _08029D18
	b _08029E42
_08029D18:
	lsl r0, r0, #2
	ldr r1, _08029D24  @ =0x08029D28
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_08029D24:
	.4byte 0x08029D28
	.4byte _08029D84
	.4byte _08029DB2
	.4byte _08029DF0
	.4byte _08029E1C
	.4byte _08029D3C
_08029D3C:
	ldr r0, _08029D80  @ =gUnknown_03006C80
	ldrb r0, [r0]
	lsl r1, r0, #2
	strb r1, [r5, #23]
	lsl r0, r0, #26
	cmp r0, #0
	beq _08029E14
	mov r6, #31
_08029D4C:
	bl 0x0800099C
	add r4, r0, #0
	and r4, r4, r6
	lsl r4, r4, #4
	add r4, r4, #118
	bl 0x0800099C
	add r2, r0, #0
	and r2, r2, r6
	lsl r2, r2, #20
	mov r0, #168
	lsl r0, r0, #16
	add r2, r2, r0
	lsr r2, r2, #16
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0802A134
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08029D4C
	b _08029E14
_08029D80:
	.4byte gUnknown_03006C80
_08029D84:
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #128
	lsl r0, r0, #1
	str r0, [r5, #12]
	mov r0, #3
	strb r0, [r5, #20]
	mov r0, #128
	lsl r0, r0, #10
	str r0, [r5, #16]
	mov r0, #5
	strb r0, [r5, #23]
	ldrh r1, [r5, #50]
	ldrh r2, [r5, #54]
	add r0, r5, #0
	bl sub_0802A134
	b _08029E42
_08029DB2:
	ldr r4, _08029DEC  @ =gUnknown_03006A30
	bl 0x08003170
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r4, r4, #40
	add r1, r1, r4
	ldr r1, [r1]
	add r0, r5, #0
	bl 0x08003F4C
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r0, [r5, #10]
	add r0, r0, #3
	strb r0, [r5, #23]
	mov r0, #128
	lsl r0, r0, #1
	str r0, [r5, #12]
	mov r0, #3
	strb r0, [r5, #20]
	mov r0, #128
	lsl r0, r0, #10
	str r0, [r5, #16]
	b _08029E42
_08029DEC:
	.4byte gUnknown_03006A30
_08029DF0:
	mov r0, #15
	bl sub_08012494
	add r4, r0, #0
	cmp r4, #0
	beq _08029E14
	ldrh r0, [r5, #50]
	strh r0, [r4, #50]
	ldrh r0, [r5, #54]
	strh r0, [r4, #54]
	bl 0x08003170
	strb r0, [r4, #23]
	str r5, [r4, #84]
	add r1, r5, #0
	add r1, r1, #113
	mov r0, #1
	strb r0, [r1]
_08029E14:
	add r0, r5, #0
	bl sub_0802A0A8
	b _08029E42
_08029E1C:
	mov r0, #15
	bl sub_08012494
	add r4, r0, #0
	cmp r4, #0
	beq _08029E3C
	bl 0x08003170
	strb r0, [r4, #23]
	ldrh r0, [r5, #50]
	strh r0, [r4, #50]
	ldrh r0, [r5, #54]
	strh r0, [r4, #54]
	mov r0, #1
	strb r0, [r4, #11]
	str r5, [r4, #84]
_08029E3C:
	add r0, r5, #0
	bl sub_0802A0A8
_08029E42:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08029C88

