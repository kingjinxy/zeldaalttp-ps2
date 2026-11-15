	THUMB_FUNC_START sub_0805457C
sub_0805457C: @ 0x0805457C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _080545C0  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r2, #20
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #20
	beq _080545C4
	ldr r0, _080545C0  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	mov r2, #64
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _080545C4
	b _080545CA
	.byte 0x00
	.byte 0x00
_080545C0:
	.4byte gUnknown_0201F000
_080545C4:
	ldr r0, [r7]
	bl DeleteThisEntity
_080545CA:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805457C

	.byte 0x00
	.byte 0x00
