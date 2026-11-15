	THUMB_FUNC_START sub_08062020
sub_08062020: @ 0x08062020
	push {r4,r7,lr}
	sub sp, sp, #24
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #12]
	ldr r0, _08062054  @ =gUnknown_03006A30
	str r0, [r7, #20]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08062042:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #3
	bhi _08062058
	ldr r0, [r7, #20]
	ldr r1, [r0, #40]
	cmp r1, #0
	bne _0806205A
	b _08062058
_08062054:
	.4byte gUnknown_03006A30
_08062058:
	b _080620A6
_0806205A:
	ldr r0, [r7, #20]
	ldrb r1, [r0, #2]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0806208E
	ldr r0, [r7, #20]
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #5
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0806208E
	ldr r0, [r7, #20]
	ldr r1, [r0, #40]
	ldr r0, [r7]
	bl 0x08003C84
_0806208E:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #20]
	add r1, r0, #0
	add r1, r1, #144
	str r1, [r7, #20]
	b _08062042
_080620A6:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r1, [r1, #124]
	ldr r2, [r2, #108]
	add r1, r1, r2
	str r1, [r0, #124]
	ldr r0, [r7]
	ldr r1, [r0, #108]
	cmp r1, #0
	bne _080620BE
	b _0806273A
_080620BE:
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	add r0, r7, #4
	ldr r1, [r7]
	ldr r2, [r1, #108]
	lsr r1, r2, #8
	add r2, r1, #0
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080620D6:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #0
	bne _080620E0
	b _0806273A
_080620E0:
	ldr r0, [r7]
	ldr r2, [r7]
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
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #1
	bne _08062116
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #108]
	mov r3, #255
	add r1, r2, #0
	and r1, r1, r3
	str r1, [r0, #12]
_08062116:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #116
	ldrh r0, [r1]
	mov r1, #128
	lsl r1, r1, #7
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08062180
	ldr r0, [r7, #12]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _080621D8  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _080621D8  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #116
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #116
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
_08062180:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl 0x08009308
	add r1, r7, #0
	add r1, r1, #8
	strh r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #116
	ldrh r0, [r0]
	ldrh r1, [r2]
	cmp r0, r1
	bne _080621A6
	b _0806272A
_080621A6:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	add r2, r0, #0
	add r0, r0, #116
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r0, [r1]
	ldr r1, _080621DC  @ =0x00004017
	cmp r0, r1
	bgt _0806222C
	ldr r1, _080621E0  @ =0x00004016
	cmp r0, r1
	blt _0806222C
	b _080621E4
	.byte 0x00
	.byte 0x00
_080621D8:
	.4byte gUnknown_03000450
_080621DC:
	.4byte 0x00004017
_080621E0:
	.4byte 0x00004016
_080621E4:
	ldr r0, [r7, #12]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _08062224  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _08062224  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08062228  @ =0x00004019
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	b _0806272A
	.byte 0x00
	.byte 0x00
_08062224:
	.4byte gUnknown_03000450
_08062228:
	.4byte 0x00004019
_0806222C:
	ldr r0, [r7]
	bl 0x0800935C
	lsl r2, r0, #16
	lsr r1, r2, #16
	add r0, r1, #0
	sub r0, r0, #45
	cmp r0, #54
	bls _08062240
	b _080625D8
_08062240:
	lsl r1, r0, #2
	ldr r2, _0806224C  @ =0x08062250
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
	.byte 0x00
	.byte 0x00
_0806224C:
	.4byte 0x08062250
	.4byte _0806252A
	.4byte _0806232C
	.4byte _080623AA
	.4byte _08062428
	.4byte _08062468
	.4byte _080624A8
	.4byte _080624E8
	.4byte _08062528
	.4byte _0806232C
	.4byte _0806232C
	.4byte _080623AA
	.4byte _080623AA
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _080625D8
	.4byte _08062528
	.4byte _080625D8
	.4byte _08062528
	.4byte _080625D8
	.4byte _08062528
	.4byte _080625D8
	.4byte _08062528
_0806232C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #0
	beq _080623A8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #4
	beq _080623A8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #2
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08062382
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	mov r2, #7
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _080623A8
_08062382:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	mov r2, #7
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080623A8:
	b _0806272A
_080623AA:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #6
	beq _08062426
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #2
	beq _08062426
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #2
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08062400
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	sub r2, r1, #1
	add r1, r2, #0
	mov r2, #7
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08062426
_08062400:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	mov r2, #7
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08062426:
	b _0806272A
_08062428:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #0
	bne _0806244E
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _08062466
_0806244E:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08062466:
	b _0806272A
_08062468:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #2
	bne _0806248E
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _080624A6
_0806248E:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_080624A6:
	b _0806272A
_080624A8:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #4
	bne _080624CE
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _080624E6
_080624CE:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_080624E6:
	b _0806272A
_080624E8:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #0
	bne _0806250E
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _08062526
_0806250E:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08062526:
	b _0806272A
_08062528:
	b _0806272A
_0806252A:
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r2, #4
	eor r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	mov r3, #255
	orr r2, r2, r3
	add r3, r2, #0
	strb r3, [r1, #24]
	ldrb r1, [r0, #23]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #112
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #114
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #42
	add r2, r0, #0
	add r0, r0, #120
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
	mov r1, #0
	str r1, [r0, #108]
	mov r0, #90
	bl 0x08003DFC
	b _0806272A
_080625D8:
	ldr r0, [r7]
	bl 0x0800935C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #32
	beq _0806265C
	cmp r0, #66
	beq _080625EC
	b _080626CC
_080625EC:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	mov r1, #8
	bl 0x08003870
	ldr r0, _08062658  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r3, [r2, #100]
	ldrb r1, [r3, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _08062658  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r3, [r2, #104]
	ldrb r1, [r3, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	b _08062726
	.byte 0x00
	.byte 0x00
_08062658:
	.4byte gUnknown_03006A30
_0806265C:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	mov r1, #8
	bl 0x08003870
	ldr r0, _080626C8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r3, [r2, #100]
	ldrb r1, [r3, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #17
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _080626C8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r3, [r2, #104]
	ldrb r1, [r3, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #17
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	b _08062726
	.byte 0x00
	.byte 0x00
_080626C8:
	.4byte gUnknown_03006A30
_080626CC:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #112
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #114
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #120
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
	mov r1, #0
	str r1, [r0, #124]
	b _08062726
_08062726:
	b _08062B00
	.byte 0xFF
	.byte 0xE7
_0806272A:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080620D6
_0806273A:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08062752
	b _080629FE
_08062752:
	mov r0, #0
	str r0, [r7, #16]
	add r4, r7, #4
	ldr r0, _0806279C  @ =gUnknown_08141D10
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldr r0, _0806279C  @ =gUnknown_08141D10
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	add r3, r2, #1
	add r0, r0, r3
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, [r7]
	bl 0x0800934C
	add r1, r0, #0
	strb r1, [r4]
	lsl r1, r1, #24
	lsr r0, r1, #24
	cmp r0, #96
	beq _080627D0
	cmp r0, #96
	bgt _080627A0
	cmp r0, #92
	beq _080627A6
	cmp r0, #94
	beq _080627B4
	b _080627DE
	.byte 0x00
	.byte 0x00
_0806279C:
	.4byte gUnknown_08141D10
_080627A0:
	cmp r0, #98
	beq _080627C2
	b _080627DE
_080627A6:
	mov r0, #84
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	b _080627DE
_080627B4:
	mov r0, #84
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	b _080627DE
_080627C2:
	mov r0, #84
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	b _080627DE
_080627D0:
	mov r0, #84
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	b _080627DE
_080627DE:
	ldr r0, [r7, #16]
	cmp r0, #0
	beq _0806283A
	ldr r0, [r7, #16]
	ldr r1, [r7]
	ldr r2, _080628A4  @ =gUnknown_08141D10
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
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
	ldr r0, [r7, #16]
	ldr r1, [r7]
	ldr r2, _080628A4  @ =gUnknown_08141D10
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
	add r4, r3, #1
	add r2, r2, r4
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
_0806283A:
	add r0, r7, #6
	ldr r1, _080628A4  @ =gUnknown_08141D10
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	mov r3, #4
	eor r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r1, r1, r2
	ldrb r2, [r1]
	strb r2, [r0]
	add r0, r7, #7
	ldr r1, _080628A4  @ =gUnknown_08141D10
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	mov r3, #4
	eor r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r3, r2, #1
	add r1, r1, r3
	ldrb r2, [r1]
	strb r2, [r0]
	add r4, r7, #4
	add r0, r7, #6
	mov r1, #0
	ldrsb r1, [r0, r1]
	add r0, r7, #7
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, [r7]
	bl 0x0800934C
	add r1, r0, #0
	strb r1, [r4]
	lsl r1, r1, #24
	lsr r0, r1, #24
	cmp r0, #97
	bne _08062896
	b _080629AA
_08062896:
	cmp r0, #97
	bgt _080628A8
	cmp r0, #93
	beq _080628AE
	cmp r0, #95
	beq _08062902
	b _080629FE
_080628A4:
	.4byte gUnknown_08141D10
_080628A8:
	cmp r0, #99
	beq _08062956
	b _080629FE
_080628AE:
	mov r0, #84
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	ldr r0, [r7, #16]
	cmp r0, #0
	beq _08062900
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #6
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
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #7
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
_08062900:
	b _080629FE
_08062902:
	mov r0, #84
	mov r1, #6
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	ldr r0, [r7, #16]
	cmp r0, #0
	beq _08062954
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #6
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
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #7
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
_08062954:
	b _080629FE
_08062956:
	mov r0, #84
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	ldr r0, [r7, #16]
	cmp r0, #0
	beq _080629A8
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #6
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
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #7
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
_080629A8:
	b _080629FE
_080629AA:
	mov r0, #84
	mov r1, #7
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #16]
	ldr r0, [r7, #16]
	cmp r0, #0
	beq _080629FC
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #6
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
	ldr r0, [r7, #16]
	ldr r1, [r7]
	add r2, r7, #7
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
_080629FC:
	b _080629FE
_080629FE:
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
	beq _08062A20
	ldr r0, [r7]
	ldr r1, _08062A1C  @ =gUnknown_08141DFC
	str r1, [r0, #72]
	b _08062A26
_08062A1C:
	.4byte gUnknown_08141DFC
_08062A20:
	ldr r0, [r7]
	ldr r1, _08062A78  @ =gUnknown_08141E04
	str r1, [r0, #72]
_08062A26:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08062A9E
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #2
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08062A7C
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	mov r3, #15
	add r1, r2, #0
	bic r1, r1, r3
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #8
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08062A9E
	.byte 0x00
	.byte 0x00
_08062A78:
	.4byte gUnknown_08141E04
_08062A7C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	mov r3, #15
	add r1, r2, #0
	bic r1, r1, r3
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #8
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_08062A9E:
	ldr r0, [r7]
	ldr r1, [r0, #108]
	cmp r1, #0
	beq _08062AC0
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #108]
	add r1, r2, #0
	sub r1, r1, #32
	str r1, [r0, #108]
	ldr r0, [r7]
	ldr r1, [r0, #108]
	cmp r1, #0
	bge _08062AC0
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #108]
_08062AC0:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #35
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	beq _08062AE4
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003870
_08062AE4:
	ldr r0, [r7]
	ldr r1, [r0, #124]
	ldr r0, _08062B08  @ =0x00001FFF
	cmp r1, r0
	bls _08062AFA
	mov r0, #114
	bl 0x08003DFC
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #124]
_08062AFA:
	ldr r0, [r7]
	bl sub_08062CB8
_08062B00:
	add sp, sp, #24
	pop {r4,r7}
	pop {r0}
	bx r0
_08062B08:
	.4byte 0x00001FFF
	THUMB_FUNC_END sub_08062020

