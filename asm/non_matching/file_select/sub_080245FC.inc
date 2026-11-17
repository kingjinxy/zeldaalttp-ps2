	THUMB_FUNC_START sub_080245FC
sub_080245FC: @ 0x080245FC
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08024684
	sub r0, r0, #1
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08024AE0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080246A4
	add r1, r4, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _080246A4
	mov r0, #255
	strb r0, [r1]
	mov r0, #22
	strb r0, [r4, #20]
	mov r0, #180
	strb r0, [r4, #23]
	add r3, r4, #0
	add r3, r3, #60
	ldrb r2, [r3]
	mov r1, #127
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r3, #3
	orr r0, r0, r3
	strb r0, [r2]
	ldr r0, [r4, #112]
	add r0, r0, #60
	ldrb r2, [r0]
	and r1, r1, r2
	strb r1, [r0]
	ldr r1, [r4, #112]
	add r1, r1, #94
	ldrb r0, [r1]
	orr r0, r0, r3
	strb r0, [r1]
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #128
	lsl r0, r0, #3
	str r0, [r4, #12]
	add r1, r1, #81
	mov r0, #15
	strh r0, [r1]
	ldr r0, [r4, #84]
	add r0, r0, #110
	ldr r1, _08024680  @ =0x0000FFFF
	strh r1, [r0]
	b _080246A4
	.byte 0x00
	.byte 0x00
_08024680:
	.4byte 0x0000FFFF
_08024684:
	add r0, r4, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _080246A4
	mov r0, #18
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #110
	ldrh r0, [r2]
	mov r1, #2
	eor r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl sub_08024D10
_080246A4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080245FC

	.byte 0x00
	.byte 0x00
