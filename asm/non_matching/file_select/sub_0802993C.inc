	THUMB_FUNC_START sub_0802993C
sub_0802993C: @ 0x0802993C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #10]
	bl sub_08013D20
	str r0, [r4, #96]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802993C

