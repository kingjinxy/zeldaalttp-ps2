	THUMB_FUNC_START sub_081112C8
sub_081112C8: @ 0x081112C8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08111300  @ =gRam
	ldr r2, _08111304  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	strb r4, [r1]
	add r2, r2, #96
	add r1, r3, r2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
	mov r1, #184
	lsl r1, r1, #5
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _08111308  @ =0x00001783
	add r3, r3, r2
	mov r0, #1
	strb r0, [r3]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08111300:
	.4byte gRam
_08111304:
	.4byte 0x00000F52
_08111308:
	.4byte 0x00001783
	THUMB_FUNC_END sub_081112C8

