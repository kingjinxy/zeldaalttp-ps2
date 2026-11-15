	THUMB_FUNC_START sub_080C172C
sub_080C172C: @ 0x080C172C
	push {r4-r6,lr}
	mov r4, #9
	ldr r5, _080C175C  @ =gRam
	ldr r0, _080C1760  @ =0x00000E15
	add r6, r5, r0
_080C1736:
	ldr r1, _080C1764  @ =0x000015DD
	add r0, r5, r1
	strb r4, [r0]
	add r1, r4, r6
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C174E
	lsl r0, r4, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	bl sub_080BF0C4
_080C174E:
	sub r4, r4, #1
	cmp r4, #0
	bge _080C1736
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C175C:
	.4byte gRam
_080C1760:
	.4byte 0x00000E15
_080C1764:
	.4byte 0x000015DD
	THUMB_FUNC_END sub_080C172C

