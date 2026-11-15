	THUMB_FUNC_START sub_08018FF4
sub_08018FF4: @ 0x08018FF4
	ldrb r1, [r0, #20]
	sub r1, r1, #1
	strb r1, [r0, #20]
	bx lr
	THUMB_FUNC_END sub_08018FF4

