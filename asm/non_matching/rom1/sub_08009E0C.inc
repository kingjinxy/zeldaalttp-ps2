	.syntax unified
	THUMB_FUNC_START sub_08009E0C
sub_08009E0C: @ 0X08009E0C
	ldr r0, [pc, #228]
	ldrh r0, [r0, #0]
	lsls r0, r0, #30
	lsrs r0, r0, #28
	ldr r1, [pc, #224]
	ldr r0, [r1, r0]
	ldr r0, [r0, #0]
	mov pc, lr
	.syntax unified
	.thumb
