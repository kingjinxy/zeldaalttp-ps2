	THUMB_FUNC_START sub_080CA8BC
sub_080CA8BC: @ 0x080CA8BC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080CA8F8  @ =gRam
	ldr r0, _080CA8FC  @ =0x00000E85
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #255
	and r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080CA912
	mov r1, #29
_080CA8DE:
	ldr r4, _080CA900  @ =0x000011D2
	add r0, r2, r4
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080CA904
	lsl r0, r1, #24
	lsr r0, r0, #24
	add r1, r3, #0
	bl sub_080CA80C
	b _080CA912
	.byte 0x00
	.byte 0x00
_080CA8F8:
	.4byte gRam
_080CA8FC:
	.4byte 0x00000E85
_080CA900:
	.4byte 0x000011D2
_080CA904:
	sub r1, r1, #1
	cmp r1, #0
	bge _080CA8DE
	mov r0, #0
	add r1, r3, #0
	bl sub_080CA80C
_080CA912:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CA8BC

