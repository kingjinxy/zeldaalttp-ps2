	THUMB_FUNC_START sub_08122390
sub_08122390: @ 0x08122390
	push {r4-r7,lr}
	ldr r1, _081223C0  @ =gRam
	ldr r3, _081223C4  @ =0x00001732
	add r2, r1, r3
	strb r0, [r2]
	mov r7, #9
	add r6, r1, #0
	add r4, r2, #0
	ldrb r2, [r4]
	ldr r5, _081223C8  @ =0x00000E15
	add r3, r6, r5
_081223A6:
	cmp r7, r2
	beq _081223B2
	add r1, r7, r3
	ldrb r5, [r1]
	cmp r5, #0
	beq _081223CC
_081223B2:
	sub r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r0, #0
	bge _081223A6
	b _08122494
	.byte 0x00
	.byte 0x00
_081223C0:
	.4byte gRam
_081223C4:
	.4byte 0x00001732
_081223C8:
	.4byte 0x00000E15
_081223CC:
	mov r0, #60
	strb r0, [r1]
	ldr r1, _08122420  @ =0x00000E47
	add r0, r6, r1
	add r0, r7, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _08122424  @ =0x00000E29
	add r0, r6, r3
	add r0, r7, r0
	strb r5, [r0]
	ldr r1, _08122428  @ =0x00000E33
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #4
	strb r1, [r0]
	bl GetRandomInt
	mov r2, #151
	lsl r2, r2, #4
	add r1, r6, r2
	strb r0, [r1]
	ldrb r4, [r4]
	add r0, r4, #0
	bl sub_080ABAD4
	ldr r3, _0812242C  @ =0x00000975
	add r0, r6, r3
	strb r5, [r0]
	ldr r1, _08122430  @ =0x00000A92
	add r0, r6, r1
	add r4, r4, r0
	ldrb r2, [r4]
	cmp r2, #247
	bhi _08122434
	sub r3, r3, #1
	add r0, r6, r3
	strb r2, [r0]
	b _0812243A
_08122420:
	.4byte 0x00000E47
_08122424:
	.4byte 0x00000E29
_08122428:
	.4byte 0x00000E33
_0812242C:
	.4byte 0x00000975
_08122430:
	.4byte 0x00000A92
_08122434:
	ldr r1, _0812249C  @ =0x00000974
	add r0, r6, r1
	strb r5, [r0]
_0812243A:
	ldr r2, _081224A0  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r5, _081224A4  @ =0x00000968
	add r4, r2, r5
	mov r3, #0
	strb r0, [r4]
	add r5, r5, #1
	add r0, r2, r5
	strb r3, [r0]
	lsl r1, r1, #24
	lsr r1, r1, #29
	ldr r0, _081224A8  @ =0x0000096C
	add r5, r2, r0
	strb r1, [r5]
	ldr r1, _081224AC  @ =0x0000096D
	add r0, r2, r1
	strb r3, [r0]
	ldr r3, _0812249C  @ =0x00000974
	add r0, r2, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	mov r1, #150
	lsl r1, r1, #4
	add r3, r2, r1
	ldrh r1, [r3]
	sub r1, r1, r0
	ldrh r0, [r4]
	sub r0, r0, #2
	add r1, r1, r0
	strh r1, [r3]
	ldr r3, _081224B0  @ =0x00000964
	add r2, r2, r3
	ldrh r0, [r2]
	add r0, r0, #2
	ldrh r5, [r5]
	add r0, r0, r5
	strh r0, [r2]
	add r0, r7, #0
	bl sub_080ABA78
_08122494:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812249C:
	.4byte 0x00000974
_081224A0:
	.4byte gRam
_081224A4:
	.4byte 0x00000968
_081224A8:
	.4byte 0x0000096C
_081224AC:
	.4byte 0x0000096D
_081224B0:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08122390

