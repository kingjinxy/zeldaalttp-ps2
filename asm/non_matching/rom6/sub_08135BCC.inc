	THUMB_FUNC_START sub_08135BCC
sub_08135BCC: @ 0x08135BCC
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #0
	cmp r0, #4
	bne _08135BE8
	ldr r1, _08135BE0  @ =gUnknown_03000020
	ldr r0, _08135BE4  @ =gUnknown_084272A4
	str r0, [r1]
	b _08135C04
_08135BE0:
	.4byte gUnknown_03000020
_08135BE4:
	.4byte gUnknown_084272A4
_08135BE8:
	cmp r0, #64
	bne _08135BFC
	ldr r1, _08135BF4  @ =gUnknown_03000020
	ldr r0, _08135BF8  @ =gUnknown_084272B0
	str r0, [r1]
	b _08135C04
_08135BF4:
	.4byte gUnknown_03000020
_08135BF8:
	.4byte gUnknown_084272B0
_08135BFC:
	ldr r1, _08135C0C  @ =gUnknown_03000020
	ldr r0, _08135C10  @ =gUnknown_084272A4
	str r0, [r1]
	mov r2, #1
_08135C04:
	add r0, r2, #0
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08135C0C:
	.4byte gUnknown_03000020
_08135C10:
	.4byte gUnknown_084272A4
	THUMB_FUNC_END sub_08135BCC

