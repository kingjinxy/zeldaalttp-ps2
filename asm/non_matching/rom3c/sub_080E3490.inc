	THUMB_FUNC_START sub_080E3490
sub_080E3490: @ 0x080E3490
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E2614
	ldr r1, _080E34C0  @ =gRam
	ldr r2, _080E34C4  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080E34BA
	mov r0, #48
	strb r0, [r2]
	ldr r0, _080E34C8  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E34BA:
	pop {r4}
	pop {r0}
	bx r0
_080E34C0:
	.4byte gRam
_080E34C4:
	.4byte 0x00000FC2
_080E34C8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E3490

