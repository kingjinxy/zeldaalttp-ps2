	THUMB_FUNC_START sub_080B85B8
sub_080B85B8: @ 0x080B85B8
	push {r4-r7,lr}
	mov r4, #0
	ldr r6, _080B8608  @ =gRam
	mov r5, #0
	ldr r0, _080B860C  @ =0x00000E75
	add r7, r6, r0
_080B85C4:
	add r0, r4, #0
	bl sub_080CEC80
	ldr r2, _080B8610  @ =0x00000FA2
	add r1, r6, r2
	add r0, r4, r1
	strb r5, [r0]
	ldr r3, _080B8614  @ =0x000011B2
	add r0, r6, r3
	add r0, r4, r0
	strb r5, [r0]
	add r0, r4, r7
	strb r5, [r0]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #15
	bls _080B85C4
	ldr r2, _080B8618  @ =gUnknown_081706F0
	ldr r3, _080B861C  @ =0xFFFFFA0B
	add r0, r1, r3
	ldrb r0, [r0]
	mov r1, #254
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r0, r1, #24
	lsr r1, r1, #23
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r4-r7}
	pop {r0}
	bx r0
_080B8608:
	.4byte gRam
_080B860C:
	.4byte 0x00000E75
_080B8610:
	.4byte 0x00000FA2
_080B8614:
	.4byte 0x000011B2
_080B8618:
	.4byte gUnknown_081706F0
_080B861C:
	.4byte 0xFFFFFA0B
	THUMB_FUNC_END sub_080B85B8

