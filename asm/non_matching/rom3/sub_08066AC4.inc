	THUMB_FUNC_START sub_08066AC4
sub_08066AC4: @ 0x08066AC4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066AE4
	ldr r0, _08066AE0  @ =gUnknown_08430150
	add r1, r4, #0
	bl sub_0801386C
	b _08066AEC
_08066AE0:
	.4byte gUnknown_08430150
_08066AE4:
	ldr r0, _08066AF4  @ =gUnknown_0814C43C
	add r1, r4, #0
	bl sub_0801386C
_08066AEC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066AF4:
	.4byte gUnknown_0814C43C
	THUMB_FUNC_END sub_08066AC4

