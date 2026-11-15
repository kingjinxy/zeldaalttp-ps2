	THUMB_FUNC_START sub_08016AA8
sub_08016AA8: @ 0x08016AA8
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _08016ABA
	add r0, r4, #0
	bl sub_08016DF8
_08016ABA:
	add r0, r4, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	bne _08016B0C
	ldr r1, _08016B08  @ =gUnknown_0813922C
	ldr r0, [r4, #76]
	ldrb r0, [r0, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #92
	mov r2, #0
	mov r3, #0
	strh r1, [r0]
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #46
	strb r2, [r0]
	strh r3, [r4, #58]
	ldr r0, [r4, #76]
	str r0, [r4, #88]
	add r1, r4, #0
	add r1, r1, #108
	ldrh r0, [r1]
	cmp r0, #0
	beq _08016AFC
	add r0, r0, #1
	strh r0, [r1]
_08016AFC:
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	b _08016B14
	.byte 0x00
	.byte 0x00
_08016B08:
	.4byte gUnknown_0813922C
_08016B0C:
	ldr r1, _08016B1C  @ =gUnknown_081391E4
	add r0, r4, #0
	bl 0x080098A0
_08016B14:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08016B1C:
	.4byte gUnknown_081391E4
	THUMB_FUNC_END sub_08016AA8

