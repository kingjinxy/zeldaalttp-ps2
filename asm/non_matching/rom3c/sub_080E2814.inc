	THUMB_FUNC_START sub_080E2814
sub_080E2814: @ 0x080E2814
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E2848  @ =gRam
	ldr r4, _080E284C  @ =0x00000FC2
	add r2, r3, r4
	add r2, r0, r2
	mov r4, #0
	strb r1, [r2]
	ldr r2, _080E2850  @ =0x00001002
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r4, _080E2854  @ =0x00000D84
	add r3, r3, r4
	add r0, r0, r3
	ldrb r2, [r0]
	mov r1, #15
	and r1, r1, r2
	mov r2, #96
	orr r1, r1, r2
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E2848:
	.4byte gRam
_080E284C:
	.4byte 0x00000FC2
_080E2850:
	.4byte 0x00001002
_080E2854:
	.4byte 0x00000D84
	THUMB_FUNC_END sub_080E2814

