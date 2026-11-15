	THUMB_FUNC_START sub_0801CD40
sub_0801CD40: @ 0x0801CD40
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801CD66
	add r0, r4, #0
	bl sub_0801CDA0
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	b _0801CD6C
_0801CD66:
	add r0, r4, #0
	bl 0x08009694
_0801CD6C:
	ldr r0, _0801CD84  @ =gUnknown_0813A768
	add r1, r4, #0
	add r1, r1, #41
	ldrb r1, [r1]
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	strh r0, [r4, #58]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801CD84:
	.4byte gUnknown_0813A768
	THUMB_FUNC_END sub_0801CD40

