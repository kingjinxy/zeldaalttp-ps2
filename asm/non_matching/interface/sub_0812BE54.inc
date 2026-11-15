	THUMB_FUNC_START sub_0812BE54
sub_0812BE54: @ 0x0812BE54
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	add r5, r0, #0
	cmp r5, #0
	beq _0812BE68
	ldr r1, [r5, #8]
	cmp r1, #0
	bne _0812BE6C
_0812BE68:
	mov r0, #1
	b _0812C2B8
_0812BE6C:
	mov r8, r1
	mov r0, r8
	add r0, r0, #60
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0812BE7E
	b _0812C29E
_0812BE7E:
	add r0, r5, #0
	bl sub_0812BE0C
	b _0812C2B6
_0812BE86:
	add r0, r5, #0
	bl sub_0812BE3C
	mov r0, #2
	b _0812C2B8
_0812BE90:
	ldr r2, [r5]
	ldrb r6, [r2]
	add r2, r2, #1
	str r2, [r5]
	cmp r6, #191
	bhi _0812BF14
	cmp r6, #95
	bhi _0812BEAC
	add r0, r5, #0
	add r0, r0, #68
	ldrh r4, [r0]
	add r0, r0, #4
	ldrb r2, [r0]
	b _0812BED2
_0812BEAC:
	add r0, r5, #0
	bl sub_0812C30C
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r5, #0
	add r0, r0, #68
	strh r4, [r0]
	ldr r0, [r5]
	ldrb r2, [r0]
	add r0, r0, #1
	str r0, [r5]
	add r0, r5, #0
	add r0, r0, #72
	strb r2, [r0]
	add r0, r6, #0
	sub r0, r0, #96
	lsl r0, r0, #24
	lsr r6, r0, #24
_0812BED2:
	mov r0, #150
	mul r4, r0, r4
	ldr r0, _0812BEF8  @ =gUnknown_03000180
	ldr r7, [r0]
	cmp r7, #0
	beq _0812BEFC
	mov r0, r8
	add r0, r0, #68
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812BEFC
	add r0, r5, #0
	add r1, r6, #0
	add r3, r4, #0
	bl _call_via_r7
	b _0812BF06
_0812BEF8:
	.4byte gUnknown_03000180
_0812BEFC:
	add r0, r5, #0
	add r1, r6, #0
	add r3, r4, #0
	bl sub_0812B7B4
_0812BF06:
	add r0, r5, #0
	add r0, r0, #83
	ldrb r0, [r0]
	cmp r0, #1
	beq _0812BF12
	b _0812C29E
_0812BF12:
	b _0812BF38
_0812BF14:
	cmp r6, #192
	bne _0812BF20
	add r0, r5, #0
	add r0, r0, #70
	ldrh r4, [r0]
	b _0812BF34
_0812BF20:
	cmp r6, #193
	bne _0812BF40
	add r0, r5, #0
	bl sub_0812C30C
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r5, #0
	add r0, r0, #70
	strh r4, [r0]
_0812BF34:
	mov r0, #150
	mul r4, r0, r4
_0812BF38:
	ldr r0, [r5, #52]
	add r0, r0, r4
	str r0, [r5, #52]
	b _0812C29E
_0812BF40:
	mov r0, #240
	and r0, r0, r6
	cmp r0, #208
	bne _0812BF80
	mov r0, #15
	and r0, r0, r6
	strb r0, [r5, #29]
	add r1, r5, #0
	add r1, r1, #81
	ldrb r1, [r1]
	ldrb r3, [r2]
	add r1, r1, r3
	strb r1, [r5, #30]
	add r3, r2, #1
	str r3, [r5]
	ldrb r1, [r2, #1]
	strh r1, [r5, #34]
	add r2, r3, #1
	str r2, [r5]
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0812BF78
	ldrb r0, [r3, #1]
	strh r0, [r5, #32]
	add r0, r2, #1
	str r0, [r5]
	b _0812BF7A
_0812BF78:
	strh r1, [r5, #32]
_0812BF7A:
	mov r0, #1
	strb r0, [r5, #28]
	b _0812C29E
_0812BF80:
	add r0, r6, #0
	sub r0, r0, #194
	cmp r0, #61
	bls _0812BF8A
	b _0812C29E
_0812BF8A:
	lsl r0, r0, #2
	ldr r1, _0812BF94  @ =0x0812BF98
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0812BF94:
	.4byte 0x0812BF98
	.4byte _0812C0EE
	.4byte _0812C10A
	.4byte _0812C116
	.4byte _0812C16A
	.4byte _0812C16A
	.4byte _0812C0FA
	.4byte _0812C17E
	.4byte _0812C188
	.4byte _0812C192
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C122
	.4byte _0812C13A
	.4byte _0812C146
	.4byte _0812C15E
	.4byte _0812C1B8
	.4byte _0812C1C4
	.4byte _0812C1D4
	.4byte _0812C1CC
	.4byte _0812C0A6
	.4byte _0812C152
	.4byte _0812C12E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C0AC
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C0C6
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C1E0
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C29E
	.4byte _0812C090
_0812C090:
	add r0, r5, #0
	add r0, r0, #36
	ldr r1, [r5, #48]
	cmp r1, r0
	bne _0812C09C
	b _0812BE86
_0812C09C:
	sub r0, r1, #4
	str r0, [r5, #48]
	ldr r0, [r0]
	str r0, [r5]
	b _0812C29E
_0812C0A6:
	mov r0, #0
	strb r0, [r5, #28]
	b _0812C29E
_0812C0AC:
	mov r2, sp
	ldr r0, [r5]
	ldrb r1, [r0]
	strb r1, [r2]
	add r0, r0, #1
	str r0, [r5]
	ldrb r1, [r0]
	strb r1, [r2, #1]
	add r0, r0, #1
	str r0, [r5]
	mov r0, r8
	ldr r1, [r0, #4]
	b _0812C0E4
_0812C0C6:
	mov r2, sp
	ldr r1, [r5]
	ldrb r0, [r1]
	strb r0, [r2]
	add r1, r1, #1
	str r1, [r5]
	ldrb r0, [r1]
	strb r0, [r2, #1]
	add r1, r1, #1
	str r1, [r5]
	ldr r0, [r5, #48]
	stm r0!, {r1}
	str r0, [r5, #48]
	mov r2, r8
	ldr r1, [r2, #4]
_0812C0E4:
	mov r0, sp
	ldrh r0, [r0]
	add r1, r1, r0
	str r1, [r5]
	b _0812C29E
_0812C0EE:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r2, r5, #0
	add r2, r2, #66
	strh r1, [r2]
	b _0812C1B2
_0812C0FA:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r0, r0, #1
	str r0, [r5]
	add r0, r5, #0
	bl sub_0812C334
	b _0812C29E
_0812C10A:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r2, r5, #0
	add r2, r2, #75
	strb r1, [r2]
	b _0812C1B2
_0812C116:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r2, r5, #0
	add r2, r2, #82
	strb r1, [r2]
	b _0812C1B2
_0812C122:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r2, r5, #0
	add r2, r2, #77
	strb r1, [r2]
	b _0812C1B2
_0812C12E:
	ldr r0, [r5, #8]
	ldr r1, [r5]
	ldrb r2, [r1]
	add r0, r0, #64
	strb r2, [r0]
	b _0812C1DA
_0812C13A:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r2, r5, #0
	add r2, r2, #79
	strb r1, [r2]
	b _0812C1B2
_0812C146:
	ldr r0, [r5]
	ldrb r2, [r0]
	add r1, r5, #0
	add r1, r1, #80
	strb r2, [r1]
	b _0812C1B2
_0812C152:
	ldr r0, [r5]
	ldrb r1, [r0]
	add r2, r5, #0
	add r2, r2, #81
	strb r1, [r2]
	b _0812C1B2
_0812C15E:
	ldr r0, [r5]
	ldrb r2, [r0]
	add r1, r5, #0
	add r1, r1, #76
	strb r2, [r1]
	b _0812C1B2
_0812C16A:
	add r0, r5, #0
	bl sub_0812BE0C
	mov r1, #0
	cmp r6, #197
	bne _0812C178
	mov r1, #1
_0812C178:
	add r0, r5, #0
	add r0, r0, #73
	b _0812C29C
_0812C17E:
	add r1, r5, #0
	add r1, r1, #83
	mov r0, #1
	strb r0, [r1]
	b _0812C29E
_0812C188:
	add r1, r5, #0
	add r1, r1, #83
	mov r0, #0
	strb r0, [r1]
	b _0812C29E
_0812C192:
	ldr r0, _0812C1AC  @ =gUnknown_03000184
	ldr r2, [r0]
	cmp r2, #0
	beq _0812C1B0
	ldr r0, [r5]
	ldrb r1, [r0]
	add r0, r0, #1
	str r0, [r5]
	add r0, r5, #0
	bl _call_via_r2
	b _0812C29E
	.byte 0x00
	.byte 0x00
_0812C1AC:
	.4byte gUnknown_03000184
_0812C1B0:
	ldr r0, [r5]
_0812C1B2:
	add r0, r0, #1
	str r0, [r5]
	b _0812C29E
_0812C1B8:
	add r0, r5, #0
	bl sub_0812C30C
	mov r3, r8
	strh r0, [r3, #48]
	b _0812C29E
_0812C1C4:
	ldr r1, [r5]
	ldrb r0, [r1]
	strh r0, [r5, #16]
	b _0812C1DA
_0812C1CC:
	ldr r1, [r5]
	ldrb r0, [r1]
	str r0, [r5, #24]
	b _0812C1DA
_0812C1D4:
	ldr r1, [r5]
	ldrb r0, [r1]
	str r0, [r5, #20]
_0812C1DA:
	add r1, r1, #1
	str r1, [r5]
	b _0812C29E
_0812C1E0:
	ldr r1, [r5]
	ldrb r4, [r1]
	add r1, r1, #1
	str r1, [r5]
	mov r2, sp
	ldrb r0, [r1]
	strb r0, [r2]
	add r2, r1, #1
	str r2, [r5]
	mov r3, sp
	ldrb r0, [r1, #1]
	strb r0, [r3, #1]
	add r2, r2, #1
	str r2, [r5]
	lsl r4, r4, #2
	mov r0, r8
	add r0, r0, #8
	add r6, r0, r4
	ldr r0, [r6]
	cmp r0, #0
	bne _0812C214
	bl sub_0812BD28
	add r4, r0, #0
	str r4, [r6]
	b _0812C21A
_0812C214:
	add r4, r0, #0
	bl sub_0812BE3C
_0812C21A:
	mov r0, sp
	ldrh r0, [r0]
	mov r1, r8
	ldr r2, [r1, #4]
	add r2, r2, r0
	add r0, r4, #0
	bl sub_0812BD50
	ldr r0, [r5, #4]
	str r0, [r4, #4]
	add r0, r5, #0
	add r0, r0, #64
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #64
	strh r1, [r0]
	add r0, r5, #0
	add r0, r0, #66
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #66
	strh r0, [r1]
	add r0, r5, #0
	add r0, r0, #75
	ldrb r0, [r0]
	add r1, r1, #9
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #76
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #76
	strb r1, [r0]
	add r0, r5, #0
	add r0, r0, #77
	ldrb r0, [r0]
	add r1, r4, #0
	add r1, r1, #77
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #78
	ldrb r0, [r0]
	add r1, r1, #1
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #82
	ldrb r0, [r0]
	add r1, r1, #4
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #79
	ldrb r0, [r0]
	sub r1, r1, #3
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #80
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #80
	strb r1, [r0]
	add r0, r5, #0
	add r0, r0, #81
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #81
_0812C29C:
	strb r1, [r0]
_0812C29E:
	ldr r1, [r5, #52]
	cmp r1, #0
	bgt _0812C2A6
	b _0812BE90
_0812C2A6:
	mov r2, r8
	ldrh r0, [r2, #48]
	sub r0, r1, r0
	str r0, [r5, #52]
	mov r3, #50
	ldrsh r1, [r2, r3]
	sub r0, r0, r1
	str r0, [r5, #52]
_0812C2B6:
	mov r0, #0
_0812C2B8:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812BE54

