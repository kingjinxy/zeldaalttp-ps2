	THUMB_FUNC_START sub_08011BE0
sub_08011BE0: @ 0x08011BE0
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _08011C0C  @ =gUnknown_02016D60
	ldrb r0, [r1, #31]
	cmp r0, #3
	bne _08011C10
	add r1, r1, #32
	ldrb r0, [r4, #11]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08011C10
	mov r1, #33
	neg r1, r1
	mov r2, #11
	neg r2, r2
	add r0, r4, #0
	bl sub_08011EE8
	add r1, r4, #0
	add r1, r1, #100
	mov r0, #0
	b _08011C16
_08011C0C:
	.4byte gUnknown_02016D60
_08011C10:
	add r1, r4, #0
	add r1, r1, #100
	mov r0, #1
_08011C16:
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #101
	ldrb r0, [r1]
	ldrb r2, [r2]
	add r0, r0, r2
	add r1, r4, #0
	add r1, r1, #33
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011BE0

	.byte 0x00
	.byte 0x00
