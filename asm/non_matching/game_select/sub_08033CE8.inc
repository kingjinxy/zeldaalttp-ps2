	THUMB_FUNC_START sub_08033CE8
sub_08033CE8: @ 0x08033CE8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08034238
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r4, #28]
	mov r0, #0
	strh r0, [r4, #58]
	add r4, r4, #94
	ldrb r0, [r4]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4]
	ldr r0, _08033D1C  @ =0x00000213
	bl play_sound
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033D1C:
	.4byte 0x00000213
	THUMB_FUNC_END sub_08033CE8

