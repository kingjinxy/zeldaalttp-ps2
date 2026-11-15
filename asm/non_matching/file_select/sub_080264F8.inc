	THUMB_FUNC_START sub_080264F8
sub_080264F8: @ 0x080264F8
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r5, _08026518  @ =gUnknown_0813C6F4
	bl 0x08002E18
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r5
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08026518:
	.4byte gUnknown_0813C6F4
	THUMB_FUNC_END sub_080264F8

