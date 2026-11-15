	THUMB_FUNC_START sub_08116428
sub_08116428: @ 0x08116428
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811645C  @ =gRam
	ldr r2, _08116460  @ =0x00000E15
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #13
	strb r2, [r1]
	ldr r4, _08116464  @ =0x00000E47
	add r1, r3, r4
	add r1, r0, r1
	mov r4, #161
	lsl r4, r4, #4
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _08116468  @ =0x00000E33
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #6
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811645C:
	.4byte gRam
_08116460:
	.4byte 0x00000E15
_08116464:
	.4byte 0x00000E47
_08116468:
	.4byte 0x00000E33
	THUMB_FUNC_END sub_08116428

