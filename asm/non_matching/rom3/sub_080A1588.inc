	THUMB_FUNC_START sub_080A1588
sub_080A1588: @ 0x080A1588
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r2, _080A1654  @ =gRam
	ldr r0, _080A1658  @ =0x00001702
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _080A15B2
	mov r1, #0
	strb r1, [r3]
	ldr r3, _080A165C  @ =0x000016F8
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #178
	add r0, r2, r3
	strb r1, [r0]
	sub r3, r3, #25
	add r0, r2, r3
	strb r1, [r0]
_080A15B2:
	ldr r1, _080A1660  @ =0x0000175D
	add r0, r2, r1
	mov r3, #0
	strb r4, [r0]
	ldr r4, _080A1664  @ =0x0000175E
	add r1, r2, r4
	mov r0, #96
	strb r0, [r1]
	ldr r1, _080A1668  @ =0x00001776
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A15D0
	cmp r0, #3
	bne _080A1624
_080A15D0:
	ldr r4, _080A166C  @ =0x00001791
	add r0, r2, r4
	strb r3, [r0]
	ldr r1, _080A1670  @ =0x000016E8
	add r0, r2, r1
	strb r3, [r0]
	sub r4, r4, #168
	add r0, r2, r4
	strb r3, [r0]
	add r1, r1, #2
	add r0, r2, r1
	strb r3, [r0]
	add r4, r4, #48
	add r0, r2, r4
	strb r3, [r0]
	add r1, r1, #27
	add r0, r2, r1
	strb r3, [r0]
	add r4, r4, #113
	add r0, r2, r4
	strb r3, [r0]
	ldr r1, _080A1674  @ =0x0000180C
	add r0, r2, r1
	strb r3, [r0]
	sub r4, r4, #1
	add r0, r2, r4
	strb r3, [r0]
	ldr r0, _080A1678  @ =0x00001718
	add r1, r2, r0
	mov r0, #21
	strb r0, [r1]
	ldr r1, _080A167C  @ =0x0000175F
	add r3, r2, r1
	mov r1, #1
	strb r1, [r3]
	add r4, r4, #132
	add r0, r2, r4
	strb r1, [r0]
	cmp r5, #32
	bne _080A1624
	mov r0, #2
	strb r0, [r3]
_080A1624:
	mov r0, #4
	mov r1, #34
	bl sub_080AC8AC
	ldr r0, _080A1654  @ =gRam
	ldr r1, _080A1660  @ =0x0000175D
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #32
	beq _080A1648
	cmp r0, #55
	beq _080A1648
	cmp r0, #56
	beq _080A1648
	cmp r0, #57
	beq _080A1648
	bl sub_080AA724
_080A1648:
	bl sub_08093078
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A1654:
	.4byte gRam
_080A1658:
	.4byte 0x00001702
_080A165C:
	.4byte 0x000016F8
_080A1660:
	.4byte 0x0000175D
_080A1664:
	.4byte 0x0000175E
_080A1668:
	.4byte 0x00001776
_080A166C:
	.4byte 0x00001791
_080A1670:
	.4byte 0x000016E8
_080A1674:
	.4byte 0x0000180C
_080A1678:
	.4byte 0x00001718
_080A167C:
	.4byte 0x0000175F
	THUMB_FUNC_END sub_080A1588

