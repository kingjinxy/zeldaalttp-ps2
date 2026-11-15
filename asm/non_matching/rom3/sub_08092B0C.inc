	THUMB_FUNC_START sub_08092B0C
sub_08092B0C: @ 0x08092B0C
	ldr r1, _08092B50  @ =gRam
	ldr r2, _08092B54  @ =0x000017BC
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	ldr r3, _08092B58  @ =0x000017BE
	add r0, r1, r3
	strh r2, [r0]
	sub r3, r3, #12
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #4
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #16
	add r0, r1, r3
	strh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	sub r3, r3, #10
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _08092B5C  @ =0x000017C4
	add r1, r1, r0
	strh r2, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08092B50:
	.4byte gRam
_08092B54:
	.4byte 0x000017BC
_08092B58:
	.4byte 0x000017BE
_08092B5C:
	.4byte 0x000017C4
	THUMB_FUNC_END sub_08092B0C

