	THUMB_FUNC_START sub_08021190
sub_08021190: @ 0x08021190
	push {r4-r6,lr}
	add r5, r0, #0
	add r4, r1, #0
	lsl r2, r2, #16
	lsr r6, r2, #16
	ldr r0, [r4, #88]
	cmp r0, #0
	beq _080211AA
	ldrh r1, [r0, #8]
	mov r0, #129
	lsl r0, r0, #2
	cmp r1, r0
	beq _0802122A
_080211AA:
	ldrh r0, [r4, #50]
	ldrh r1, [r5, #50]
	sub r0, r0, r1
	ldr r2, _08021210  @ =gUnknown_0813B920
	ldrb r1, [r2, #6]
	add r0, r1, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #1
	cmp r0, r1
	bgt _08021214
	ldrh r0, [r4, #54]
	ldrh r1, [r5, #54]
	sub r0, r0, r1
	ldrb r1, [r2, #7]
	add r0, r1, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #1
	cmp r0, r1
	bgt _08021214
	ldrb r0, [r4, #20]
	cmp r0, #2
	bne _080211E0
	ldrb r0, [r4, #21]
	cmp r0, #1
	bls _08021214
_080211E0:
	add r0, r4, #0
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021214
	add r0, r5, #0
	mov r1, #2
	mov r2, #0
	bl sub_0804411C
	add r1, r0, #0
	cmp r1, #0
	beq _08021214
	ldrh r0, [r4, #58]
	strh r0, [r1, #58]
	ldr r0, [r5, #84]
	str r0, [r1, #84]
	str r5, [r1, #88]
	str r4, [r1, #100]
	str r1, [r4, #88]
	mov r0, #1
	b _0802122C
	.byte 0x00
	.byte 0x00
_08021210:
	.4byte gUnknown_0813B920
_08021214:
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0803CECC
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r4, #0
	add r1, r6, #0
	bl sub_08002E70
_0802122A:
	mov r0, #0
_0802122C:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08021190

	.byte 0x00
	.byte 0x00
