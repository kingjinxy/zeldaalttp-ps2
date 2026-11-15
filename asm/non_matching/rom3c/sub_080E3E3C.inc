	THUMB_FUNC_START sub_080E3E3C
sub_080E3E3C: @ 0x080E3E3C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E3E68  @ =gRam
	ldr r2, _080E3E6C  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #4
	strb r2, [r1]
	ldr r2, _080E3E70  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #60
	strb r2, [r1]
	ldr r1, _080E3E74  @ =0x00001052
	add r3, r3, r1
	add r0, r0, r3
	strb r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080E3E68:
	.4byte gRam
_080E3E6C:
	.4byte 0x00000F52
_080E3E70:
	.4byte 0x00000FC2
_080E3E74:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080E3E3C

