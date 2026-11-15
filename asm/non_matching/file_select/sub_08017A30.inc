	THUMB_FUNC_START sub_08017A30
sub_08017A30: @ 0x08017A30
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	mov r1, #127
	and r1, r1, r0
	cmp r1, #3
	bgt _08017A4A
	cmp r1, #1
	bge _08017A5C
	cmp r1, #0
	beq _08017ACA
	b _08017AAE
_08017A4A:
	cmp r1, #22
	beq _08017A54
	cmp r1, #54
	beq _08017AA6
	b _08017AAE
_08017A54:
	add r0, r4, #0
	bl sub_08017D50
	b _08017AD2
_08017A5C:
	add r0, r4, #0
	add r0, r0, #42
	ldrb r0, [r0]
	sub r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _08017AD2
	add r0, r4, #0
	add r0, r0, #62
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	ldr r1, _08017A98  @ =gUnknown_081396BC
	lsr r0, r0, #2
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	bl 0x080038E8
	ldrb r0, [r4, #20]
	cmp r0, #4
	bhi _08017A9C
	add r0, r4, #0
	mov r1, #0
	bl sub_08017D78
	b _08017AD2
	.byte 0x00
	.byte 0x00
_08017A98:
	.4byte gUnknown_081396BC
_08017A9C:
	add r0, r4, #0
	mov r1, #2
	bl sub_08017D78
	b _08017AD2
_08017AA6:
	add r0, r4, #0
	bl sub_08017DB8
	b _08017AD2
_08017AAE:
	ldrb r0, [r4, #20]
	cmp r0, #1
	bne _08017ACA
	mov r0, #176
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r1, r4, #0
	add r1, r1, #116
	mov r0, #240
	lsl r0, r0, #1
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08017F88
_08017ACA:
	ldr r1, _08017AD8  @ =gUnknown_0813968C
	add r0, r4, #0
	bl 0x080098A0
_08017AD2:
	pop {r4}
	pop {r0}
	bx r0
_08017AD8:
	.4byte gUnknown_0813968C
	THUMB_FUNC_END sub_08017A30

