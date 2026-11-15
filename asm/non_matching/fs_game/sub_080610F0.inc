	THUMB_FUNC_START sub_080610F0
sub_080610F0: @ 0x080610F0
	push {r7,lr}
	sub sp, sp, #36
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #100
	str r1, [r7, #8]
	ldr r0, _0806111C  @ =gUnknown_03006A30
	str r0, [r7, #32]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0806110A:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #3
	bhi _08061120
	ldr r0, [r7, #32]
	ldr r1, [r0, #40]
	cmp r1, #0
	bne _08061122
	b _08061120
_0806111C:
	.4byte gUnknown_03006A30
_08061120:
	b _08061330
_08061122:
	ldr r0, [r7, #32]
	ldrb r1, [r0, #2]
	lsr r0, r1, #7
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	mov r1, #1
	eor r0, r0, r1
	ldr r1, [r7, #32]
	ldrh r2, [r1, #54]
	lsr r1, r2, #12
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #1
	eor r1, r1, r2
	mov r2, #1
	and r1, r1, r2
	and r0, r0, r1
	cmp r0, #0
	bne _0806114E
	b _08061312
_0806114E:
	ldr r0, [r7, #32]
	ldr r1, [r0, #40]
	ldr r0, [r7]
	bl 0x08003C84
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08061162
	b _08061312
_08061162:
	ldr r0, [r7, #32]
	ldr r1, [r0, #40]
	add r0, r1, #0
	bl 0x080074C0
	ldr r0, [r7, #32]
	ldrb r1, [r0, #27]
	lsr r0, r1, #6
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	mov r1, #1
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	ldr r1, [r7, #32]
	ldrh r2, [r1, #54]
	lsr r1, r2, #7
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #1
	eor r1, r1, r2
	mov r2, #1
	and r1, r1, r2
	and r0, r0, r1
	cmp r0, #0
	bne _0806119C
	b _08061312
_0806119C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #251
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080611CA
	add r0, r7, #0
	add r0, r0, #24
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #26
	ldr r1, [r7, #32]
	ldr r2, [r1, #40]
	ldrh r1, [r2, #50]
	strh r1, [r0]
	b _080611E0
_080611CA:
	add r0, r7, #0
	add r0, r0, #24
	ldr r1, [r7, #32]
	ldr r2, [r1, #40]
	ldrh r1, [r2, #54]
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #26
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	strh r2, [r0]
_080611E0:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #3
	bls _08061210
	add r0, r7, #0
	add r0, r0, #28
	add r1, r7, #0
	add r1, r1, #24
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #24
	add r1, r7, #0
	add r1, r1, #26
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #26
	add r1, r7, #0
	add r1, r1, #28
	ldrh r2, [r1]
	strh r2, [r0]
_08061210:
	add r0, r7, #0
	add r0, r0, #24
	add r1, r7, #0
	add r1, r1, #26
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bcs _08061234
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #23
	str r1, [r7, #12]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r0, r0, #100
	str r0, [r7, #20]
	b _08061246
_08061234:
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #24
	str r1, [r7, #12]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r0, r0, #104
	str r0, [r7, #20]
_08061246:
	ldr r0, [r7, #12]
	ldrb r1, [r0]
	cmp r1, #255
	bne _0806130C
	ldr r0, [r7, #32]
	ldr r1, [r0, #40]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	lsr r0, r2, #1
	ldr r1, [r7, #32]
	ldrb r2, [r1, #13]
	lsr r1, r2, #3
	lsl r2, r0, #24
	lsr r0, r2, #24
	lsl r2, r1, #24
	lsr r1, r2, #24
	cmp r0, r1
	bne _0806130C
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #10
	bls _08061304
	ldr r0, [r7, #32]
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #129
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, [r7, #32]
	ldr r1, [r0, #40]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r1, #16]
	ldr r0, [r7, #32]
	ldr r2, [r0, #40]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #8]
	mov r1, #0
	strb r1, [r0]
	ldr r0, [r7, #20]
	ldr r1, [r7, #32]
	ldr r2, [r1, #40]
	str r2, [r0]
	ldr r0, [r7, #12]
	ldr r1, [r7, #32]
	ldr r2, [r1, #40]
	ldrb r1, [r2, #10]
	strb r1, [r0]
	ldr r0, [r7, #32]
	ldr r1, [r7, #32]
	ldrh r2, [r1, #54]
	ldr r3, _08061308  @ =0x0000FFFB
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #32]
	ldr r1, [r7, #32]
	ldrh r2, [r1, #54]
	mov r3, #128
	lsl r3, r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08061304:
	b _08061330
	.byte 0x00
	.byte 0x00
_08061308:
	.4byte 0x0000FFFB
_0806130C:
	ldr r0, [r7, #8]
	mov r1, #0
	strb r1, [r0]
_08061312:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #32]
	add r1, r0, #0
	add r1, r1, #144
	str r1, [r7, #32]
	ldr r0, [r7, #8]
	add r1, r0, #1
	str r1, [r7, #8]
	b _0806110A
_08061330:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #35
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	beq _08061354
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003870
_08061354:
	ldr r0, [r7]
	bl sub_08062CB8
	add sp, sp, #36
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080610F0

	.byte 0x00
	.byte 0x00
