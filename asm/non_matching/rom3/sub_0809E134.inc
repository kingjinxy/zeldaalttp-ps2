	THUMB_FUNC_START sub_0809E134
sub_0809E134: @ 0x0809E134
	push {lr}
	ldr r1, _0809E150  @ =gRam
	ldr r2, _0809E154  @ =0x00001718
	add r0, r1, r2
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #4
	beq _0809E15C
	cmp r0, #4
	bgt _0809E158
	cmp r0, #0
	beq _0809E15C
	b _0809E1B0
	.byte 0x00
	.byte 0x00
_0809E150:
	.4byte gRam
_0809E154:
	.4byte 0x00001718
_0809E158:
	cmp r0, #17
	bne _0809E1B0
_0809E15C:
	ldr r3, _0809E1A8  @ =0x000016E8
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	ldr r3, _0809E1AC  @ =0x00001809
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r3, r3, #127
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	add r3, r3, #130
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r3, r3, #146
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	add r3, r3, #36
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r3, r3, #13
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	add r3, r3, #119
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _0809E1B0
	mov r0, #1
	b _0809E1B2
	.byte 0x00
	.byte 0x00
_0809E1A8:
	.4byte 0x000016E8
_0809E1AC:
	.4byte 0x00001809
_0809E1B0:
	mov r0, #0
_0809E1B2:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0809E134

	.byte 0x00
	.byte 0x00
