	THUMB_FUNC_START sub_0812AED0
sub_0812AED0: @ 0x0812AED0
	push {lr}
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #119
	bls _0812AEDC
	mov r1, #119
_0812AEDC:
	ldr r0, _0812AEE8  @ =gUnknown_08198FC8
	add r0, r1, r0
	ldrb r0, [r0]
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0812AEE8:
	.4byte gUnknown_08198FC8
	THUMB_FUNC_END sub_0812AED0

