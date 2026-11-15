	THUMB_FUNC_START sub_0811534C
sub_0811534C: @ 0x0811534C
	push {r4,lr}
	ldr r4, _08115380  @ =gRam
	ldr r0, _08115384  @ =0x00001719
	add r2, r4, r0
	mov r0, #16
	strb r0, [r2]
	ldr r1, _08115388  @ =0x00001804
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _0811537A
	ldr r3, _0811538C  @ =0x00001718
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #4
	beq _0811537A
	strb r1, [r2]
	cmp r0, #19
	beq _0811537A
	bl sub_08115424
	cmp r0, #0
	beq _08115390
_0811537A:
	bl sub_081153B0
	b _081153A2
_08115380:
	.4byte gRam
_08115384:
	.4byte 0x00001719
_08115388:
	.4byte 0x00001804
_0811538C:
	.4byte 0x00001718
_08115390:
	bl sub_08114600
	ldr r2, _081153A8  @ =gUnknown_0817E9FF
	ldr r0, _081153AC  @ =0x00001663
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_081153A2:
	pop {r4}
	pop {r0}
	bx r0
_081153A8:
	.4byte gUnknown_0817E9FF
_081153AC:
	.4byte 0x00001663
	THUMB_FUNC_END sub_0811534C

