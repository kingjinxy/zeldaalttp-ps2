	THUMB_FUNC_START sub_0803361C
sub_0803361C: @ 0x0803361C
	push {r4,lr}
	ldr r4, _08033644  @ =gUnknown_02016D60
	ldr r0, [r4, #28]
	cmp r0, #6
	bhi _0803363E
	lsl r0, r0, #6
	ldr r1, _08033648  @ =gUnknown_0202DF10
	add r0, r0, r1
	ldr r1, [r4, #16]
	ldr r1, [r1]
	sub r1, r1, #30
	mov r2, #16
	bl CpuFastSet
	ldr r0, [r4, #28]
	add r0, r0, #1
	str r0, [r4, #28]
_0803363E:
	pop {r4}
	pop {r0}
	bx r0
_08033644:
	.4byte gUnknown_02016D60
_08033648:
	.4byte gUnknown_0202DF10
	THUMB_FUNC_END sub_0803361C

