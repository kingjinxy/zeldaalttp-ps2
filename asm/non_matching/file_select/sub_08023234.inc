	THUMB_FUNC_START sub_08023234
sub_08023234: @ 0x08023234
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #124
	ldrb r0, [r0]
	cmp r0, #0
	bne _080232B2
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _0802325C
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #90
	bne _080232CE
	add r0, r4, #0
	mov r1, #29
	bl sub_08003870
	b _080232CE
_0802325C:
	ldr r0, _0802328C  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	cmp r0, #1
	beq _08023290
	add r0, r4, #0
	bl sub_08023BAC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080232CE
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
	ldr r0, [r4, #52]
	add r0, r0, #1
	str r0, [r4, #52]
	add r1, r4, #0
	add r1, r1, #110
	mov r0, #225
	lsl r0, r0, #4
	strh r0, [r1]
	b _080232CE
	.byte 0x00
	.byte 0x00
_0802328C:
	.4byte gUnknown_03006C80
_08023290:
	add r0, r4, #0
	bl sub_08023D14
	lsl r0, r0, #24
	cmp r0, #0
	beq _080232CE
	mov r0, #5
	strb r0, [r4, #20]
	ldr r0, [r4, #52]
	add r0, r0, #1
	str r0, [r4, #52]
	add r1, r4, #0
	add r1, r1, #110
	mov r0, #150
	lsl r0, r0, #3
	strh r0, [r1]
	b _080232CE
_080232B2:
	add r1, r4, #0
	add r1, r1, #110
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080232CE
	mov r0, #150
	lsl r0, r0, #3
	strh r0, [r1]
	mov r0, #11
	bl sub_0800D6A4
_080232CE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023234

