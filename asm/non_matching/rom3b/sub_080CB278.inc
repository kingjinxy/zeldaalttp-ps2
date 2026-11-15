	THUMB_FUNC_START sub_080CB278
sub_080CB278: @ 0x080CB278
	push {r4-r7,lr}
	bl sub_080CB374
	ldr r4, _080CB338  @ =gRam
	ldr r1, _080CB33C  @ =0x00001792
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080CB340  @ =0x00001791
	add r0, r4, r2
	strb r1, [r0]
	bl sub_080CAD30
	ldr r3, _080CB344  @ =0x000015FE
	add r1, r4, r3
	ldr r0, _080CB348  @ =0x0000FFFF
	strh r0, [r1]
	ldr r0, _080CB34C  @ =0x000015FC
	add r4, r4, r0
	mov r0, #1
	neg r0, r0
	strh r0, [r4]
	mov r3, #0
_080CB2A6:
	ldr r6, _080CB338  @ =gRam
	ldr r1, _080CB350  @ =0x00000DAC
	add r1, r1, r6
	mov r12, r1
	add r0, r3, r1
	ldr r2, _080CB354  @ =0x00000B36
	add r1, r6, r2
	ldrh r7, [r1]
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080CB2CE
	add r0, r3, #1
	add r0, r0, r12
	lsr r1, r7, #8
	ldrb r2, [r0]
	mov r0, #255
	and r1, r1, r0
	cmp r2, r1
	beq _080CB32C
_080CB2CE:
	add r0, r3, #2
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #6
	bls _080CB2A6
	ldr r3, _080CB358  @ =0x00000DB2
	add r1, r6, r3
	ldrb r5, [r1]
	ldr r0, _080CB35C  @ =0x00000DB3
	add r4, r6, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	orr r5, r5, r0
	sub r3, r3, #2
	add r2, r6, r3
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080CB360  @ =0x00000DB1
	add r3, r6, r0
	ldrb r0, [r3]
	strb r0, [r4]
	ldr r0, _080CB364  @ =0x00000DAE
	add r1, r6, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _080CB368  @ =0x00000DAF
	add r2, r6, r0
	ldrb r0, [r2]
	strb r0, [r3]
	mov r3, r12
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080CB36C  @ =0x00000DAD
	add r1, r6, r0
	ldrb r0, [r1]
	strb r0, [r2]
	strb r7, [r3]
	lsr r0, r7, #8
	strb r0, [r1]
	ldr r0, _080CB348  @ =0x0000FFFF
	cmp r5, r0
	beq _080CB32C
	lsl r0, r5, #1
	ldr r1, _080CB370  @ =gUnknown_02006B80
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
_080CB32C:
	bl sub_080CB5A0
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CB338:
	.4byte gRam
_080CB33C:
	.4byte 0x00001792
_080CB340:
	.4byte 0x00001791
_080CB344:
	.4byte 0x000015FE
_080CB348:
	.4byte 0x0000FFFF
_080CB34C:
	.4byte 0x000015FC
_080CB350:
	.4byte 0x00000DAC
_080CB354:
	.4byte 0x00000B36
_080CB358:
	.4byte 0x00000DB2
_080CB35C:
	.4byte 0x00000DB3
_080CB360:
	.4byte 0x00000DB1
_080CB364:
	.4byte 0x00000DAE
_080CB368:
	.4byte 0x00000DAF
_080CB36C:
	.4byte 0x00000DAD
_080CB370:
	.4byte gUnknown_02006B80
	THUMB_FUNC_END sub_080CB278

