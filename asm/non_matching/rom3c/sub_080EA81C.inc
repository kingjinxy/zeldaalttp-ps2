	THUMB_FUNC_START sub_080EA81C
sub_080EA81C: @ 0x080EA81C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080EA854  @ =gRam
	ldr r0, _080EA858  @ =0x00001052
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #5
	strb r0, [r1]
	ldr r1, _080EA85C  @ =0x00000F92
	add r2, r2, r1
	add r2, r4, r2
	lsl r0, r0, #24
	lsr r0, r0, #28
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080C3094
	add r0, r4, #0
	bl sub_080EABEC
	pop {r4}
	pop {r0}
	bx r0
_080EA854:
	.4byte gRam
_080EA858:
	.4byte 0x00001052
_080EA85C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EA81C

