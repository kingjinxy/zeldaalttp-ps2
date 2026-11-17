	THUMB_FUNC_START sub_080156BC
sub_080156BC: @ 0x080156BC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r0, #0
	mov r8, r1
	add r7, r4, #0
	add r7, r7, #80
	ldrh r0, [r7]
	bl sub_08015DC0
	mov r0, #42
	add r0, r0, r4
	mov r9, r0
	ldrb r0, [r0]
	mov r1, #6
	mov r10, r1
	mov r2, r10
	and r2, r2, r0
	lsl r2, r2, #1
	ldr r0, _08015788  @ =gUnknown_08138194
	add r2, r2, r0
	mov r3, #50
	ldrsh r1, [r4, r3]
	mov r5, #0
	ldrsh r0, [r2, r5]
	add r1, r1, r0
	ldr r3, _0801578C  @ =gUnknown_03000450
	ldrh r0, [r3, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r5, #54
	ldrsh r0, [r4, r5]
	mov r5, #2
	ldrsh r2, [r2, r5]
	add r0, r0, r2
	ldrh r2, [r3, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	add r5, r6, #0
	ldrh r1, [r7]
	add r0, r6, #0
	bl sub_0800932C
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_080094BC
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #38
	blt _080157DC
	cmp r0, #40
	ble _0801579C
	cmp r0, #60
	bne _080157DC
	mov r0, r8
	add r0, r0, #53
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _080157DC
	add r0, r4, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _080157DC
	ldr r5, _08015790  @ =gUnknown_02000004
	ldrb r0, [r5]
	cmp r0, #15
	bhi _08015782
	lsl r0, r0, #3
	ldr r1, _08015794  @ =gUnknown_0202A500
	add r3, r0, r1
	mov r1, r10
	and r1, r1, r2
	lsl r1, r1, #16
	ldrh r2, [r7]
	mov r0, #192
	lsl r0, r0, #8
	and r0, r0, r2
	mov r2, #128
	lsl r2, r2, #17
	orr r0, r0, r2
	orr r1, r1, r0
	ldr r0, _08015798  @ =0x00000FFF
	and r0, r0, r6
	orr r1, r1, r0
	stm r3!, {r1}
	str r4, [r3]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_08015782:
	mov r0, #1
	b _080157DE
	.byte 0x00
	.byte 0x00
_08015788:
	.4byte gUnknown_08138194
_0801578C:
	.4byte gUnknown_03000450
_08015790:
	.4byte gUnknown_02000004
_08015794:
	.4byte gUnknown_0202A500
_08015798:
	.4byte 0x00000FFF
_0801579C:
	mov r1, r8
	ldrb r0, [r1, #5]
	cmp r0, #1
	bne _080157DC
	ldr r6, _080157EC  @ =gUnknown_02000004
	ldrb r0, [r6]
	cmp r0, #15
	bhi _080157DC
	lsl r0, r0, #3
	ldr r1, _080157F0  @ =gUnknown_0202A500
	add r3, r0, r1
	mov r1, r9
	ldrb r0, [r1]
	mov r1, r10
	and r1, r1, r0
	lsl r1, r1, #16
	ldrh r2, [r7]
	mov r0, #192
	lsl r0, r0, #8
	and r0, r0, r2
	mov r2, #128
	lsl r2, r2, #18
	orr r0, r0, r2
	orr r1, r1, r0
	ldr r0, _080157F4  @ =0x00000FFF
	and r5, r5, r0
	orr r1, r1, r5
	stm r3!, {r1}
	str r4, [r3]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
_080157DC:
	mov r0, #0
_080157DE:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080157EC:
	.4byte gUnknown_02000004
_080157F0:
	.4byte gUnknown_0202A500
_080157F4:
	.4byte 0x00000FFF
	THUMB_FUNC_END sub_080156BC

