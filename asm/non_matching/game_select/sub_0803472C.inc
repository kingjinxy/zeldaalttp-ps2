	THUMB_FUNC_START sub_0803472C
sub_0803472C: @ 0x0803472C
	push {r4-r6,lr}
	add r5, r0, #0
	ldrb r0, [r5, #20]
	cmp r0, #0
	bne _08034744
	mov r0, #1
	strb r0, [r5, #20]
	ldrb r0, [r5, #10]
	bl sub_08013D20
	str r0, [r5, #96]
	b _0803477C
_08034744:
	ldr r1, _08034784  @ =gUnknown_0201F000
	add r6, r5, #0
	add r6, r6, #82
	ldrb r2, [r6]
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r5, #96]
	and r0, r0, r1
	cmp r0, r1
	bne _0803477C
	ldrb r1, [r5, #11]
	add r0, r2, #0
	bl sub_08012F84
	ldr r4, _08034788  @ =gUnknown_0201EFF8
	ldrb r3, [r6]
	lsl r2, r3, #2
	add r1, r2, r4
	ldrb r1, [r1]
	add r4, r4, #2
	add r2, r2, r4
	ldrb r2, [r2]
	bl sub_08013C8C
	add r0, r5, #0
	bl DeleteThisEntity
_0803477C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08034784:
	.4byte gUnknown_0201F000
_08034788:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_0803472C

