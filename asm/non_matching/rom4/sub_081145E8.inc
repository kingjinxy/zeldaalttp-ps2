	THUMB_FUNC_START sub_081145E8
sub_081145E8: @ 0x081145E8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081145FC  @ =0x000001B3
	mov r2, #0
	bl sub_080C9164
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081145FC:
	.4byte 0x000001B3
	THUMB_FUNC_END sub_081145E8

