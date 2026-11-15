	THUMB_FUNC_START sub_08036424
sub_08036424: @ 0x08036424
	push {r4,r5,lr}
	add r5, r0, #0
	bl sub_0800099C
	ldr r4, _08036448  @ =gUnknown_08147900
	mov r1, #7
	bl __umodsi3
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	str r0, [r5, #116]
	add r0, r5, #0
	bl sub_0803644C
	pop {r4,r5}
	pop {r0}
	bx r0
_08036448:
	.4byte gUnknown_08147900
	THUMB_FUNC_END sub_08036424

