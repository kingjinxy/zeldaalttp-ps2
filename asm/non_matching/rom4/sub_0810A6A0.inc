	THUMB_FUNC_START sub_0810A6A0
sub_0810A6A0: @ 0x0810A6A0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r3, r0, #0
	ldr r4, _0810A6F4  @ =gRam
	ldr r1, _0810A6F8  @ =0x00000FC2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	lsr r2, r0, #2
	mov r0, #7
	and r2, r2, r0
	sub r1, r1, #16
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810A6CA
	add r0, r2, #0
	add r0, r0, #8
	add r2, r0, #0
_0810A6CA:
	ldr r0, _0810A6FC  @ =0x000010A2
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _0810A700  @ =gUnknown_0817C2FE
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810A704  @ =0x00000F92
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _0810A708  @ =gUnknown_0817C30E
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r3, #0
	bl sub_0810A48C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A6F4:
	.4byte gRam
_0810A6F8:
	.4byte 0x00000FC2
_0810A6FC:
	.4byte 0x000010A2
_0810A700:
	.4byte gUnknown_0817C2FE
_0810A704:
	.4byte 0x00000F92
_0810A708:
	.4byte gUnknown_0817C30E
	THUMB_FUNC_END sub_0810A6A0

