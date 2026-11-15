	THUMB_FUNC_START sub_08010E04
sub_08010E04: @ 0x08010E04
	push {r4-r6,lr}
	add r5, r0, #0
	lsl r1, r5, #4
	ldr r0, _08010E20  @ =gUnknown_0202A6F0
	add r4, r1, r0
	ldr r1, _08010E24  @ =gUnknown_0200B250
	lsl r0, r5, #6
	add r0, r0, r1
	ldr r3, [r0]
	add r6, r1, #0
	cmp r5, #2
	bls _08010E28
	mov r0, #0
	b _08010E8A
_08010E20:
	.4byte gUnknown_0202A6F0
_08010E24:
	.4byte gUnknown_0200B250
_08010E28:
	ldrb r0, [r4, #7]
	cmp r0, #0
	beq _08010E32
	mov r0, #1
	orr r3, r3, r0
_08010E32:
	ldrb r0, [r4, #8]
	cmp r0, #0
	beq _08010E3C
	mov r0, #2
	orr r3, r3, r0
_08010E3C:
	mov r0, #3
	and r0, r0, r3
	lsl r2, r0, #4
	ldrb r0, [r4, #9]
	cmp r0, #0
	beq _08010E56
	mov r0, #4
	and r0, r0, r3
	cmp r0, #0
	beq _08010E56
	mov r0, #64
	orr r2, r2, r0
	b _08010E5C
_08010E56:
	mov r0, #65
	neg r0, r0
	and r3, r3, r0
_08010E5C:
	ldrh r1, [r4]
	ldr r0, _08010E78  @ =0x0000FFFF
	cmp r1, r0
	beq _08010E7C
	mov r0, #8
	and r0, r0, r3
	cmp r0, #0
	beq _08010E7C
	mov r0, #128
	orr r2, r2, r0
	lsl r0, r2, #16
	lsr r2, r0, #16
	b _08010E82
	.byte 0x00
	.byte 0x00
_08010E78:
	.4byte 0x0000FFFF
_08010E7C:
	mov r0, #129
	neg r0, r0
	and r3, r3, r0
_08010E82:
	lsl r0, r5, #6
	add r0, r0, r6
	str r3, [r0]
	add r0, r2, #0
_08010E8A:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08010E04

