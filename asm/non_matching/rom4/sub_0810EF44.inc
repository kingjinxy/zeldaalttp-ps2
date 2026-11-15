	THUMB_FUNC_START sub_0810EF44
sub_0810EF44: @ 0x0810EF44
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _0810EF88  @ =gRam
	ldr r0, _0810EF8C  @ =0x00001776
	add r2, r4, r0
	mov r0, #0
	strb r0, [r2]
	add r0, r1, #0
	bl sub_080A1588
	ldr r0, _0810EF90  @ =0x00001052
	add r4, r4, r0
	add r4, r5, r4
	ldrb r0, [r4]
	sub r1, r0, #7
	cmp r1, #0
	blt _0810EF80
	ldr r0, _0810EF94  @ =gUnknown_0817D0CC
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r5, #0
	mov r2, #0
	bl sub_080C9564
	bl sub_080B0214
_0810EF80:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810EF88:
	.4byte gRam
_0810EF8C:
	.4byte 0x00001776
_0810EF90:
	.4byte 0x00001052
_0810EF94:
	.4byte gUnknown_0817D0CC
	THUMB_FUNC_END sub_0810EF44

