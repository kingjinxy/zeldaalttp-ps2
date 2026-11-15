	THUMB_FUNC_START sub_08106078
sub_08106078: @ 0x08106078
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r3, _081060B4  @ =gRam
	ldr r2, _081060B8  @ =0x00000FD2
	add r0, r3, r2
	add r0, r1, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _081060A0
	ldr r5, _081060BC  @ =0x00000F52
	add r0, r3, r5
	add r0, r1, r0
	strb r2, [r0]
	ldr r2, _081060C0  @ =0x00000FC2
	add r0, r3, r2
	add r0, r1, r0
	mov r1, #48
	strb r1, [r0]
_081060A0:
	add r0, r4, #0
	bl sub_08105BD0
	add r0, r4, #0
	bl sub_08105BD0
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081060B4:
	.4byte gRam
_081060B8:
	.4byte 0x00000FD2
_081060BC:
	.4byte 0x00000F52
_081060C0:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08106078

