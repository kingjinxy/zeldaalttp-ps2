	THUMB_FUNC_START sub_0810A554
sub_0810A554: @ 0x0810A554
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r3, _0810A584  @ =gRam
	ldr r2, _0810A588  @ =0x00001022
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #160
	bhi _0810A56E
	mov r0, #160
	strb r0, [r2]
_0810A56E:
	ldr r2, _0810A58C  @ =0x00000FC2
	add r0, r3, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810A590
	add r0, r1, #0
	bl sub_0810A7C4
	b _0810A598
	.byte 0x00
	.byte 0x00
_0810A584:
	.4byte gRam
_0810A588:
	.4byte 0x00001022
_0810A58C:
	.4byte 0x00000FC2
_0810A590:
	add r0, r4, #0
	mov r1, #10
	bl sub_081098B0
_0810A598:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A554

	.byte 0x00
	.byte 0x00
