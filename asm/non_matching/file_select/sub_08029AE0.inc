	THUMB_FUNC_START sub_08029AE0
sub_08029AE0: @ 0x08029AE0
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _08029AFA
	bl sub_0803DF84
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _08029AFA
	sub r0, r0, #1
	strb r0, [r4, #24]
	b _08029C80
_08029AFA:
	add r0, r4, #0
	add r0, r0, #69
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r1, #0
	bne _08029B24
	ldr r0, _08029B1C  @ =gUnknown_03006C80
	ldrb r1, [r4, #10]
	ldrb r0, [r0, #6]
	cmp r0, r1
	bne _08029B20
	add r1, r4, #0
	add r1, r1, #121
	mov r0, #4
	strb r0, [r1]
	add r5, r1, #0
	b _08029B2E
_08029B1C:
	.4byte gUnknown_03006C80
_08029B20:
	add r1, r1, #1
	b _08029B26
_08029B24:
	ldrb r1, [r4, #10]
_08029B26:
	add r0, r4, #0
	add r0, r0, #121
	strb r1, [r0]
	add r5, r0, #0
_08029B2E:
	ldr r0, [r4, #16]
	cmp r0, #0
	beq _08029B4C
	add r0, r4, #0
	bl GetNextFrame
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl sub_08003594
	add r0, r4, #0
	bl sub_0803CC20
	b _08029C80
_08029B4C:
	add r1, r4, #0
	add r1, r1, #120
	ldrb r0, [r1]
	cmp r0, #0
	beq _08029BE6
	sub r0, r0, #1
	strb r0, [r1]
	mov r1, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08029B64
	b _08029C80
_08029B64:
	mov r0, #15
	bl sub_08012494
	add r5, r0, #0
	cmp r5, #0
	bne _08029B72
	b _08029C80
_08029B72:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08029B8E
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r5, #50]
	b _08029B9C
_08029B8E:
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	ldrh r1, [r4, #50]
	sub r1, r1, r0
	strh r1, [r5, #50]
_08029B9C:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08029BB8
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r5, #54]
	b _08029BC6
_08029BB8:
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	ldrh r1, [r4, #54]
	sub r1, r1, r0
	strh r1, [r5, #54]
_08029BC6:
	mov r0, #4
	strb r0, [r5, #11]
	str r4, [r5, #84]
	add r1, r4, #0
	add r1, r1, #122
	ldrb r2, [r1]
	add r0, r2, #1
	strb r0, [r1]
	mov r0, #3
	and r0, r0, r2
	cmp r0, #0
	bne _08029C80
	mov r0, #187
	bl sub_08003DFC
	b _08029C80
_08029BE6:
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08029C24
	cmp r0, #90
	bne _08029BFC
	ldrb r0, [r4, #10]
	cmp r0, #4
	beq _08029BFC
	mov r0, #188
	bl sub_08003DFC
_08029BFC:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08029C14
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	b _08029C80
_08029C14:
	ldrb r0, [r5]
	cmp r0, #4
	beq _08029C80
	add r1, r0, #0
	add r0, r4, #0
	bl sub_08003870
	b _08029C80
_08029C24:
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _08029C38
	ldr r0, _08029C54  @ =gUnknown_03000450
	ldr r1, [r4, #88]
	str r1, [r0]
	mov r0, #206
	lsl r0, r0, #1
	bl play_sound
_08029C38:
	mov r0, #1
	strb r0, [r6]
	ldrb r0, [r5]
	strb r0, [r4, #10]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _08029C58
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	b _08029C7A
	.byte 0x00
	.byte 0x00
_08029C54:
	.4byte gUnknown_03000450
_08029C58:
	ldrb r1, [r4, #10]
	add r0, r4, #0
	bl sub_08003870
	ldrb r1, [r4, #28]
	mov r0, #49
	neg r0, r0
	and r0, r0, r1
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
_08029C7A:
	add r0, r4, #0
	bl sub_0802A0A8
_08029C80:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08029AE0

	.byte 0x00
	.byte 0x00
