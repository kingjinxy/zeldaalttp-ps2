	THUMB_FUNC_START sub_080B73A4
sub_080B73A4: @ 0x080B73A4
	push {r4,lr}
	sub sp, sp, #40
	ldr r0, _080B73F0  @ =gUnknown_02006885
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080B7404
	bl sub_080B7EEC
	ldr r0, _080B73F4  @ =gUnknown_020068C4
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B7440
	bl sub_08069F08
	ldr r0, _080B73F8  @ =gRam
	ldr r1, _080B73FC  @ =0x0000099D
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r1, #0
	cmp r0, #0
	bne _080B73D8
	mov r1, #1
_080B73D8:
	cmp r1, #0
	beq _080B7404
	ldr r1, _080B7400  @ =gUnknown_02006883
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _080B74B8
	.byte 0x00
	.byte 0x00
_080B73F0:
	.4byte gUnknown_02006885
_080B73F4:
	.4byte gUnknown_020068C4
_080B73F8:
	.4byte gRam
_080B73FC:
	.4byte 0x0000099D
_080B7400:
	.4byte gUnknown_02006883
_080B7404:
	mov r4, #0
	ldr r1, _080B7414  @ =gUnknown_0200688B
	ldrb r0, [r1]
	cmp r0, #110
	beq _080B7418
	sub r0, r0, #1
	strb r0, [r1]
	b _080B7442
_080B7414:
	.4byte gUnknown_0200688B
_080B7418:
	ldr r1, _080B74C0  @ =gUnknown_02006885
	ldrb r2, [r1]
	sub r0, r2, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B7428
	strb r2, [r1]
_080B7428:
	ldrb r0, [r1]
	cmp r0, #192
	bhi _080B7442
	mov r4, #2
	cmp r0, #184
	bhi _080B7442
	mov r4, #4
	cmp r0, #176
	bhi _080B7442
	mov r4, #6
	cmp r0, #160
	bhi _080B7442
_080B7440:
	mov r4, #8
_080B7442:
	ldr r1, _080B74C4  @ =gUnknown_02006888
	mov r0, #168
	strb r0, [r1]
	ldr r0, _080B74C8  @ =gRam
	ldr r2, _080B74CC  @ =0x00000996
	add r0, r0, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080B746C
	ldr r2, _080B74D0  @ =gUnknown_02006890
	ldrb r1, [r2]
	ldr r3, _080B74D4  @ =gUnknown_02006891
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r1, r1, #1
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
_080B746C:
	ldr r0, _080B74D8  @ =gUnknown_0816FE52
	str r0, [sp, #20]
	ldr r0, _080B74DC  @ =gUnknown_0816FE58
	str r0, [sp, #24]
	ldr r0, _080B74E0  @ =gUnknown_0816FE5E
	str r0, [sp, #28]
	ldr r0, _080B74E4  @ =gUnknown_08170170
	lsl r1, r4, #1
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #32]
	ldr r0, _080B74E8  @ =gUnknown_08170184
	add r1, r1, r0
	ldr r0, [r1]
	str r0, [sp, #36]
	add r1, sp, #12
	mov r0, #100
	strh r0, [r1]
	add r2, r1, #0
	ldr r1, _080B74EC  @ =gUnknown_0200688B
	ldr r3, _080B74F0  @ =0x0000FFD0
	add r0, r3, #0
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r2, #2]
	add r1, r2, #0
	mov r0, #5
	strb r0, [r1, #4]
	mov r1, sp
	add r0, sp, #28
	ldm r0!, {r2-r4}
	stm r1!, {r2-r4}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
_080B74B8:
	add sp, sp, #40
	pop {r4}
	pop {r0}
	bx r0
_080B74C0:
	.4byte gUnknown_02006885
_080B74C4:
	.4byte gUnknown_02006888
_080B74C8:
	.4byte gRam
_080B74CC:
	.4byte 0x00000996
_080B74D0:
	.4byte gUnknown_02006890
_080B74D4:
	.4byte gUnknown_02006891
_080B74D8:
	.4byte gUnknown_0816FE52
_080B74DC:
	.4byte gUnknown_0816FE58
_080B74E0:
	.4byte gUnknown_0816FE5E
_080B74E4:
	.4byte gUnknown_08170170
_080B74E8:
	.4byte gUnknown_08170184
_080B74EC:
	.4byte gUnknown_0200688B
_080B74F0:
	.4byte 0x0000FFD0
	THUMB_FUNC_END sub_080B73A4

