	THUMB_FUNC_START sub_08066BF0
sub_08066BF0: @ 0x08066BF0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066C10
	ldr r0, _08066C0C  @ =gUnknown_08431A2E
	add r1, r4, #0
	bl sub_0801386C
	b _08066C18
_08066C0C:
	.4byte gUnknown_08431A2E
_08066C10:
	ldr r0, _08066C20  @ =gUnknown_08431A33
	add r1, r4, #0
	bl sub_0801386C
_08066C18:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066C20:
	.4byte gUnknown_08431A33
	THUMB_FUNC_END sub_08066BF0

