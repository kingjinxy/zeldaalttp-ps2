	THUMB_FUNC_START sub_0809E1B8
sub_0809E1B8: @ 0x0809E1B8
	push {r4,lr}
	mov r1, #4
	ldr r3, _0809E1F4  @ =gRam
	ldr r0, _0809E1F8  @ =0x00000E15
	add r4, r3, r0
_0809E1C2:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r2, r1, r4
	ldrb r0, [r2]
	cmp r0, #49
	beq _0809E204
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0809E1C2
_0809E1D8:
	ldr r1, _0809E1FC  @ =0x00001791
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	ldr r2, _0809E200  @ =0x00001702
	add r1, r3, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _0809E220
	mov r0, #0
	b _0809E222
	.byte 0x00
	.byte 0x00
_0809E1F4:
	.4byte gRam
_0809E1F8:
	.4byte 0x00000E15
_0809E1FC:
	.4byte 0x00001791
_0809E200:
	.4byte 0x00001702
_0809E204:
	ldr r4, _0809E218  @ =0x0000180C
	add r0, r3, r4
	mov r1, #0
	strb r1, [r0]
	ldr r4, _0809E21C  @ =0x00001705
	add r0, r3, r4
	strb r1, [r0]
	strb r1, [r2]
	b _0809E1D8
	.byte 0x00
	.byte 0x00
_0809E218:
	.4byte 0x0000180C
_0809E21C:
	.4byte 0x00001705
_0809E220:
	mov r0, #1
_0809E222:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0809E1B8

