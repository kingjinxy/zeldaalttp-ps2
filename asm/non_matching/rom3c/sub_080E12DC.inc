	THUMB_FUNC_START sub_080E12DC
sub_080E12DC: @ 0x080E12DC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080E1340  @ =gRam
	ldr r1, _080E1344  @ =0x00000F92
	add r0, r6, r1
	add r3, r4, r0
	ldr r2, _080E1348  @ =0x00000996
	add r2, r2, r6
	mov r12, r2
	ldrb r1, [r2]
	lsr r1, r1, #3
	mov r0, #1
	and r1, r1, r0
	ldr r0, _080E134C  @ =gUnknown_081768D8
	mov r8, r0
	ldr r2, _080E1350  @ =0x00000F82
	add r0, r6, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, r8
	ldrb r0, [r0]
	add r0, r0, r1
	strb r0, [r3]
	ldr r1, _080E1354  @ =0x00000F52
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080E1374
	ldr r2, _080E1358  @ =0x00000FD2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E13A4
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080E135C
	add r0, r4, #0
	bl sub_080E157C
	b _080E13A4
	.byte 0x00
	.byte 0x00
_080E1340:
	.4byte gRam
_080E1344:
	.4byte 0x00000F92
_080E1348:
	.4byte 0x00000996
_080E134C:
	.4byte gUnknown_081768D8
_080E1350:
	.4byte 0x00000F82
_080E1354:
	.4byte 0x00000F52
_080E1358:
	.4byte 0x00000FD2
_080E135C:
	ldr r1, _080E1370  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _080E13A4
	.byte 0x00
	.byte 0x00
_080E1370:
	.4byte 0x00000FC2
_080E1374:
	ldr r1, _080E1398  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E139C
	mov r0, r12
	ldrb r1, [r0]
	lsr r1, r1, #1
	mov r0, #2
	and r1, r1, r0
	ldrb r0, [r2]
	add r0, r0, r8
	ldrb r0, [r0]
	add r0, r0, r1
	strb r0, [r3]
	b _080E13A4
	.byte 0x00
	.byte 0x00
_080E1398:
	.4byte 0x00000FC2
_080E139C:
	strb r0, [r5]
	add r0, r7, #0
	bl sub_080E157C
_080E13A4:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E12DC

	.byte 0x00
	.byte 0x00
