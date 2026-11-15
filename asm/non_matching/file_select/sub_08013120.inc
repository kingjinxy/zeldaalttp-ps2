	THUMB_FUNC_START sub_08013120
sub_08013120: @ 0x08013120
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	str r1, [sp]
	bl sub_080131C8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	ldr r6, _080131B8  @ =gUnknown_03006C80
	ldr r0, _080131BC  @ =gUnknown_0202A880
	mov r9, r0
	add r5, r6, #0
	add r5, r5, #75
	mov r8, r9
	mov r7, #63
_08013146:
	ldr r0, _080131B8  @ =gUnknown_03006C80
	ldr r1, _080131C0  @ =gUnknown_0842B8DC
	ldrb r0, [r0, #1]
	lsl r0, r0, #1
	add r1, r0, r1
_08013150:
	ldrb r0, [r5]
	add r0, r0, #1
	and r0, r0, r7
	strb r0, [r5]
	ldrb r2, [r5]
	mov r3, r8
	add r0, r2, r3
	ldrb r0, [r0]
	ldrh r3, [r1]
	cmp r0, r3
	bcs _08013150
	ldrb r1, [r6, #1]
	lsl r1, r1, #2
	ldr r0, _080131C4  @ =gUnknown_0842B8CC
	add r1, r1, r0
	mov r3, r9
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #3
	ldr r1, [r1]
	add r3, r1, r0
	ldr r2, [r3, #4]
	lsr r0, r2, #30
	cmp r0, r10
	bne _08013146
	mov r1, #31
	ldr r0, [sp]
	and r1, r1, r0
	mov r0, #1
	lsl r0, r0, r1
	and r2, r2, r0
	cmp r2, #0
	bne _08013146
	ldr r4, [r3]
	ldrb r0, [r4, #2]
	ldrb r1, [r6]
	cmp r0, r1
	bne _08013146
	add r0, r3, #0
	bl sub_080130D4
	cmp r0, #0
	beq _08013146
	add r0, r4, #0
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080131B8:
	.4byte gUnknown_03006C80
_080131BC:
	.4byte gUnknown_0202A880
_080131C0:
	.4byte gUnknown_0842B8DC
_080131C4:
	.4byte gUnknown_0842B8CC
	THUMB_FUNC_END sub_08013120

