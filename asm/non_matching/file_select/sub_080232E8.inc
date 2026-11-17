	THUMB_FUNC_START sub_080232E8
sub_080232E8: @ 0x080232E8
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #124
	ldrb r0, [r0]
	cmp r0, #0
	bne _08023332
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08023310
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #90
	bne _08023366
	add r0, r4, #0
	mov r1, #29
	bl sub_08003870
	b _08023366
_08023310:
	add r0, r4, #0
	bl sub_08023D14
	lsl r0, r0, #24
	cmp r0, #0
	beq _08023366
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
	b _08023366
_08023332:
	add r1, r4, #0
	add r1, r1, #110
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08023366
	mov r0, #225
	lsl r0, r0, #4
	strh r0, [r1]
	add r2, r4, #0
	add r2, r2, #112
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	cmp r0, #0
	beq _08023360
	mov r0, #12
	bl sub_0800D6A4
	b _08023366
_08023360:
	mov r0, #13
	bl sub_0800D6A4
_08023366:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080232E8

