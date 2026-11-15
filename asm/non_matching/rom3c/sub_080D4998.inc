	THUMB_FUNC_START sub_080D4998
sub_080D4998: @ 0x080D4998
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C6240
	ldr r5, _080D49F8  @ =gRam
	ldr r1, _080D49FC  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D49CC
	add r0, r4, #0
	bl Sprite3_Move
	ldr r3, _080D4A00  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080D49F0
	add r0, r4, #0
	bl sub_080D4A0C
_080D49CC:
	mov r0, #1
	cmp r0, #0
	beq _080D49F0
	ldr r2, _080D49F8  @ =gRam
	ldr r0, _080D4A04  @ =0x00000F72
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080D49F0
	ldr r3, _080D4A08  @ =0x00000FA2
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
_080D49F0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D49F8:
	.4byte gRam
_080D49FC:
	.4byte 0x00000F62
_080D4A00:
	.4byte 0x00000996
_080D4A04:
	.4byte 0x00000F72
_080D4A08:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D4998

