	THUMB_FUNC_START sub_0805781C
sub_0805781C: @ 0x0805781C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #20]
	cmp r0, #0
	beq _08057832
	cmp r0, #1
	beq _0805785C
	b _080578FC
_08057832:
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
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_08013D20
	ldr r1, [r7]
	str r0, [r1, #96]
	b _080578FC
_0805785C:
	ldr r0, _080578F4  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r0, [r0]
	ldr r1, [r1, #96]
	and r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #96]
	cmp r0, r2
	bne _080578F2
	ldr r0, [r7]
	bl sub_0804C9C8
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r0, #33
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080578AE
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl 0x08008D90
_080578AE:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	add r0, r1, #0
	ldr r2, _080578F8  @ =0x00000109
	add r1, r0, r2
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	ldr r1, [r7]
	mov r3, #50
	ldrsh r2, [r1, r3]
	asr r1, r2, #4
	ldr r2, [r7]
	mov r4, #54
	ldrsh r3, [r2, r4]
	asr r2, r3, #4
	add r3, r2, #0
	lsl r2, r3, #6
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	mov r0, #16
	bl play_sound
	ldr r0, [r7]
	bl DeleteThisEntity
_080578F2:
	b _080578FC
_080578F4:
	.4byte gUnknown_0201F000
_080578F8:
	.4byte 0x00000109
_080578FC:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805781C

