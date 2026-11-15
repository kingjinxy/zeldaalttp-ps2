	THUMB_FUNC_START sub_080133D0
sub_080133D0: @ 0x080133D0
	push {r4-r6,lr}
	bl sub_080132B0
	ldr r5, [r0]
	ldr r6, [r0, #4]
	ldr r2, _08013484  @ =gUnknown_03006C80
	mov r1, #0
	ldrb r0, [r5, #1]
	cmp r0, #4
	bne _080133E6
	mov r1, #1
_080133E6:
	mov r4, #0
	strb r1, [r2, #2]
	ldr r1, _08013488  @ =gUnknown_02016330
	ldr r0, [r5, #20]
	str r0, [r1]
	ldrb r1, [r5, #3]
	add r0, r2, #0
	add r0, r0, #76
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080128EC
	ldrb r0, [r5, #1]
	bl sub_08015DD8
	ldrb r0, [r5]
	bl sub_08015F74
	ldr r1, _0801348C  @ =gUnknown_0201EFF8
	strh r4, [r1, #2]
	strh r4, [r1]
	ldrb r0, [r5, #4]
	lsl r0, r0, #4
	strh r0, [r1, #4]
	ldrb r0, [r5, #5]
	lsl r0, r0, #4
	strh r0, [r1, #6]
	mov r0, #0
	mov r1, #0
	bl sub_08012F84
	cmp r0, #0
	beq _0801343A
	mov r0, #0
	mov r1, #0
	bl sub_08012F84
	mov r1, #0
	mov r2, #0
	mov r3, #0
	bl sub_08013C8C
_0801343A:
	mov r0, #0
	mov r1, #1
	bl sub_08012F84
	cmp r0, #0
	beq _08013458
	mov r0, #0
	mov r1, #1
	bl sub_08012F84
	mov r1, #0
	mov r2, #0
	mov r3, #0
	bl sub_08013C8C
_08013458:
	mov r0, #0
	mov r1, #3
	bl sub_08012F84
	cmp r0, #0
	beq _08013474
	mov r0, #0
	mov r1, #3
	bl sub_08012F84
	add r1, r5, #0
	mov r2, #0
	bl sub_0801303C
_08013474:
	add r0, r5, #0
	add r1, r6, #0
	bl sub_080131FC
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08013484:
	.4byte gUnknown_03006C80
_08013488:
	.4byte gUnknown_02016330
_0801348C:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_080133D0

