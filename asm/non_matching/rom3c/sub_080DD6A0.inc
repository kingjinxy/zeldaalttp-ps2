	THUMB_FUNC_START sub_080DD6A0
sub_080DD6A0: @ 0x080DD6A0
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #43
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DD6F8
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DD700  @ =gRam
	ldr r1, _080DD704  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #1
	strb r1, [r0]
	ldr r5, _080DD708  @ =0x00001152
	add r0, r2, r5
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080DD70C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	ldr r5, _080DD710  @ =0x00000FD2
	add r0, r2, r5
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	ldr r5, _080DD714  @ =0x00001172
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	ldr r0, _080DD718  @ =0x00001012
	add r2, r2, r0
	add r2, r4, r2
	strb r3, [r2]
_080DD6F8:
	add r0, r4, #0
	pop {r4,r5}
	pop {r1}
	bx r1
_080DD700:
	.4byte gRam
_080DD704:
	.4byte 0x00001052
_080DD708:
	.4byte 0x00001152
_080DD70C:
	.4byte 0x00000FC2
_080DD710:
	.4byte 0x00000FD2
_080DD714:
	.4byte 0x00001172
_080DD718:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080DD6A0

