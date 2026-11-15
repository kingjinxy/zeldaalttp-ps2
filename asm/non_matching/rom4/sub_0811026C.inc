	THUMB_FUNC_START sub_0811026C
sub_0811026C: @ 0x0811026C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r4, #0
	ldr r7, _0811029C  @ =gRam
	ldr r1, _081102A0  @ =0x00000FC2
	add r0, r7, r1
	add r5, r4, r0
	ldrb r1, [r5]
	add r6, r1, #0
	cmp r6, #0
	bne _081102A8
	bl GetRandomInt
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #8
	strb r1, [r5]
	ldr r1, _081102A4  @ =0x00000F52
	add r0, r7, r1
	add r0, r4, r0
	strb r6, [r0]
	b _081102C8
	.byte 0x00
	.byte 0x00
_0811029C:
	.4byte gRam
_081102A0:
	.4byte 0x00000FC2
_081102A4:
	.4byte 0x00000F52
_081102A8:
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _081102C8
	ldr r0, _081102D0  @ =0x00000FB2
	add r2, r7, r0
	add r2, r3, r2
	ldr r1, _081102D4  @ =0x00001082
	add r0, r7, r1
	add r0, r3, r0
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	strb r0, [r2]
_081102C8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081102D0:
	.4byte 0x00000FB2
_081102D4:
	.4byte 0x00001082
	THUMB_FUNC_END sub_0811026C

