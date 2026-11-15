	THUMB_FUNC_START sub_08108A48
sub_08108A48: @ 0x08108A48
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08108A78  @ =gRam
	ldr r3, _08108A7C  @ =0x00000F52
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #128
	strb r3, [r1]
	ldr r4, _08108A80  @ =0x00000FC2
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r1, _08108A84  @ =0x00000FA2
	add r2, r2, r1
	add r2, r0, r2
	mov r1, #9
	strb r1, [r2]
	bl sub_080ED8C8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08108A78:
	.4byte gRam
_08108A7C:
	.4byte 0x00000F52
_08108A80:
	.4byte 0x00000FC2
_08108A84:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_08108A48

