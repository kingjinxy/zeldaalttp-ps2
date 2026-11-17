	THUMB_FUNC_START sub_08135C3C
sub_08135C3C: @ 0x08135C3C
	push {lr}
	add r2, r1, #0
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #3
	bhi _08135C70
	ldr r0, _08135C60  @ =gUnknown_03000010
	strb r1, [r0]
	ldr r1, _08135C64  @ =gUnknown_03000018
	ldrb r0, [r0]
	lsl r0, r0, #2
	ldr r3, _08135C68  @ =0x04000100
	add r0, r0, r3
	str r0, [r1]
	ldr r0, _08135C6C  @ =0x08135C15
	str r0, [r2]
	mov r0, #0
	b _08135C72
_08135C60:
	.4byte gUnknown_03000010
_08135C64:
	.4byte gUnknown_03000018
_08135C68:
	.4byte 0x04000100
_08135C6C:
	.4byte sub_08135C14
_08135C70:
	mov r0, #1
_08135C72:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08135C3C

	.byte 0x00
	.byte 0x00
