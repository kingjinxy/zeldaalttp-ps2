	THUMB_FUNC_START sub_08056778
sub_08056778: @ 0x08056778
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805679C  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #4
	bne _080567A4
	ldr r1, _080567A0  @ =gUnknown_02016D60
	ldrb r0, [r1, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08056808
	b _080567A4
_0805679C:
	.4byte gSubState
_080567A0:
	.4byte gUnknown_02016D60
_080567A4:
	ldr r0, _080567D8  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #4
	bne _080567DC
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #59
	bhi _080567DC
	b _08056806
_080567D8:
	.4byte gSubState
_080567DC:
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
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
_08056806:
	b _08056896
_08056808:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #3
	sub r1, r3, r2
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #3
	mov r2, #228
	sub r1, r2, r1
	cmp r0, r1
	ble _08056850
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	ldr r1, [r0, #12]
	mov r0, #128
	lsl r0, r0, #1
	cmp r1, r0
	ble _08056850
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	add r1, r2, #0
	sub r1, r1, #32
	str r1, [r0, #12]
_08056850:
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #3
	sub r1, r3, r2
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #3
	mov r2, #228
	sub r1, r2, r1
	cmp r0, r1
	bgt _08056896
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #3
	sub r1, r3, r2
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #3
	add r2, r1, #0
	mov r3, #228
	sub r1, r3, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_08056896:
	ldr r0, [r7]
	bl sub_08056988
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08056778

