	THUMB_FUNC_START sub_08112408
sub_08112408: @ 0x08112408
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08112454  @ =gRam
	ldr r2, _08112458  @ =0x00000F62
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	strb r4, [r1]
	add r2, r2, #96
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #48
	strb r2, [r1]
	ldr r2, _0811245C  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #3
	strb r2, [r1]
	ldr r2, _08112460  @ =gUnknown_02010990
	mov r1, #39
	strb r1, [r2]
	ldr r2, _08112464  @ =0x00000F92
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _08112468  @ =0x00000EA5
	add r3, r3, r1
	add r0, r0, r3
	ldrb r2, [r0]
	mov r1, #240
	and r1, r1, r2
	add r1, r1, #6
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08112454:
	.4byte gRam
_08112458:
	.4byte 0x00000F62
_0811245C:
	.4byte 0x00000F52
_08112460:
	.4byte gUnknown_02010990
_08112464:
	.4byte 0x00000F92
_08112468:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_08112408

