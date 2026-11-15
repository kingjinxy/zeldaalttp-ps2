	THUMB_FUNC_START sub_080BB754
sub_080BB754: @ 0x080BB754
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r4, _080BB7D0  @ =gRam
	ldr r1, _080BB7D4  @ =0x00001663
	add r0, r4, r1
	ldrb r0, [r0]
	mov r8, r0
	bl sub_080BDB54
	mov r5, #9
	ldr r0, _080BB7D8  @ =0x00001052
	add r7, r4, r0
_080BB776:
	ldr r1, _080BB7DC  @ =0x00000FF2
	add r6, r4, r1
	add r1, r5, r6
	mov r0, #34
	strb r0, [r1]
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	ldr r1, _080BB7E0  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	lsl r1, r5, #2
	strb r1, [r0]
	add r0, r5, r7
	strb r5, [r0]
	sub r5, r5, #1
	cmp r5, #0
	bge _080BB776
	mov r0, #182
	strb r0, [r6, #10]
	mov r0, #10
	bl sub_080CEB84
	ldr r0, _080BB7E4  @ =0x00000671
	add r4, r6, r0
	mov r0, #10
	strb r0, [r4]
	bl sub_0812F9A8
	mov r1, r8
	strb r1, [r4]
	add r1, r6, #0
	add r1, r1, #106
	mov r0, #4
	strb r0, [r1]
	mov r0, r9
	bl sub_080B9454
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080BB7D0:
	.4byte gRam
_080BB7D4:
	.4byte 0x00001663
_080BB7D8:
	.4byte 0x00001052
_080BB7DC:
	.4byte 0x00000FF2
_080BB7E0:
	.4byte 0x00000FC2
_080BB7E4:
	.4byte 0x00000671
	THUMB_FUNC_END sub_080BB754

