	THUMB_FUNC_START sub_08042F5C
sub_08042F5C: @ 0x08042F5C
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _08042F94  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #8]
	ldr r1, [r7, #8]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	beq _08042F98
	ldr r1, [r7, #8]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #129
	beq _08042F98
	b _08043022
_08042F94:
	.4byte gUnknown_03006A30
_08042F98:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #61
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #62
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #66
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	add r3, r2, #0
	add r2, r2, #66
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2]
	add r2, r1, #0
	add r1, r1, #62
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08043022:
	ldr r0, _080430FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #3]
	cmp r1, #0
	bne _0804303A
	b _080431AC
_0804303A:
	ldr r0, _080430FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	ldr r0, [r7]
	ldr r1, [r1]
	cmp r0, r1
	beq _08043056
	b _080431AC
_08043056:
	ldr r0, _080430FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #3]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08043104
	ldr r0, [r7]
	ldr r1, _08043100  @ =gUnknown_08428764
	ldr r3, [r7, #8]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsr r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	str r2, [r0, #72]
	ldr r0, _080430FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080430FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #3]
	mov r3, #127
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	mov r2, #32
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl sub_08000740
	b _080431A6
_080430FC:
	.4byte gUnknown_03006A30
_08043100:
	.4byte gUnknown_08428764
_08043104:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080431A6
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #101
	ldrb r0, [r1]
	cmp r0, #0
	bne _08043148
	ldr r1, [r7, #8]
	add r0, r1, #0
	mov r1, #30
	bl 0x08003E10
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #101
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08043148:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080431A6
	ldr r0, _080431A8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #30]
	cmp r1, #0
	beq _080431A6
	ldr r0, _080431A8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #30]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	ldr r2, [r0, #76]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080431A6:
	b _080431FE
_080431A8:
	.4byte gUnknown_03006A30
_080431AC:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08043220  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, [r7]
	bl DeleteThisEntity
_080431FE:
	ldr r0, [r7, #8]
	ldrb r1, [r0, #27]
	cmp r1, #0
	bne _080432E2
	ldr r1, [r7, #8]
	add r0, r1, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #207
	bhi _08043224
	ldr r1, [r7, #8]
	add r0, r1, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #168
	bls _08043224
	b _08043236
_08043220:
	.4byte gUnknown_03006A30
_08043224:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #33
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _080432E0
_08043236:
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrb r2, [r1, #28]
	lsl r3, r2, #29
	lsr r1, r3, #31
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrb r2, [r1, #28]
	lsl r3, r2, #28
	lsr r1, r3, #31
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #3
	ldrb r2, [r0, #28]
	mov r3, #247
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #33
	ldrb r3, [r2]
	add r1, r3, #0
	add r1, r1, #87
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	add r2, r1, #0
	add r1, r1, #41
	add r2, r0, #0
	add r0, r0, #41
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	add r2, r1, #0
	add r1, r1, #47
	add r2, r0, #0
	add r0, r0, #47
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080432E0:
	b _080432F2
_080432E2:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #33
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080432F2:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08042F5C

	.byte 0x00
	.byte 0x00
