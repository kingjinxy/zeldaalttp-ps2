	THUMB_FUNC_START sub_080236F8
sub_080236F8: @ 0x080236F8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _08023718
	mov r3, #1
	mov r0, #1
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r3
	strb r0, [r2]
	b _08023790
_08023718:
	mov r2, #0
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _0802374A
	ldr r1, [r4, #112]
	cmp r1, #0
	beq _0802372E
	add r0, r4, #0
	bl sub_08023EB8
	mov r2, #1
_0802372E:
	ldr r1, [r4, #116]
	cmp r1, #0
	beq _0802373C
	add r0, r4, #0
	bl sub_08023EB8
	mov r2, #1
_0802373C:
	ldr r1, [r4, #120]
	cmp r1, #0
	beq _08023786
	add r0, r4, #0
	bl sub_08023EB8
	b _08023790
_0802374A:
	ldr r0, [r4, #112]
	cmp r0, #0
	beq _0802375E
	ldr r0, [r0, #84]
	ldr r1, [r0, #112]
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	mov r2, #1
_0802375E:
	ldr r0, [r4, #116]
	cmp r0, #0
	beq _08023772
	ldr r0, [r0, #84]
	ldr r1, [r0, #112]
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	mov r2, #1
_08023772:
	ldr r0, [r4, #120]
	cmp r0, #0
	beq _08023786
	ldr r0, [r0, #84]
	ldr r1, [r0, #112]
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	mov r2, #1
_08023786:
	cmp r2, #0
	bne _08023790
	add r0, r4, #0
	bl DeleteThisEntity
_08023790:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080236F8

	.byte 0x00
	.byte 0x00
