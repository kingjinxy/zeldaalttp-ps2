	THUMB_FUNC_START sub_08135184
sub_08135184: @ 0x08135184
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r0, #0
	cmp r0, #2
	beq _081351AC
	cmp r0, #2
	bgt _08135198
	cmp r0, #1
	beq _0813519E
	b _081351C0
_08135198:
	cmp r1, #3
	beq _081351B4
	b _081351C0
_0813519E:
	ldr r1, _081351A8  @ =0x04000063
	mov r0, #8
	strb r0, [r1]
	add r1, r1, #2
	b _081351C8
_081351A8:
	.4byte 0x04000063
_081351AC:
	ldr r1, _081351B0  @ =0x04000069
	b _081351C2
_081351B0:
	.4byte 0x04000069
_081351B4:
	ldr r1, _081351BC  @ =0x04000070
	mov r0, #0
	b _081351CA
	.byte 0x00
	.byte 0x00
_081351BC:
	.4byte 0x04000070
_081351C0:
	ldr r1, _081351D0  @ =0x04000079
_081351C2:
	mov r0, #8
	strb r0, [r1]
	add r1, r1, #4
_081351C8:
	mov r0, #128
_081351CA:
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_081351D0:
	.4byte 0x04000079
	THUMB_FUNC_END sub_08135184

