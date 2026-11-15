	THUMB_FUNC_START sub_080200D0
sub_080200D0: @ 0x080200D0
	push {r4,r5,lr}
	add r5, r0, #0
	bl 0x080095A4
	add r0, r5, #0
	bl 0x08009874
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _0802010A
	add r0, r5, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08020100
	ldrb r0, [r5, #23]
	cmp r0, #1
	bne _08020100
	add r0, r5, #0
	bl sub_08020478
_08020100:
	add r0, r5, #0
	add r1, r4, #0
	bl 0x0800996C
	b _08020120
_0802010A:
	ldr r4, _08020128  @ =gUnknown_0813B5D4
	add r0, r5, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_08020120:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020128:
	.4byte gUnknown_0813B5D4
	THUMB_FUNC_END sub_080200D0

