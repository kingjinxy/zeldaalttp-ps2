	THUMB_FUNC_START sub_080B17FC
sub_080B17FC: @ 0x080B17FC
	push {r4,lr}
	ldr r4, _080B1828  @ =gRam
	ldr r0, _080B182C  @ =0x00000A02
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B1822
	bl sub_080B0250
	bl sub_0808A6BC
	ldr r0, _080B1830  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B1822:
	pop {r4}
	pop {r0}
	bx r0
_080B1828:
	.4byte gRam
_080B182C:
	.4byte 0x00000A02
_080B1830:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B17FC

