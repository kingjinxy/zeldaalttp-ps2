	THUMB_FUNC_START sub_08015D50
sub_08015D50: @ 0x08015D50
	push {r4,lr}
	add r1, r0, #0
	ldr r2, _08015D80  @ =gUnknown_02002440
	ldrh r0, [r1]
	ldr r3, _08015D84  @ =0x0000FFFF
	cmp r0, r3
	beq _08015D78
	ldr r4, _08015D88  @ =gUnknown_08138BB4
_08015D60:
	ldrh r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	str r0, [r2]
	ldrh r0, [r0, #4]
	strh r0, [r2, #6]
	add r2, r2, #8
	add r1, r1, #2
	ldrh r0, [r1]
	cmp r0, r3
	bne _08015D60
_08015D78:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08015D80:
	.4byte gUnknown_02002440
_08015D84:
	.4byte 0x0000FFFF
_08015D88:
	.4byte gUnknown_08138BB4
	THUMB_FUNC_END sub_08015D50

