	THUMB_FUNC_START sub_080F83B8
sub_080F83B8: @ 0x080F83B8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080F841C  @ =gRam
	ldr r1, _080F8420  @ =0x00000F62
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080F8424  @ =0x00000FC2
	add r0, r7, r1
	add r2, r6, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080F8414
	ldr r0, _080F8428  @ =0x00000F52
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #96
	strb r0, [r2]
	ldr r1, _080F842C  @ =0x00000FB2
	add r4, r7, r1
	add r4, r6, r4
	ldrb r5, [r4]
	add r0, r6, #0
	bl sub_080C2FA8
	add r1, r0, #0
	strb r1, [r4]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r5, r0
	beq _080F8414
	eor r5, r5, r1
	mov r0, #2
	and r5, r5, r0
	cmp r5, #0
	bne _080F8414
	ldr r1, _080F8430  @ =0x00000FD2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #12
	strb r1, [r0]
_080F8414:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F841C:
	.4byte gRam
_080F8420:
	.4byte 0x00000F62
_080F8424:
	.4byte 0x00000FC2
_080F8428:
	.4byte 0x00000F52
_080F842C:
	.4byte 0x00000FB2
_080F8430:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080F83B8

