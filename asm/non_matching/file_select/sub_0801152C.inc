	THUMB_FUNC_START sub_0801152C
sub_0801152C: @ 0x0801152C
	push {r4,lr}
	add r4, r0, #0
	add r2, r4, #0
	add r2, r2, #103
	ldrb r0, [r2]
	cmp r0, #255
	bne _080115A2
	ldrb r0, [r4, #23]
	cmp r0, #3
	beq _08011546
	cmp r0, #4
	beq _08011558
	b _08011556
_08011546:
	mov r0, #192
	lsl r0, r0, #18
	ldrb r1, [r0, #4]
	lsl r0, r1, #1
	add r0, r0, r1
	add r0, r0, #3
	ldrb r1, [r4, #11]
	add r0, r0, r1
_08011556:
	strb r0, [r2]
_08011558:
	add r1, r4, #0
	add r1, r1, #103
	ldrb r0, [r1]
	cmp r0, #255
	beq _08011590
	add r1, r0, #0
	lsl r1, r1, #2
	ldr r0, _08011588  @ =gUnknown_08138064
	add r1, r1, r0
	ldr r3, _0801158C  @ =gUnknown_08138094
	ldrb r2, [r4, #23]
	lsl r0, r2, #1
	add r0, r0, r2
	ldrb r2, [r4, #11]
	add r0, r0, r2
	add r0, r0, r3
	ldrb r2, [r0]
	add r0, r4, #0
	bl sub_0803D7E8
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
	b _080115A2
_08011588:
	.4byte gUnknown_08138064
_0801158C:
	.4byte gUnknown_08138094
_08011590:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldr r1, [r4, #88]
	cmp r1, #0
	beq _080115A2
	ldrb r0, [r1, #21]
	add r0, r0, #1
	strb r0, [r1, #21]
_080115A2:
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _080115B4
	add r1, r4, #0
	add r1, r1, #103
	mov r0, #255
	strb r0, [r1]
_080115B4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801152C

	.byte 0x00
	.byte 0x00
