	THUMB_FUNC_START sub_081017A4
sub_081017A4: @ 0x081017A4
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _081017F0  @ =gRam
	ldr r1, _081017F4  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	add r0, r4, #0
	bl sub_08100840
	ldr r1, _081017F8  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _081017FC  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	ldr r1, _08101800  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r0, _08101804  @ =0x00000ED2
	add r5, r5, r0
	add r4, r4, r5
	ldrb r0, [r4]
	sub r0, r0, #8
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081017F0:
	.4byte gRam
_081017F4:
	.4byte 0x00001122
_081017F8:
	.4byte 0x00000F82
_081017FC:
	.4byte 0x00000FE2
_08101800:
	.4byte 0x00000F92
_08101804:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_081017A4

