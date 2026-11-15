	.syntax unified
	THUMB_FUNC_START sub_080098DC
sub_080098DC: @ 0X080098DC
	push {r4, lr}
	adds r4, r0, #0
	bl 0x8002e18
	cmp r0, #0
	bne.n _080098EC
	bl sub_080098F0
_080098EC:
	pop {r4, pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
