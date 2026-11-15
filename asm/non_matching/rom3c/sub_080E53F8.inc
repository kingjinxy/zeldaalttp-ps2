	THUMB_FUNC_START sub_080E53F8
sub_080E53F8: @ 0x080E53F8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080E5458  @ =gRam
	ldr r2, _080E545C  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	bne _080E5430
	ldr r1, _080E5460  @ =0x0000164C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E5424
	ldr r1, _080E5464  @ =0x00000F62
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E5430
_080E5424:
	ldr r0, _080E5468  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E5430:
	ldr r1, _080E546C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080E5450
	add r0, r4, #0
	mov r1, #32
	bl sub_080C2CB4
	add r0, r4, #0
	bl sub_080E5470
_080E5450:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E5458:
	.4byte gRam
_080E545C:
	.4byte 0x00000FC2
_080E5460:
	.4byte 0x0000164C
_080E5464:
	.4byte 0x00000F62
_080E5468:
	.4byte 0x00000F52
_080E546C:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080E53F8

