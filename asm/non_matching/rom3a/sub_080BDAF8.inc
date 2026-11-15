	THUMB_FUNC_START sub_080BDAF8
sub_080BDAF8: @ 0x080BDAF8
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080BDB40  @ =gRam
	ldr r0, _080BDB44  @ =0x0000164C
	add r6, r5, r0
	bl sub_080BDB54
	ldr r0, _080BDB48  @ =0x00000FF2
	add r1, r5, r0
	mov r0, #122
	strb r0, [r1]
	mov r0, #0
	bl sub_080CEB84
	add r0, r4, #0
	bl sub_080B9584
	mov r0, #1
	strb r0, [r6]
	mov r0, #0
	bl sub_080DB4E0
	ldr r0, _080BDB4C  @ =0x00000F52
	add r1, r5, r0
	mov r0, #6
	strb r0, [r1]
	ldr r0, _080BDB50  @ =0x00000FC2
	add r5, r5, r0
	mov r0, #32
	strb r0, [r5]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDB40:
	.4byte gRam
_080BDB44:
	.4byte 0x0000164C
_080BDB48:
	.4byte 0x00000FF2
_080BDB4C:
	.4byte 0x00000F52
_080BDB50:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080BDAF8

