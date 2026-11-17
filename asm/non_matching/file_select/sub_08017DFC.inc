	THUMB_FUNC_START sub_08017DFC
sub_08017DFC: @ 0x08017DFC
	push {r4-r6,lr}
	add r5, r0, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #0
	bne _08017EDC
	ldrh r1, [r5, #44]
	mov r0, #14
	and r0, r0, r1
	cmp r0, #0
	beq _08017E2E
	mov r4, #6
	neg r4, r4
	add r0, r5, #0
	mov r1, #2
	add r2, r4, #0
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r1, #2
	neg r1, r1
	add r0, r5, #0
	add r2, r4, #0
	b _08017E4C
_08017E2E:
	mov r0, #224
	and r0, r0, r1
	cmp r0, #0
	beq _08017E60
	add r0, r5, #0
	mov r1, #2
	mov r2, #6
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r1, #2
	neg r1, r1
	add r0, r5, #0
	mov r2, #6
_08017E4C:
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #135
	lsl r1, r1, #1
	cmp r6, r1
	beq _08017E96
	cmp r0, r1
	beq _08017E96
_08017E60:
	ldrh r1, [r5, #44]
	mov r0, #224
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08017E9E
	add r0, r5, #0
	mov r1, #8
	mov r2, #2
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r2, #2
	neg r2, r2
	add r0, r5, #0
	mov r1, #8
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #135
	lsl r1, r1, #1
	cmp r6, r1
	beq _08017E96
	cmp r0, r1
	bne _08017EDC
_08017E96:
	add r0, r5, #0
	bl sub_08017DB8
	b _08017EDC
_08017E9E:
	mov r0, #224
	lsl r0, r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08017EDC
	mov r4, #8
	neg r4, r4
	add r0, r5, #0
	add r1, r4, #0
	mov r2, #2
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r6, r0, #16
	mov r2, #2
	neg r2, r2
	add r0, r5, #0
	add r1, r4, #0
	bl sub_080092F8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #135
	lsl r1, r1, #1
	cmp r6, r1
	beq _08017ED6
	cmp r0, r1
	bne _08017EDC
_08017ED6:
	add r0, r5, #0
	bl sub_08017DB8
_08017EDC:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017DFC

	.byte 0x00
	.byte 0x00
