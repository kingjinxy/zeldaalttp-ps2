	THUMB_FUNC_START sub_080BF0C4
sub_080BF0C4: @ 0x080BF0C4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	ldr r2, _080BF0F0  @ =gRam
	cmp r4, #5
	bhi _080BF12A
	ldr r1, _080BF0F4  @ =0x00000E5B
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r3, r1, #0
	ldr r6, _080BF0F8  @ =0x000015F7
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BF0FC
	add r0, r1, #0
	bl sub_080CF370
	b _080BF11A
_080BF0F0:
	.4byte gRam
_080BF0F4:
	.4byte 0x00000E5B
_080BF0F8:
	.4byte 0x000015F7
_080BF0FC:
	ldr r6, _080BF110  @ =0x00000E47
	add r0, r2, r6
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BF114
	add r0, r1, #0
	bl sub_080CF3E8
	b _080BF11A
_080BF110:
	.4byte 0x00000E47
_080BF114:
	add r0, r3, #0
	bl sub_080CF3B8
_080BF11A:
	ldr r2, _080BF15C  @ =gRam
	ldr r1, _080BF160  @ =0x00000E51
	add r0, r2, r1
	add r0, r4, r0
	ldr r3, _080BF164  @ =0x000015F7
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
_080BF12A:
	ldr r6, _080BF168  @ =0x000009AD
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BF144
	ldr r1, _080BF16C  @ =0x00000E33
	add r0, r2, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080BF144
	sub r0, r0, #1
	strb r0, [r2]
_080BF144:
	ldr r0, _080BF170  @ =gUnknown_081717C4
	sub r1, r5, #1
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BF15C:
	.4byte gRam
_080BF160:
	.4byte 0x00000E51
_080BF164:
	.4byte 0x000015F7
_080BF168:
	.4byte 0x000009AD
_080BF16C:
	.4byte 0x00000E33
_080BF170:
	.4byte gUnknown_081717C4
	THUMB_FUNC_END sub_080BF0C4

