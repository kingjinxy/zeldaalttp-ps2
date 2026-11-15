	THUMB_FUNC_START sub_0801D3D8
sub_0801D3D8: @ 0x0801D3D8
	push {lr}
	mov r1, #5
	strb r1, [r0, #20]
	add r2, r0, #0
	add r2, r2, #42
	mov r1, #3
	strb r1, [r2]
	bl 0x08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D3D8

	.byte 0x00
	.byte 0x00
