	THUMB_FUNC_START sub_08066A78
sub_08066A78: @ 0x08066A78
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _08066AA0
	cmp r0, #1
	bcc _08066A96
	cmp r0, #2
	beq _08066AB0
	b _08066AB8
_08066A96:
	ldr r0, _08066A9C  @ =gUnknown_0842FC9E
	b _08066AA2
	.byte 0x00
	.byte 0x00
_08066A9C:
	.4byte gUnknown_0842FC9E
_08066AA0:
	ldr r0, _08066AAC  @ =gUnknown_0842FCA1
_08066AA2:
	add r1, r4, #0
	bl sub_0801386C
	b _08066AB8
	.byte 0x00
	.byte 0x00
_08066AAC:
	.4byte gUnknown_0842FCA1
_08066AB0:
	ldr r0, _08066AC0  @ =gUnknown_0842FCA4
	add r1, r4, #0
	bl sub_0801386C
_08066AB8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066AC0:
	.4byte gUnknown_0842FCA4
	THUMB_FUNC_END sub_08066A78

