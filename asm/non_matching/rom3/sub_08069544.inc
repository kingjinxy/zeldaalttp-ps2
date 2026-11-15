	THUMB_FUNC_START sub_08069544
sub_08069544: @ 0x08069544
	push {lr}
	sub sp, sp, #4
	mov r1, sp
	mov r0, #236
	strh r0, [r1]
	mov r1, #192
	lsl r1, r1, #19
	ldr r2, _08069584  @ =0x0100C000
	mov r0, sp
	bl CpuSet
	bl sub_08068CFC
	ldr r1, _08069588  @ =gRam
	mov r0, #162
	lsl r0, r0, #3
	add r2, r1, r0
	ldr r0, _0806958C  @ =0x00002081
	strh r0, [r2]
	ldr r0, _08069590  @ =0x000009A4
	add r2, r1, r0
	mov r0, #7
	strb r0, [r2]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #5]
	ldr r2, _08069594  @ =0x0000098E
	add r1, r1, r2
	strb r0, [r1]
	add sp, sp, #4
	pop {r0}
	bx r0
_08069584:
	.4byte 0x0100C000
_08069588:
	.4byte gRam
_0806958C:
	.4byte 0x00002081
_08069590:
	.4byte 0x000009A4
_08069594:
	.4byte 0x0000098E
	THUMB_FUNC_END sub_08069544

