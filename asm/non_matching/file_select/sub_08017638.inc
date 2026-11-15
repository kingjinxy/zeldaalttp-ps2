	THUMB_FUNC_START sub_08017638
sub_08017638: @ 0x08017638
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08017666
	bl 0x0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	b _0801766C
_08017666:
	add r0, r4, #0
	bl 0x08009694
_0801766C:
	ldr r0, _08017684  @ =gUnknown_08139568
	add r1, r4, #0
	add r1, r1, #41
	ldrb r1, [r1]
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	strh r0, [r4, #58]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08017684:
	.4byte gUnknown_08139568
	THUMB_FUNC_END sub_08017638

