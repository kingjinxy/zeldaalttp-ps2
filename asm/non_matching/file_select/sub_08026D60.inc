	THUMB_FUNC_START sub_08026D60
sub_08026D60: @ 0x08026D60
	push {lr}
	add r2, r0, #0
	add r0, r0, #108
	ldrh r0, [r0]
	cmp r0, #0
	beq _08026D80
	ldr r0, _08026D7C  @ =gUnknown_02016328
	ldrb r0, [r0]
	cmp r0, #0
	bne _08026D80
	add r0, r2, #0
	bl DeleteThisEntity
	b _08026D90
_08026D7C:
	.4byte gUnknown_02016328
_08026D80:
	ldr r0, _08026D94  @ =gUnknown_0813CC10
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_08026D90:
	pop {r0}
	bx r0
_08026D94:
	.4byte gUnknown_0813CC10
	THUMB_FUNC_END sub_08026D60

