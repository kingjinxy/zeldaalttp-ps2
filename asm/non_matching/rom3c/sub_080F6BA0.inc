	THUMB_FUNC_START sub_080F6BA0
sub_080F6BA0: @ 0x080F6BA0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r3, r1, #0
	ldr r5, _080F6BC0  @ =gRam
	ldr r2, _080F6BC4  @ =0x00000FC2
	add r0, r5, r2
	add r4, r1, r0
	ldrb r2, [r4]
	cmp r2, #0
	beq _080F6BC8
	add r0, r1, #0
	bl sub_080F6C40
	b _080F6BEA
	.byte 0x00
	.byte 0x00
_080F6BC0:
	.4byte gRam
_080F6BC4:
	.4byte 0x00000FC2
_080F6BC8:
	ldr r1, _080F6BF0  @ =0x00000F52
	add r0, r5, r1
	add r0, r3, r0
	strb r2, [r0]
	mov r0, #10
	strb r0, [r4]
	ldr r2, _080F6BF4  @ =0x00000FF2
	add r0, r5, r2
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #168
	bne _080F6BEA
	add r1, r1, #128
	add r0, r5, r1
	add r0, r3, r0
	mov r1, #16
	strb r1, [r0]
_080F6BEA:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F6BF0:
	.4byte 0x00000F52
_080F6BF4:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_080F6BA0

