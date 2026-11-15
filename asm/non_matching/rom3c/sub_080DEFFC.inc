	THUMB_FUNC_START sub_080DEFFC
sub_080DEFFC: @ 0x080DEFFC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DF100  @ =gRam
	ldr r1, _080DF104  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	add r2, r5, #0
	eor r2, r2, r0
	lsl r2, r2, #24
	ldr r3, _080DF108  @ =0x00000F92
	add r1, r4, r3
	add r1, r5, r1
	lsr r0, r2, #27
	mov r6, #1
	and r0, r0, r6
	strb r0, [r1]
	mov r0, #248
	lsl r0, r0, #21
	and r0, r0, r2
	cmp r0, #0
	bne _080DF0A0
	ldr r1, _080DF10C  @ =0x00001082
	add r0, r4, r1
	add r0, r5, r0
	ldrb r2, [r0]
	sub r3, r3, #176
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080DF110  @ =0x00000968
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080DF114  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080DF118  @ =0x00000ED2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080DF11C  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _080DF120  @ =0x0000096D
	add r0, r4, r2
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #14
	bl sub_080C2DCC
	ldr r3, _080DF124  @ =0x00000F12
	add r0, r4, r3
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r4, r3
	add r0, r5, r0
	add r2, r2, #1
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	lsl r0, r1, #24
	cmp r0, #0
	beq _080DF0A0
	add r3, r3, #144
	add r1, r4, r3
	add r1, r5, r1
	lsr r0, r0, #31
	and r0, r0, r6
	strb r0, [r1]
_080DF0A0:
	ldr r3, _080DF100  @ =gRam
	ldr r1, _080DF10C  @ =0x00001082
	add r0, r3, r1
	add r0, r5, r0
	ldrb r2, [r0]
	add r1, r1, #192
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DF0F8
	ldr r0, _080DF128  @ =0x00000EE2
	add r1, r3, r0
	add r0, r5, r1
	add r1, r2, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _080DF0F8
	ldr r0, _080DF118  @ =0x00000ED2
	add r1, r3, r0
	add r0, r5, r1
	add r1, r2, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _080DF0F8
	ldr r2, _080DF12C  @ =0x00000F52
	add r1, r3, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080DF3EC
_080DF0F8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF100:
	.4byte gRam
_080DF104:
	.4byte 0x00000996
_080DF108:
	.4byte 0x00000F92
_080DF10C:
	.4byte 0x00001082
_080DF110:
	.4byte 0x00000968
_080DF114:
	.4byte 0x00000F02
_080DF118:
	.4byte 0x00000ED2
_080DF11C:
	.4byte 0x00000EF2
_080DF120:
	.4byte 0x0000096D
_080DF124:
	.4byte 0x00000F12
_080DF128:
	.4byte 0x00000EE2
_080DF12C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DEFFC

