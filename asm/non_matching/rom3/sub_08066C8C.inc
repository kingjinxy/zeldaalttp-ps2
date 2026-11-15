	THUMB_FUNC_START sub_08066C8C
sub_08066C8C: @ 0x08066C8C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066CAC
	ldr r0, _08066CA8  @ =gUnknown_0814C44C
	add r1, r4, #0
	bl sub_0801386C
	b _08066CB4
_08066CA8:
	.4byte gUnknown_0814C44C
_08066CAC:
	ldr r0, _08066CBC  @ =gUnknown_0814C451
	add r1, r4, #0
	bl sub_0801386C
_08066CB4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066CBC:
	.4byte gUnknown_0814C451
	THUMB_FUNC_END sub_08066C8C

