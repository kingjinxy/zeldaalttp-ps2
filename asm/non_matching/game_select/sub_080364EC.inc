	THUMB_FUNC_START sub_080364EC
sub_080364EC: @ 0x080364EC
	push {r4,lr}
	ldr r4, _08036504  @ =gUnknown_0813E040
	bl sub_0800099C
	mov r1, #15
	and r1, r1, r0
	add r1, r1, r4
	ldrb r0, [r1]
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08036504:
	.4byte gUnknown_0813E040
	THUMB_FUNC_END sub_080364EC

