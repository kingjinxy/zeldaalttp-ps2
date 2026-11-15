	THUMB_FUNC_START sub_080B6FEC
sub_080B6FEC: @ 0x080B6FEC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #40
	ldr r1, _080B703C  @ =gUnknown_0200688A
	mov r0, #0
	strb r0, [r1]
	ldr r4, _080B7040  @ =gRam
	mov r0, #163
	lsl r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	cmp r0, #32
	bne _080B7050
	bl sub_080B7EEC
	ldr r0, _080B7044  @ =gUnknown_020068C4
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B705E
	bl sub_08069F08
	ldr r2, _080B7048  @ =0x0000099D
	add r3, r4, r2
	mov r2, #0
	ldrsb r2, [r3, r2]
	cmp r2, #0
	bne _080B705E
	ldr r1, _080B704C  @ =gUnknown_02006883
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	strb r2, [r3]
	b _080B70EA
	.byte 0x00
	.byte 0x00
_080B703C:
	.4byte gUnknown_0200688A
_080B7040:
	.4byte gRam
_080B7044:
	.4byte gUnknown_020068C4
_080B7048:
	.4byte 0x0000099D
_080B704C:
	.4byte gUnknown_02006883
_080B7050:
	sub r0, r0, #1
	strh r0, [r1]
	ldr r3, _080B70F8  @ =0x00000A32
	add r1, r4, r3
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
_080B705E:
	mov r4, #1
	ldr r6, _080B70FC  @ =gRam
	mov r7, #150
	lsl r7, r7, #4
	add r7, r7, r6
	mov r8, r7
	add r5, sp, #12
	mov r0, #50
	neg r0, r0
	mov r9, r0
_080B7072:
	ldr r0, _080B7100  @ =gUnknown_08170128
	lsl r1, r4, #2
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #20]
	ldr r0, _080B7104  @ =gUnknown_08170130
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #24]
	ldr r0, _080B7108  @ =gUnknown_08170138
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #28]
	ldr r0, _080B710C  @ =gUnknown_08170140
	add r0, r1, r0
	ldr r0, [r0]
	str r0, [sp, #32]
	ldr r0, _080B7110  @ =gUnknown_08170148
	add r1, r1, r0
	ldr r0, [r1]
	str r0, [sp, #36]
	ldr r0, _080B7114  @ =gUnknown_08170152
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #163
	lsl r2, r2, #4
	add r0, r6, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r3, r8
	strh r1, [r3]
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r0, r9
	blt _080B70E0
	ldr r0, _080B7118  @ =gUnknown_08170150
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #8
	strh r0, [r5]
	strh r1, [r5, #2]
	ldr r0, _080B711C  @ =gUnknown_08170154
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r5, #4]
	mov r1, sp
	add r0, sp, #28
	ldm r0!, {r2,r3,r7}
	stm r1!, {r2,r3,r7}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
_080B70E0:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _080B7072
_080B70EA:
	add sp, sp, #40
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080B70F8:
	.4byte 0x00000A32
_080B70FC:
	.4byte gRam
_080B7100:
	.4byte gUnknown_08170128
_080B7104:
	.4byte gUnknown_08170130
_080B7108:
	.4byte gUnknown_08170138
_080B710C:
	.4byte gUnknown_08170140
_080B7110:
	.4byte gUnknown_08170148
_080B7114:
	.4byte gUnknown_08170152
_080B7118:
	.4byte gUnknown_08170150
_080B711C:
	.4byte gUnknown_08170154
	THUMB_FUNC_END sub_080B6FEC

