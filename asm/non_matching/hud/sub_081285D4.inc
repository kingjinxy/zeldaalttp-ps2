	THUMB_FUNC_START sub_081285D4
sub_081285D4: @ 0x081285D4
	push {r4-r6,lr}
	ldr r4, _08128610  @ =gUnknown_03003D12
	mov r6, #128
_081285DA:
	ldrb r1, [r4]
	mov r5, #0
	add r0, r1, #0
	and r0, r0, r6
	cmp r0, #0
	beq _081285EA
	mov r1, #31
	strb r1, [r4]
_081285EA:
	ldr r2, _08128614  @ =gBow
	add r0, r1, r2
	ldrb r2, [r0]
	add r0, r6, #0
	and r0, r0, r2
	cmp r0, #0
	bne _081285FC
	cmp r2, #0
	bne _08128624
_081285FC:
	cmp r1, #32
	bne _0812861C
	ldr r0, _08128618  @ =gUnknown_02002341
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812861C
	mov r0, #32
	bl sub_08128694
	b _0812862A
_08128610:
	.4byte gUnknown_03003D12
_08128614:
	.4byte gBow
_08128618:
	.4byte gUnknown_02002341
_0812861C:
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	b _081285DA
_08128624:
	add r0, r1, #0
	bl sub_08128694
_0812862A:
	cmp r5, #0
	bne _081285DA
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081285D4

