	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08133E7E
sub_08133E7E: @ 0X08133E7E
	push {r0}
	lsrs r0, r2, #25
	bne.n _08133E90
	ldr r0, [pc, #12]
	cmp r2, r0
	bcc.n _08133E8E
	lsrs r0, r2, #14
	beq.n _08133E90
_08133E8E:
	movs r3, #0
_08133E90:
	pop {r0}
	bx lr
	.4byte 0x083c2654
	.syntax divided
	.thumb
