	.syntax unified
	THUMB_FUNC_START sub_0800996C
sub_0800996C: @ 0X0800996C
	ldr r2, [pc, #900]
	lsls r1, r1, #2
	ldr r1, [r2, r1]
	bx r1
	.syntax unified
	.thumb
