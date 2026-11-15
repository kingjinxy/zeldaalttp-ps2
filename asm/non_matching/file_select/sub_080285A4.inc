	THUMB_FUNC_START sub_080285A4
sub_080285A4: @ 0x080285A4
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080285C8
	add r0, r4, #0
	bl 0x08000620
	add r0, r4, #0
	bl DeleteThisEntity
	b _080285F0
_080285C8:
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #4
	bhi _080285E4
	ldr r0, _080285E0  @ =gUnknown_0813CFCC
	ldrb r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	str r0, [r4, #72]
	b _080285F0
	.byte 0x00
	.byte 0x00
_080285E0:
	.4byte gUnknown_0813CFCC
_080285E4:
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
_080285F0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080285A4

	.byte 0x00
	.byte 0x00
