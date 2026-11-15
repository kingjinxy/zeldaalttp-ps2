	THUMB_FUNC_START sub_08034824
sub_08034824: @ 0x08034824
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _0803485C  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r4, #96]
	and r0, r0, r1
	cmp r0, r1
	bne _08034854
	add r0, r4, #0
	bl sub_080347F4
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #11]
	cmp r0, #255
	bne _08034854
	add r0, r4, #0
	bl DeleteThisEntity
_08034854:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803485C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08034824

