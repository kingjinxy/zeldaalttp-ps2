	THUMB_FUNC_START sub_0801AA60
sub_0801AA60: @ 0x0801AA60
	push {r4,lr}
	add r4, r0, #0
	mov r0, #1
	strb r0, [r4, #20]
	bl sub_0800099C
	ldr r2, _0801AA88  @ =gUnknown_08139E90
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801AA88:
	.4byte gUnknown_08139E90
	THUMB_FUNC_END sub_0801AA60

