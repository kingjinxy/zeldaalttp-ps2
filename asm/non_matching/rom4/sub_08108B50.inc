	THUMB_FUNC_START sub_08108B50
sub_08108B50: @ 0x08108B50
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08108B6C  @ =gRam
	ldr r2, _08108B70  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #3
	strb r2, [r1]
	mov r1, #128
	bl sub_08108B84
	pop {r0}
	bx r0
_08108B6C:
	.4byte gRam
_08108B70:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_08108B50

