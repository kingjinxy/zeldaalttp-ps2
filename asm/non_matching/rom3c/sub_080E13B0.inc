	THUMB_FUNC_START sub_080E13B0
sub_080E13B0: @ 0x080E13B0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r6, #1
	ldr r5, _080E146C  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r7, r5, r0
	ldr r1, _080E1470  @ =0x00000FD2
	add r1, r1, r5
	mov r9, r1
_080E13CE:
	mov r0, #35
	mov r1, r8
	bl sub_080CA538
	add r4, r0, #0
	lsl r6, r6, #24
	cmp r4, #0
	blt _080E1452
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080E1474  @ =0x00001032
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #51
	strb r1, [r0]
	ldr r3, _080E1478  @ =0x00001122
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r1, _080E147C  @ =0x00001132
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	sub r2, r2, #176
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080E1480  @ =gUnknown_081768DA
	asr r2, r6, #24
	add r1, r2, r1
	ldrh r0, [r7]
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r7]
	ldr r3, _080E1484  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r7]
	strb r1, [r0]
	ldr r0, _080E1488  @ =0x00000F02
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080E148C  @ =0x00000961
	add r0, r5, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E1490  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080E1494  @ =gUnknown_081768DC
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080E1498  @ =0x00000FE2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	mov r2, r9
	add r1, r4, r2
	mov r0, #64
	strb r0, [r1]
_080E1452:
	mov r3, #255
	lsl r3, r3, #24
	add r0, r6, r3
	lsr r6, r0, #24
	cmp r0, #0
	bge _080E13CE
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E146C:
	.4byte gRam
_080E1470:
	.4byte 0x00000FD2
_080E1474:
	.4byte 0x00001032
_080E1478:
	.4byte 0x00001122
_080E147C:
	.4byte 0x00001132
_080E1480:
	.4byte gUnknown_081768DA
_080E1484:
	.4byte 0x00000EE2
_080E1488:
	.4byte 0x00000F02
_080E148C:
	.4byte 0x00000961
_080E1490:
	.4byte 0x00000F22
_080E1494:
	.4byte gUnknown_081768DC
_080E1498:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080E13B0

