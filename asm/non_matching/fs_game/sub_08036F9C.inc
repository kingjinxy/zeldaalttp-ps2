	THUMB_FUNC_START sub_08036F9C
sub_08036F9C: @ 0x08036F9C
	push {r4,r7,lr}
	mov r7, sp
	ldr r0, _08036FC0  @ =gUnknown_08427BA0
	ldr r1, _08036FC4  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r4, [r0]
	bl _call_via_r4
	mov r0, #80
	bl sub_08037D64
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036FC0:
	.4byte gUnknown_08427BA0
_08036FC4:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036F9C

