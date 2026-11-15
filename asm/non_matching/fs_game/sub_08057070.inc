	THUMB_FUNC_START sub_08057070
sub_08057070: @ 0x08057070
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _080570FC  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _080570FC  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08057100  @ =gUnknown_03006C80
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _08057108
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r3, r7, #0
	add r3, r3, #8
	ldrh r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #1
	add r2, r2, #4
	add r3, r2, r4
	ldrh r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r0, #0
	ldr r3, _08057104  @ =0x00005004
	add r0, r0, r3
	add r3, r0, r2
	ldrh r2, [r3]
	ldr r0, [r7]
	bl sub_0805722C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08057108
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080571B0
	.byte 0x00
	.byte 0x00
_080570FC:
	.4byte gUnknown_03000450
_08057100:
	.4byte gUnknown_03006C80
_08057104:
	.4byte 0x00005004
_08057108:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r1, r2, #4
	ldr r2, [r7, #4]
	add r1, r2, r1
	str r1, [r0, #120]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #120]
	add r2, r0, #0
	add r0, r0, #124
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
	ldr r1, _080571B8  @ =gUnknown_08140C34
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r1, r1, r3
	ldrb r2, [r1]
	add r1, r2, #0
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
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
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
_080571B0:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
_080571B8:
	.4byte gUnknown_08140C34
	THUMB_FUNC_END sub_08057070

