	THUMB_FUNC_START sub_0801775C
sub_0801775C: @ 0x0801775C
	push {r4,r5,lr}
	add r5, r0, #0
	bl 0x08003828
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080177B0
	ldr r4, _08017790  @ =gUnknown_081395DC
	bl 0x0800099C
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r4
	ldrb r0, [r1]
	cmp r0, #0
	beq _08017794
	cmp r0, #1
	beq _080177A2
	mov r0, #6
	strb r0, [r5, #20]
	add r0, r5, #0
	mov r1, #4
	b _080177AC
_08017790:
	.4byte gUnknown_081395DC
_08017794:
	bl 0x0800099C
	mov r1, #48
	and r0, r0, r1
	add r0, r0, #32
	strb r0, [r5, #23]
	b _080177B0
_080177A2:
	ldrb r0, [r5, #20]
	add r0, r0, #1
	strb r0, [r5, #20]
	add r0, r5, #0
	mov r1, #1
_080177AC:
	bl 0x08003870
_080177B0:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801775C

	.byte 0x00
	.byte 0x00
