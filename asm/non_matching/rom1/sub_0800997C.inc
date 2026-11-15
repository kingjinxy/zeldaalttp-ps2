	.syntax unified
	THUMB_FUNC_START sub_0800997C
sub_0800997C: @ 0X0800997C
	ldr r2, [pc, #892]
	ldrh r2, [r2, #0]
	lsls r2, r2, #30
	lsrs r2, r2, #29
	ldr r3, [pc, #888]
	ldrh r3, [r3, r2]
	lsrs r3, r3, #11
	bcc.n _08009990
	movs r0, #0
	mov pc, lr
_08009990:
	lsls r2, r2, #1
	ldr r3, [pc, #880]
	ldr r2, [r3, r2]
	ldr r2, [r2, #0]
	.syntax unified
	.thumb
