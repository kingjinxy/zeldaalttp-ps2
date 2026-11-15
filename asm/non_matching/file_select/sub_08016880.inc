	THUMB_FUNC_START sub_08016880
sub_08016880: @ 0x08016880
	push {r4,r5,lr}
	add r4, r0, #0
	mov r5, #1
	mov r0, #1
	strb r0, [r4, #20]
	bl 0x0800099C
	mov r1, #63
	and r0, r0, r1
	add r0, r0, #180
	strb r0, [r4, #24]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r5
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080168C4  @ =gUnknown_081391DC
	str r0, [r4, #72]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	add r0, r4, #0
	bl sub_080169F8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080168C4:
	.4byte gUnknown_081391DC
	THUMB_FUNC_END sub_08016880

