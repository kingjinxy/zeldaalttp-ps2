	THUMB_FUNC_START sub_0801CD04
sub_0801CD04: @ 0x0801CD04
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #0
	strb r0, [r1]
	ldr r0, _0801CD3C  @ =gUnknown_08139594
	str r0, [r4, #72]
	mov r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_0801CDA0
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801CD3C:
	.4byte gUnknown_08139594
	THUMB_FUNC_END sub_0801CD04

