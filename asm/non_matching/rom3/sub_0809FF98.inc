	THUMB_FUNC_START sub_0809FF98
sub_0809FF98: @ 0x0809FF98
	ldr r2, _0809FFD0  @ =gRam
	ldr r0, _0809FFD4  @ =0x00000A11
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0809FFD8  @ =0x0000097C
	add r3, r2, r1
	sub r1, r1, #8
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #4
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r3]
	ldr r3, _0809FFDC  @ =0x0000096C
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r3, _0809FFE0  @ =0x00001721
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #0
	ldr r1, _0809FFE4  @ =0x00001722
	add r2, r2, r1
	strb r0, [r2]
	bx lr
_0809FFD0:
	.4byte gRam
_0809FFD4:
	.4byte 0x00000A11
_0809FFD8:
	.4byte 0x0000097C
_0809FFDC:
	.4byte 0x0000096C
_0809FFE0:
	.4byte 0x00001721
_0809FFE4:
	.4byte 0x00001722
	THUMB_FUNC_END sub_0809FF98

