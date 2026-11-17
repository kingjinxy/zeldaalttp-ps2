	THUMB_FUNC_START sub_0802A6BC
sub_0802A6BC: @ 0x0802A6BC
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #0
	strb r0, [r4, #11]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _0802A6F4
	ldrb r0, [r4, #28]
	mov r1, #49
	neg r1, r1
	and r1, r1, r0
	mov r0, #32
	orr r1, r1, r0
	strb r1, [r4, #28]
	b _0802A6FC
_0802A6F4:
	ldrb r0, [r4, #28]
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4, #28]
_0802A6FC:
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _0802A79C  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	ldrb r0, [r4, #10]
	add r0, r0, #1
	lsl r0, r0, #3
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r4, #50]
	ldrb r0, [r4, #10]
	add r0, r0, #1
	lsl r0, r0, #3
	ldrh r3, [r4, #54]
	add r0, r0, r3
	strh r0, [r4, #54]
	add r3, r4, #0
	add r3, r3, #43
	ldrb r0, [r3]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r3]
	ldr r1, _0802A7A0  @ =gUnknown_0813D4EE
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [r4, #12]
	ldr r2, _0802A7A4  @ =gUnknown_0813D4F4
	ldrb r0, [r4, #10]
	lsl r0, r0, #3
	ldrb r1, [r3]
	lsr r1, r1, #2
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r1, [r4, #50]
	add r0, r0, r1
	add r1, r4, #0
	add r1, r1, #104
	strh r0, [r1]
	ldrb r0, [r4, #10]
	lsl r0, r0, #3
	ldrb r1, [r3]
	lsr r1, r1, #2
	add r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r3, [r4, #54]
	add r0, r0, r3
	add r2, r4, #0
	add r2, r2, #106
	strh r0, [r2]
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #24]
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _0802A7A8
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	b _0802A7B0
	.byte 0x00
	.byte 0x00
_0802A79C:
	.4byte gUnknown_03000450
_0802A7A0:
	.4byte gUnknown_0813D4EE
_0802A7A4:
	.4byte gUnknown_0813D4F4
_0802A7A8:
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_0802A7B0:
	ldr r1, _0802A7E0  @ =gUnknown_0813D4E8
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	bl sub_0802C070
	add r5, r4, #0
	add r5, r5, #80
	ldrh r0, [r5]
	lsr r0, r0, #14
	cmp r0, #2
	bne _0802A7CE
	b _0802A9A2
_0802A7CE:
	ldrb r0, [r4, #10]
	cmp r0, #1
	beq _0802A824
	cmp r0, #1
	bgt _0802A7E4
	cmp r0, #0
	beq _0802A7EA
	b _0802AB6E
	.byte 0x00
	.byte 0x00
_0802A7E0:
	.4byte gUnknown_0813D4E8
_0802A7E4:
	cmp r0, #2
	beq _0802A8AC
	b _0802AB6E
_0802A7EA:
	ldrh r2, [r5]
	mov r0, #50
	add r1, r6, #0
	bl sub_08014658
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #51
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #52
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #53
	bl sub_08014658
	b _0802AB6E
_0802A824:
	ldrh r2, [r5]
	mov r0, #54
	add r1, r6, #0
	bl sub_08014658
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #55
	bl sub_08014658
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #56
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #57
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #58
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #59
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #128
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #60
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #129
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #61
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #130
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #62
	bl sub_08014658
	b _0802AB6E
_0802A8AC:
	ldrh r2, [r5]
	mov r0, #63
	add r1, r6, #0
	bl sub_08014658
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #64
	bl sub_08014658
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #65
	bl sub_08014658
	add r1, r6, #3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #66
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #67
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #68
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #69
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #67
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #70
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #128
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #71
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #129
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #72
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #130
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #73
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #131
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #74
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #192
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #75
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #193
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #76
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #194
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #77
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #195
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #78
	bl sub_08014658
	b _0802AB6E
_0802A9A2:
	ldrb r0, [r4, #10]
	cmp r0, #1
	beq _0802A9F2
	cmp r0, #1
	bgt _0802A9B2
	cmp r0, #0
	beq _0802A9B8
	b _0802AB6E
_0802A9B2:
	cmp r0, #2
	beq _0802AA7A
	b _0802AB6E
_0802A9B8:
	ldrh r2, [r5]
	mov r0, #91
	add r1, r6, #0
	bl sub_08014658
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #92
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #93
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #94
	bl sub_08014658
	b _0802AB6E
_0802A9F2:
	ldrh r2, [r5]
	mov r0, #95
	add r1, r6, #0
	bl sub_08014658
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #96
	bl sub_08014658
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #97
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #98
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #99
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #100
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #128
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #101
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #129
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #102
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #130
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #103
	bl sub_08014658
	b _0802AB6E
_0802AA7A:
	ldrh r2, [r5]
	mov r0, #104
	add r1, r6, #0
	bl sub_08014658
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #105
	bl sub_08014658
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #106
	bl sub_08014658
	add r1, r6, #3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #107
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #108
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #109
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #110
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #67
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #111
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #128
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #112
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #129
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #113
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #130
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #114
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #131
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #115
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #192
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #116
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #193
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #117
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #194
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #118
	bl sub_08014658
	add r1, r6, #0
	add r1, r1, #195
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #119
	bl sub_08014658
_0802AB6E:
	mov r0, #11
	bl sub_08003DFC
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802A6BC

	.byte 0x00
	.byte 0x00
