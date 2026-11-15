	THUMB_FUNC_START sub_08016A34
sub_08016A34: @ 0x08016A34
	push {r4,r5,lr}
	add r5, r0, #0
	bl 0x080095A4
	add r0, r5, #0
	bl 0x08009874
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08016A6E
	add r0, r5, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _08016A64
	ldrb r0, [r5, #23]
	cmp r0, #1
	bne _08016A64
	add r0, r5, #0
	bl sub_08016DF8
_08016A64:
	add r0, r5, #0
	add r1, r4, #0
	bl 0x0800996C
	b _08016A84
_08016A6E:
	ldr r4, _08016A8C  @ =gUnknown_081391E4
	add r0, r5, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_08016A84:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08016A8C:
	.4byte gUnknown_081391E4
	THUMB_FUNC_END sub_08016A34

