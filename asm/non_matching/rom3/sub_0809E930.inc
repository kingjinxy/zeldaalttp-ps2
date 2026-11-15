	THUMB_FUNC_START sub_0809E930
sub_0809E930: @ 0x0809E930
	push {lr}
	ldr r2, _0809E958  @ =gRam
	ldr r1, _0809E95C  @ =0x00000545
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809E952
	ldr r1, _0809E960  @ =gUnknown_081680A6
	lsr r0, r0, #25
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r3, _0809E964  @ =0x000016D5
	add r0, r2, r3
	strb r1, [r0]
_0809E952:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E958:
	.4byte gRam
_0809E95C:
	.4byte 0x00000545
_0809E960:
	.4byte gUnknown_081680A6
_0809E964:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_0809E930

