	THUMB_FUNC_START sub_08013C50
sub_08013C50: @ 0x08013C50
	push {r4,lr}
	add r3, r0, #0
_08013C54:
	sub r1, r1, #4
	ldrh r0, [r1]
	cmp r0, #0
	bne _08013C80
	cmp r1, r3
	bhi _08013C54
	b _08013C80
_08013C62:
	ldrh r2, [r3]
	add r4, r3, #4
	cmp r2, #0
	bne _08013C7E
	ldr r0, [r1]
	str r0, [r3]
	str r2, [r1]
	b _08013C74
_08013C72:
	sub r1, r1, #4
_08013C74:
	ldrh r0, [r1]
	cmp r0, #0
	bne _08013C7E
	cmp r1, r3
	bhi _08013C72
_08013C7E:
	add r3, r4, #0
_08013C80:
	cmp r3, r1
	bcc _08013C62
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08013C50

	.byte 0x00
	.byte 0x00
