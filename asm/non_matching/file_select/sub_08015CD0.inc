	THUMB_FUNC_START sub_08015CD0
sub_08015CD0: @ 0x08015CD0
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4]
	cmp r0, #0
	blt _08015CE0
	lsl r0, r0, #16
	lsr r0, r0, #16
	b _08015CF8
_08015CE0:
	bl 0x0800099C
	ldr r1, _08015D00  @ =gUnknown_081382A0
	ldrb r2, [r4]
	lsl r2, r2, #2
	add r2, r2, r1
	mov r1, #7
	and r1, r1, r0
	ldr r0, [r2]
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r1]
_08015CF8:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08015D00:
	.4byte gUnknown_081382A0
	THUMB_FUNC_END sub_08015CD0

