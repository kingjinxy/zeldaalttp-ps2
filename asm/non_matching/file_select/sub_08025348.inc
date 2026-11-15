	THUMB_FUNC_START sub_08025348
sub_08025348: @ 0x08025348
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08025388  @ =gUnknown_0813C398
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802536E
	ldr r1, [r4, #100]
	ldr r0, [r1, #4]
	cmp r0, #0
	bne _080253AC
_0802536E:
	ldr r2, [r4, #100]
	ldr r0, [r2, #4]
	cmp r0, #0
	beq _0802539E
	ldrb r0, [r2, #8]
	cmp r0, #1
	bne _0802538C
	mov r1, #0
	strb r0, [r2, #23]
	ldr r0, [r4, #100]
	str r1, [r0, #16]
	b _0802539E
	.byte 0x00
	.byte 0x00
_08025388:
	.4byte gUnknown_0813C398
_0802538C:
	ldrh r1, [r2, #8]
	mov r0, #129
	lsl r0, r0, #3
	cmp r1, r0
	bne _0802539E
	ldrb r1, [r2, #26]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2, #26]
_0802539E:
	ldr r1, [r4, #100]
	mov r0, #0
	str r0, [r1, #88]
	add r0, r4, #0
	bl DeleteThisEntity
	b _080253B2
_080253AC:
	add r0, r4, #0
	bl sub_0803D3D0
_080253B2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025348

