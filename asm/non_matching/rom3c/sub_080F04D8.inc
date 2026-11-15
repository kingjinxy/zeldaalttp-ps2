	THUMB_FUNC_START sub_080F04D8
sub_080F04D8: @ 0x080F04D8
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #74
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080F0530
	lsl r4, r5, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	bl sub_080C2914
	ldr r1, _080F0520  @ =gRam
	ldr r2, _080F0524  @ =0x00000FD2
	add r0, r1, r2
	add r0, r5, r0
	mov r2, #80
	strb r2, [r0]
	ldr r2, _080F0528  @ =0x00000F22
	add r0, r1, r2
	add r0, r5, r0
	mov r2, #24
	strb r2, [r0]
	ldr r0, _080F052C  @ =0x00001152
	add r1, r1, r0
	add r1, r5, r1
	mov r0, #48
	strb r0, [r1]
	add r0, r5, #0
	b _080F0534
_080F0520:
	.4byte gRam
_080F0524:
	.4byte 0x00000FD2
_080F0528:
	.4byte 0x00000F22
_080F052C:
	.4byte 0x00001152
_080F0530:
	mov r0, #1
	neg r0, r0
_080F0534:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080F04D8

	.byte 0x00
	.byte 0x00
