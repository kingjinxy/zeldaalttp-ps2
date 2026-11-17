	THUMB_FUNC_START sub_080122C0
sub_080122C0: @ 0x080122C0
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _08012310
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #31]
	mov r0, #63
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r4, #31]
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _08012300
	ldrb r1, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	mov r1, #8
	orr r0, r0, r1
	strb r0, [r4, #30]
	add r1, r4, #0
	add r1, r1, #32
	mov r0, #224
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	b _08012310
_08012300:
	ldrb r0, [r4, #29]
	mov r1, #192
	orr r0, r0, r1
	strb r0, [r4, #29]
	add r0, r4, #0
	mov r1, #3
	bl sub_08003870
_08012310:
	add r0, r4, #0
	bl GetNextFrame
	ldrb r0, [r4, #28]
	mov r5, #4
	neg r5, r5
	add r3, r5, #0
	and r3, r3, r0
	strb r3, [r4, #28]
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _0801234C
	ldr r1, _08012344  @ =gUnknown_081380DA
	ldr r2, _08012348  @ =gUnknown_02016D60
	ldrb r0, [r2, #28]
	lsl r0, r0, #2
	add r1, r1, #2
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r0, #16
	strh r0, [r4, #54]
	add r2, r2, #36
	ldrb r0, [r2]
	cmp r0, #2
	bne _08012388
	b _0801237E
_08012344:
	.4byte gUnknown_081380DA
_08012348:
	.4byte gUnknown_02016D60
_0801234C:
	ldr r1, _08012390  @ =gUnknown_02016D60
	ldrb r0, [r1, #26]
	cmp r0, #0
	bne _08012388
	add r0, r1, #0
	add r0, r0, #36
	ldrb r0, [r0]
	cmp r0, #0
	bne _08012388
	ldrb r0, [r1, #28]
	cmp r0, #2
	bhi _08012388
	ldr r0, _08012394  @ =gUnknown_0200B250
	ldrb r2, [r1, #28]
	lsl r1, r2, #6
	add r1, r1, r0
	add r1, r1, #63
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _08012388
	ldr r0, _08012398  @ =gUnknown_081380F2
	add r0, r2, r0
	ldrb r0, [r0]
	strh r0, [r4, #54]
_0801237E:
	add r0, r3, #0
	and r0, r0, r5
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #28]
_08012388:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08012390:
	.4byte gUnknown_02016D60
_08012394:
	.4byte gUnknown_0200B250
_08012398:
	.4byte gUnknown_081380F2
	THUMB_FUNC_END sub_080122C0

