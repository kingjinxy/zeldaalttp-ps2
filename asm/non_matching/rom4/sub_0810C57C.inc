	THUMB_FUNC_START sub_0810C57C
sub_0810C57C: @ 0x0810C57C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810C5C8  @ =gRam
	ldr r1, _0810C5CC  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _0810C5A0
	sub r1, r1, #112
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #48
	strb r0, [r2]
_0810C5A0:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _0810C5D0  @ =0x00000F22
	add r0, r5, r2
	add r3, r4, r0
	ldr r1, _0810C5D4  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _0810C5DC
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0810C5D8
	sub r0, r2, #1
	b _0810C5DA
_0810C5C8:
	.4byte gRam
_0810C5CC:
	.4byte 0x00000FC2
_0810C5D0:
	.4byte 0x00000F22
_0810C5D4:
	.4byte 0x00001082
_0810C5D8:
	add r0, r2, #1
_0810C5DA:
	strb r0, [r3]
_0810C5DC:
	ldr r0, _0810C600  @ =gRam
	ldr r2, _0810C604  @ =0x00000F12
	add r1, r0, r2
	add r3, r4, r1
	ldr r1, _0810C608  @ =0x00000FB2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	cmp r2, r0
	beq _0810C610
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0810C60C
	sub r0, r2, #1
	b _0810C60E
_0810C600:
	.4byte gRam
_0810C604:
	.4byte 0x00000F12
_0810C608:
	.4byte 0x00000FB2
_0810C60C:
	add r0, r2, #1
_0810C60E:
	strb r0, [r3]
_0810C610:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810C57C

	.byte 0x00
	.byte 0x00
