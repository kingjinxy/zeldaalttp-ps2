	THUMB_FUNC_START sub_080DA584
sub_080DA584: @ 0x080DA584
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DA5BC  @ =gRam
	ldr r1, _080DA5C0  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DA5B4
	ldr r0, _080DA5C4  @ =0x00001770
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	mov r0, #160
	lsl r0, r0, #1
	bl sub_080C95C0
	ldr r0, _080DA5C8  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DA5B4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA5BC:
	.4byte gRam
_080DA5C0:
	.4byte 0x00000FC2
_080DA5C4:
	.4byte 0x00001770
_080DA5C8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DA584

