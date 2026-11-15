	.syntax unified
	THUMB_FUNC_START sub_08133EA4
sub_08133EA4: @ 0X08133EA4
	push {lr}
_08133EA6:
	ldr r2, [r1, #64]
	ldrb r0, [r2, #3]
	lsls r0, r0, #8
	ldrb r3, [r2, #2]
	orrs r0, r3
	lsls r0, r0, #8
	ldrb r3, [r2, #1]
	orrs r0, r3
	lsls r0, r0, #8
	bl sub_08133E7C
	orrs r0, r3
	str r0, [r1, #64]
	pop {r0}
	bx r0
	.syntax divided
	.thumb
