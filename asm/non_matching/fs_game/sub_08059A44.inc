	THUMB_FUNC_START sub_08059A44
sub_08059A44: @ 0x08059A44
	push {r7,lr}
	mov r7, sp
	bl sub_0800CA3C
	ldr r0, _08059A78  @ =gUnknown_0202E1E4
	mov r1, #1
	str r1, [r0]
	ldr r0, _08059A7C  @ =gUnknown_03000520
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, _08059A7C  @ =gUnknown_03000520
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	pop {r7}
	pop {r0}
	bx r0
_08059A78:
	.4byte gUnknown_0202E1E4
_08059A7C:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_08059A44

