	THUMB_FUNC_START sub_0804533C
sub_0804533C: @ 0x0804533C
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	bl sub_0803DF84
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _0804542E
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, _080453C4  @ =gUnknown_03000450
	ldr r1, [r7]
	str r1, [r0]
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_080453B4:
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080453C8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080453CC
	b _0804542C
_080453C4:
	.4byte gUnknown_03000450
_080453C8:
	.4byte gUnknown_03006C80
_080453CC:
	ldr r0, _08045428  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08045428  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	mov r1, #8
	neg r1, r1
	mov r2, #12
	neg r2, r2
	bl sub_0804CA78
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080453B4
_08045428:
	.4byte gUnknown_03006A30
_0804542C:
	b _0804551C
_0804542E:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #31
	bhi _08045488
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, _08045480  @ =gUnknown_03000520
	ldr r1, _08045484  @ =0x0000FFF0
	str r1, [r0, #12]
	ldr r0, _08045480  @ =gUnknown_03000520
	ldrb r1, [r0, #7]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #7]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	lsr r0, r1, #2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	lsl r1, r0, #4
	add r0, r1, #0
	bl sub_0800C1EC
	ldr r0, _08045480  @ =gUnknown_03000520
	mov r1, #1
	neg r1, r1
	str r1, [r0, #12]
	b _0804551C
_08045480:
	.4byte gUnknown_03000520
_08045484:
	.4byte 0x0000FFF0
_08045488:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #149
	bhi _0804551C
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #15
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804551C
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_080454AC:
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080454BC  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080454C0
	b _0804551C
_080454BC:
	.4byte gUnknown_03006C80
_080454C0:
	bl sub_0800099C
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08045502
	bl sub_0800099C
	ldr r1, _08045518  @ =gUnknown_03006A30
	add r3, r7, #0
	add r3, r3, #8
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r3, r1, r2
	ldr r2, [r3]
	mov r3, #6
	add r1, r0, #0
	and r1, r1, r3
	add r3, r2, #0
	add r0, r2, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08045502:
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080454AC
_08045518:
	.4byte gUnknown_03006A30
_0804551C:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804533C

