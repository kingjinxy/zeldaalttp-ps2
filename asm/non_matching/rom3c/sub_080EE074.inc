	THUMB_FUNC_START sub_080EE074
sub_080EE074: @ 0x080EE074
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080EE094  @ =gRam
	ldr r3, _080EE098  @ =0x00000B36
	add r0, r1, r3
	ldrh r0, [r0]
	add r3, r1, #0
	cmp r0, #27
	beq _080EE0A4
	cmp r0, #27
	bgt _080EE09C
	cmp r0, #12
	beq _080EE0A4
	b _080EE0C6
	.byte 0x00
	.byte 0x00
_080EE094:
	.4byte gRam
_080EE098:
	.4byte 0x00000B36
_080EE09C:
	cmp r0, #75
	beq _080EE0A4
	cmp r0, #107
	bne _080EE0C6
_080EE0A4:
	ldr r0, _080EE0CC  @ =0x00000F72
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EE0D0  @ =0x00000FF2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #131
	bne _080EE0C6
	ldr r1, _080EE0D4  @ =0x00000E75
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
_080EE0C6:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EE0CC:
	.4byte 0x00000F72
_080EE0D0:
	.4byte 0x00000FF2
_080EE0D4:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080EE074

