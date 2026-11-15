	THUMB_FUNC_START sub_080DDC88
sub_080DDC88: @ 0x080DDC88
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DDCDC  @ =gRam
	ldr r1, _080DDCE0  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080DDCD6
	ldr r1, _080DDCE4  @ =0x00000F62
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080DDCD6
	lsl r1, r1, #1
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r2]
	lsl r0, r1, #24
	cmp r0, #0
	bge _080DDCD6
	mov r0, #255
	orr r1, r1, r0
	strb r1, [r2]
	ldr r1, _080DDCE8  @ =0x00001770
	add r0, r5, r1
	strb r3, [r0]
	ldr r1, _080DDCEC  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r3, [r0]
_080DDCD6:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DDCDC:
	.4byte gRam
_080DDCE0:
	.4byte 0x00001052
_080DDCE4:
	.4byte 0x00000F62
_080DDCE8:
	.4byte 0x00001770
_080DDCEC:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080DDC88

