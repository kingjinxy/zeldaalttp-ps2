	THUMB_FUNC_START sub_08044594
sub_08044594: @ 0x08044594
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r4, r7, #4
	bl sub_0800099C
	ldr r1, _080445C0  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	bl __umodsi3
	add r1, r0, #0
	strb r1, [r4]
	add r4, r7, #5
	bl sub_0800099C
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080445C4
	mov r0, #1
	b _080445CA
_080445C0:
	.4byte gUnknown_03006C80
_080445C4:
	mov r1, #1
	neg r1, r1
	add r0, r1, #0
_080445CA:
	strb r0, [r4]
	add r0, r7, #6
	mov r1, #0
	strb r1, [r0]
_080445D2:
	add r1, r7, #6
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r1, _080445E4  @ =gUnknown_03006C80
	ldrb r2, [r1]
	cmp r0, r2
	blt _080445E8
	b _08044688
	.byte 0x00
	.byte 0x00
_080445E4:
	.4byte gUnknown_03006C80
_080445E8:
	add r1, r7, #4
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r1, _08044634  @ =gUnknown_03006A30
	add r0, r1, r0
	str r0, [r7]
	ldr r0, _08044638  @ =gUnknown_03000940
	add r1, r7, #4
	mov r2, #0
	ldrsb r2, [r1, r2]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0804463C
	ldr r0, [r7]
	ldr r1, [r0, #40]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804463C
	ldr r0, [r7]
	ldr r1, [r0, #40]
	add r0, r1, #0
	b _08044694
_08044634:
	.4byte gUnknown_03006A30
_08044638:
	.4byte gUnknown_03000940
_0804463C:
	add r0, r7, #4
	add r1, r7, #4
	add r2, r7, #5
	ldrb r1, [r1]
	ldrb r2, [r2]
	add r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #4
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r1, _08044684  @ =gUnknown_03006C80
	ldrb r2, [r1]
	cmp r0, r2
	bne _08044660
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08044660:
	add r0, r7, #4
	mov r1, #0
	ldrsb r1, [r0, r1]
	mov r0, #1
	cmn r1, r0
	bne _08044674
	add r0, r7, #4
	ldr r1, _08044684  @ =gUnknown_03006C80
	ldrb r2, [r1]
	strb r2, [r0]
_08044674:
	add r1, r7, #6
	add r0, r7, #6
	add r1, r7, #6
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080445D2
_08044684:
	.4byte gUnknown_03006C80
_08044688:
	ldr r0, _08044690  @ =gUnknown_03006A30
	ldr r1, [r0, #40]
	add r0, r1, #0
	b _08044694
_08044690:
	.4byte gUnknown_03006A30
_08044694:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08044594

