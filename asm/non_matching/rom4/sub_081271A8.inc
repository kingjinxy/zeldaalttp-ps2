	THUMB_FUNC_START sub_081271A8
sub_081271A8: @ 0x081271A8
	push {lr}
	ldr r1, _081271C0  @ =gUnknown_08180740
	ldr r0, _081271C4  @ =gUnknown_03000050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081271C0:
	.4byte gUnknown_08180740
_081271C4:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_081271A8

