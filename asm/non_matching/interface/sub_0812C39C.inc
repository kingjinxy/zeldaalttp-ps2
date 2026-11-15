	THUMB_FUNC_START sub_0812C39C
sub_0812C39C: @ 0x0812C39C
	mov r12, r0
	mov r2, r12
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #2
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2]
	mov r3, #0
	mov r2, #0
	mov r0, #150
	mov r1, r12
	strh r0, [r1, #48]
	strh r2, [r1, #50]
	mov r0, r12
	add r0, r0, #64
	mov r1, #128
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	mov r1, r12
	strh r0, [r1, #52]
	strh r2, [r1, #54]
	strh r2, [r1, #58]
	strh r2, [r1, #56]
	mov r0, r12
	add r0, r0, #68
	strb r3, [r0]
	bx lr
	THUMB_FUNC_END sub_0812C39C

	.byte 0x00
	.byte 0x00
