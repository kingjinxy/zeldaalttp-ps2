	THUMB_FUNC_START sub_080E27C4
sub_080E27C4: @ 0x080E27C4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E2614
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080E2804  @ =gRam
	ldr r3, _080E2808  @ =0x00001082
	add r1, r2, r3
	add r1, r4, r1
	strb r0, [r1]
	ldr r1, _080E280C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E27FE
	ldr r3, _080E2810  @ =0x00000F52
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #255
	bl sub_080E2814
_080E27FE:
	pop {r4}
	pop {r0}
	bx r0
_080E2804:
	.4byte gRam
_080E2808:
	.4byte 0x00001082
_080E280C:
	.4byte 0x00000FC2
_080E2810:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E27C4

