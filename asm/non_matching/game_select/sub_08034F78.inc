	THUMB_FUNC_START sub_08034F78
sub_08034F78: @ 0x08034F78
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #31]
	ldrb r2, [r4, #29]
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #29]
	add r2, r4, #0
	add r2, r2, #32
	mov r0, #96
	strb r0, [r2]
	ldrb r0, [r4, #28]
	and r1, r1, r0
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r4, #28]
	mov r0, #155
	strb r0, [r4, #27]
	ldr r0, _08034FD4  @ =0x06012C00
	ldr r1, _08034FD8  @ =0x03000030
	ldr r1, [r1]
	ldr r2, _08034FDC  @ =0x000EB8CC
	add r1, r1, r2
	bl 0x080009F0
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
_08034FD4:
	.4byte 0x06012C00
_08034FD8:
	.4byte 0x03000030
_08034FDC:
	.4byte 0x000EB8CC
	THUMB_FUNC_END sub_08034F78

