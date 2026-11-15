	THUMB_FUNC_START sub_08113AA8
sub_08113AA8: @ 0x08113AA8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08113AE8  @ =gRam
	ldr r2, _08113AEC  @ =0x00000F62
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #0
	strb r2, [r1]
	ldr r4, _08113AF0  @ =0x00000F92
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _08113AF4  @ =gUnknown_02010990
	mov r1, #2
	strb r1, [r2]
	ldr r2, _08113AF8  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #6
	strb r2, [r1]
	sub r4, r4, #237
	add r3, r3, r4
	add r0, r0, r3
	ldrb r2, [r0]
	mov r1, #240
	and r1, r1, r2
	add r1, r1, #7
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_08113AE8:
	.4byte gRam
_08113AEC:
	.4byte 0x00000F62
_08113AF0:
	.4byte 0x00000F92
_08113AF4:
	.4byte gUnknown_02010990
_08113AF8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08113AA8

