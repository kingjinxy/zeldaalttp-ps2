	THUMB_FUNC_START sub_080FC104
sub_080FC104: @ 0x080FC104
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _080FC17C  @ =gRam
	ldr r2, _080FC180  @ =0x000010C2
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FC126
	ldr r2, _080FC184  @ =0x00000FC2
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FC174
_080FC126:
	add r0, r4, #0
	bl sub_080FC198
	cmp r0, #0
	bne _080FC174
	ldr r1, _080FC184  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	mov r0, #64
	strb r0, [r2]
	ldr r0, _080FC188  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FC18C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FC190  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FC194  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080FC174
	ldrb r0, [r2]
	lsr r0, r0, #1
	strb r0, [r2]
_080FC174:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FC17C:
	.4byte gRam
_080FC180:
	.4byte 0x000010C2
_080FC184:
	.4byte 0x00000FC2
_080FC188:
	.4byte 0x00000F22
_080FC18C:
	.4byte 0x00000F12
_080FC190:
	.4byte 0x00000F52
_080FC194:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080FC104

