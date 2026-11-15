	THUMB_FUNC_START sub_08061364
sub_08061364: @ 0x08061364
	push {r4,r5,r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #100]
	str r1, [r7, #8]
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #100
	str r1, [r7, #12]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r0, r0, #23
	str r0, [r7, #16]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldrb r0, [r1, #20]
	cmp r0, #1
	beq _0806139E
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _080618A8
	.byte 0x09
	.byte 0xE0
_0806139E:
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
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, [r2, #48]
	str r1, [r0, #48]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, [r2, #52]
	str r1, [r0, #52]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, [r2, #56]
	str r1, [r0, #56]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #42
	add r2, r0, #0
	add r0, r0, #42
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
	ldr r1, [r0, #100]
	cmp r1, #0
	bne _080613FC
	b _080614FC
_080613FC:
	ldr r0, [r7]
	ldr r1, [r0, #104]
	cmp r1, #0
	bne _08061406
	b _080614FC
_08061406:
	ldr r0, _080614F8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #100]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _080614FC
	ldr r0, _080614F8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #104]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _080614FC
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #1
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #24]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #110
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #108
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080614F8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #100]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080614F8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #104]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #12]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #19
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #12]
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #19
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	b _080618A8
_080614F8:
	.4byte gUnknown_03006A30
_080614FC:
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08061502:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #1
	bls _0806150C
	b _0806187C
_0806150C:
	ldr r0, [r7, #8]
	cmp r0, #0
	bne _08061514
	b _0806184A
_08061514:
	ldr r0, _080615C4  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _0806152C
	b _08061676
_0806152C:
	ldr r0, _080615C4  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08061550
	b _08061674
_08061550:
	ldr r1, [r7, #8]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _080615C8  @ =gUnknown_08141D44
	add r4, r7, #4
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r1, r1, r3
	cmp r0, r1
	beq _080615E4
	ldr r1, [r7, #8]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _080615C8  @ =gUnknown_08141D44
	add r4, r7, #4
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r1, r1, r3
	cmp r0, r1
	ble _080615CC
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #50]
	sub r1, r2, #1
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _080615E4
	.byte 0x00
	.byte 0x00
_080615C4:
	.4byte gUnknown_03006A30
_080615C8:
	.4byte gUnknown_08141D44
_080615CC:
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #50]
	add r1, r2, #1
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_080615E4:
	ldr r1, [r7, #8]
	mov r2, #54
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _08061658  @ =gUnknown_08141D54
	add r4, r7, #4
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r1, r1, r3
	cmp r0, r1
	beq _08061674
	ldr r1, [r7, #8]
	mov r2, #54
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _08061658  @ =gUnknown_08141D54
	add r4, r7, #4
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r1, r1, r3
	cmp r0, r1
	ble _0806165C
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #54]
	sub r1, r2, #1
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08061674
	.byte 0x00
	.byte 0x00
_08061658:
	.4byte gUnknown_08141D54
_0806165C:
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #54]
	add r1, r2, #1
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08061674:
	b _0806184A
_08061676:
	add r0, r7, #5
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #0
	bne _0806169A
	add r0, r7, #5
	add r1, r7, #5
	ldrb r2, [r1]
	mov r3, #4
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0806169A:
	ldr r0, _080616DC  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #13]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080616E0
	ldr r0, _080616DC  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	ldrb r0, [r2, #13]
	add r1, r7, #5
	ldrb r2, [r1]
	lsl r1, r2, #2
	cmp r0, r1
	beq _080616E0
	b _08061794
	.byte 0x00
	.byte 0x00
_080616DC:
	.4byte gUnknown_03006A30
_080616E0:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _08061788  @ =gUnknown_08141D44
	add r4, r7, #4
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _0806178C  @ =gUnknown_08141D54
	add r4, r7, #4
	ldrb r3, [r4]
	ldr r5, [r7]
	add r4, r5, #0
	add r5, r5, #42
	ldrb r4, [r5]
	add r5, r4, #0
	lsl r4, r5, #1
	add r3, r3, r4
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #54]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #8]
	add r1, r7, #5
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _08061790  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #26]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #26]
	b _0806184A
	.byte 0x00
	.byte 0x00
_08061788:
	.4byte gUnknown_08141D44
_0806178C:
	.4byte gUnknown_08141D54
_08061790:
	.4byte gUnknown_03006A30
_08061794:
	ldr r0, _08061874  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #129
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, [r7, #8]
	mov r1, #192
	lsl r1, r1, #9
	str r1, [r0, #16]
	ldr r0, [r7, #8]
	mov r1, #128
	str r1, [r0, #12]
	ldr r0, [r7, #8]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r3, [r2]
	lsl r1, r3, #2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _08061874  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08061874  @ =gUnknown_03006A30
	ldr r3, [r7, #8]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _08061878  @ =0x0000EFFF
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
	ldr r0, _08061874  @ =gUnknown_03006A30
	ldr r2, [r7, #8]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, [r7, #12]
	mov r1, #0
	str r1, [r0]
	ldr r0, [r7, #16]
	mov r1, #255
	strb r1, [r0]
_0806184A:
	ldr r0, [r7]
	ldr r1, [r0, #104]
	str r1, [r7, #8]
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #104
	str r1, [r7, #12]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r0, r0, #24
	str r0, [r7, #16]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08061502
	.byte 0x00
	.byte 0x00
_08061874:
	.4byte gUnknown_03006A30
_08061878:
	.4byte 0x0000EFFF
_0806187C:
	ldr r0, [r7]
	ldr r1, _080618B0  @ =gUnknown_08141D64
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	add r2, r1, #1
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080618A8:
	add sp, sp, #20
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_080618B0:
	.4byte gUnknown_08141D64
	THUMB_FUNC_END sub_08061364

