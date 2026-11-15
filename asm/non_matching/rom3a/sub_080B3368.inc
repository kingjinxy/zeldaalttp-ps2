	THUMB_FUNC_START sub_080B3368
sub_080B3368: @ 0x080B3368
	push {r4,lr}
	ldr r1, _080B33B0  @ =gRam
	ldr r2, _080B33B4  @ =0x00000A4C
	add r0, r1, r2
	mov r3, #0
	mov r2, #0
	strh r2, [r0]
	ldr r4, _080B33B8  @ =0x000009E8
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _080B33BC  @ =0x00000A1A
	add r0, r1, r2
	ldrh r2, [r0]
	sub r4, r4, #60
	add r0, r1, r4
	strb r2, [r0]
	ldr r2, _080B33C0  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r4, _080B33C4  @ =0x00001ABA
	add r0, r1, r4
	ldrh r0, [r0]
	add r2, r2, #40
	add r1, r1, r2
	strb r0, [r1]
	mov r0, #4
	mov r1, #39
	bl sub_08122728
	bl sub_080C1B40
	bl sub_080BE9C8
	pop {r4}
	pop {r0}
	bx r0
_080B33B0:
	.4byte gRam
_080B33B4:
	.4byte 0x00000A4C
_080B33B8:
	.4byte 0x000009E8
_080B33BC:
	.4byte 0x00000A1A
_080B33C0:
	.4byte 0x000009AD
_080B33C4:
	.4byte 0x00001ABA
	THUMB_FUNC_END sub_080B3368

