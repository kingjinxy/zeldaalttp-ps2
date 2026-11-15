	THUMB_FUNC_START sub_08107294
sub_08107294: @ 0x08107294
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _081072D4  @ =gRam
	ldr r2, _081072D8  @ =0x00001062
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #1
	strb r2, [r1]
	ldr r5, _081072DC  @ =0x00001172
	add r1, r3, r5
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _081072E0  @ =0x00000F12
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #24
	strb r2, [r1]
	ldr r5, _081072E4  @ =0x00001012
	add r1, r3, r5
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _081072E8  @ =0x00001032
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #64
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081072D4:
	.4byte gRam
_081072D8:
	.4byte 0x00001062
_081072DC:
	.4byte 0x00001172
_081072E0:
	.4byte 0x00000F12
_081072E4:
	.4byte 0x00001012
_081072E8:
	.4byte 0x00001032
	THUMB_FUNC_END sub_08107294

