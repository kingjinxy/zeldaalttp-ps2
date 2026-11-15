	THUMB_FUNC_START sub_080E14E4
sub_080E14E4: @ 0x080E14E4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080E1500  @ =gRam
	ldr r1, _080E1504  @ =0x00000F82
	add r0, r3, r1
	add r0, r2, r0
	ldrb r4, [r0]
	cmp r4, #0
	beq _080E1508
	add r0, r2, #0
	bl sub_080C24B0
	b _080E152E
_080E1500:
	.4byte gRam
_080E1504:
	.4byte 0x00000F82
_080E1508:
	ldr r1, _080E1534  @ =0x00000F52
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080E1538  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080E153C  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _080E1540  @ =0x000010C2
	add r0, r3, r1
	add r0, r2, r0
	strb r4, [r0]
_080E152E:
	pop {r4}
	pop {r0}
	bx r0
_080E1534:
	.4byte 0x00000F52
_080E1538:
	.4byte 0x00000FC2
_080E153C:
	.4byte 0x00000FA2
_080E1540:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_080E14E4

