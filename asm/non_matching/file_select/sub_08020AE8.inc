	THUMB_FUNC_START sub_08020AE8
sub_08020AE8: @ 0x08020AE8
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r1, _08020B14  @ =gUnknown_03000940
	ldr r2, [r4, #100]
	ldrb r0, [r2, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08020B0C
	add r0, r2, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _08020B18
_08020B0C:
	add r0, r4, #0
	bl sub_08020760
	b _08020C06
_08020B14:
	.4byte gUnknown_03000940
_08020B18:
	ldrh r0, [r4, #50]
	ldrh r1, [r2, #50]
	sub r0, r0, r1
	add r0, r0, #20
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #40
	bhi _08020B3C
	ldrh r0, [r4, #54]
	ldrh r1, [r2, #54]
	sub r0, r0, r1
	add r0, r0, #20
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #40
	bhi _08020B3C
	mov r0, #1
	b _08020C06
_08020B3C:
	add r5, r4, #0
	add r5, r5, #117
	ldrb r0, [r5]
	cmp r0, #0
	beq _08020BC8
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r4, #0
	add r6, r6, #118
	ldrb r2, [r6]
	sub r0, r2, r3
	add r0, r0, #8
	mov r1, #31
	and r0, r0, r1
	cmp r0, #16
	ble _08020B80
	mov r0, #0
	strb r0, [r5]
	add r1, r4, #0
	add r1, r1, #119
	mov r0, #8
	strb r0, [r1]
	add r0, r3, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	b _08020BA4
_08020B80:
	add r0, r4, #0
	add r1, r2, #0
	bl sub_08020A0C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08020BB2
	mov r0, #0
	strb r0, [r5]
	add r1, r4, #0
	add r1, r1, #119
	mov r0, #8
	strb r0, [r1]
	ldrb r0, [r6]
	sub r1, r1, #76
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #27
_08020BA4:
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
	b _08020C04
_08020BB2:
	add r1, r4, #0
	add r1, r1, #120
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08020C04
	mov r0, #1
	strb r0, [r4, #20]
	b _08020C04
_08020BC8:
	add r1, r4, #0
	add r1, r1, #119
	ldrb r0, [r1]
	cmp r0, #0
	beq _08020BD8
	sub r0, r0, #1
	strb r0, [r1]
	b _08020C04
_08020BD8:
	mov r0, #8
	strb r0, [r1]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	ldrb r2, [r1]
	cmp r0, r2
	beq _08020C04
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
_08020C04:
	mov r0, #0
_08020C06:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08020AE8

