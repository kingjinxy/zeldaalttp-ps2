	.syntax unified
	THUMB_FUNC_START sub_08008044
sub_08008044: @ 0X08008044
	b.n _0800817A
_08008046:
	str r1, [r0, #24]
	movs r2, #2
	strb r2, [r1, #20]
	movs r2, #5
	strb r2, [r1, #21]
	mov r2, sl
	.syntax unified
	.thumb
