	THUMB_FUNC_START sub_0810A48C
sub_0810A48C: @ 0x0810A48C
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _0810A4B0  @ =gRam
	ldr r1, _0810A4B4  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0810A4AA
	add r0, r2, #0
	mov r1, #82
	bl sub_080CF140
_0810A4AA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A4B0:
	.4byte gRam
_0810A4B4:
	.4byte 0x00000996
	THUMB_FUNC_END sub_0810A48C

