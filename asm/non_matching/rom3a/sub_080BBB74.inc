	THUMB_FUNC_START sub_080BBB74
sub_080BBB74: @ 0x080BBB74
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	bl sub_080BDB54
	mov r4, #4
	ldr r0, _080BBBA0  @ =gRam
	ldr r1, _080BBBA4  @ =0x00000FF6
	add r1, r1, r0
	mov r8, r1
	ldr r1, _080BBBA8  @ =0x00000FF2
	add r7, r0, r1
	ldr r1, _080BBBAC  @ =0x00000E75
	add r6, r0, r1
_080BBB94:
	cmp r4, #4
	bne _080BBBB0
	mov r0, #18
	mov r1, r8
	b _080BBBB4
	.byte 0x00
	.byte 0x00
_080BBBA0:
	.4byte gRam
_080BBBA4:
	.4byte 0x00000FF6
_080BBBA8:
	.4byte 0x00000FF2
_080BBBAC:
	.4byte 0x00000E75
_080BBBB0:
	add r1, r4, r7
	mov r0, #170
_080BBBB4:
	strb r0, [r1]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	add r2, r4, r6
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	sub r4, r4, #1
	cmp r4, #0
	bge _080BBB94
	add r0, r5, #0
	bl sub_080B9454
	ldr r0, _080BBBE8  @ =gRam
	ldr r1, _080BBBEC  @ =0x00001086
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080BBBE8:
	.4byte gRam
_080BBBEC:
	.4byte 0x00001086
	THUMB_FUNC_END sub_080BBB74

