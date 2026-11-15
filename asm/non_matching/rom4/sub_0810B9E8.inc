	THUMB_FUNC_START sub_0810B9E8
sub_0810B9E8: @ 0x0810B9E8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810BA20  @ =gRam
	ldr r1, _0810BA24  @ =0x00000FD2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r6, [r7]
	cmp r6, #0
	beq _0810BA30
	ldr r1, _0810BA28  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0810BA16
	ldr r0, _0810BA2C  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_0810BA16:
	add r0, r4, #0
	bl sub_0810B94C
	b _0810BA8E
	.byte 0x00
	.byte 0x00
_0810BA20:
	.4byte gRam
_0810BA24:
	.4byte 0x00000FD2
_0810BA28:
	.4byte 0x00000996
_0810BA2C:
	.4byte 0x00000F22
_0810BA30:
	ldr r0, _0810BA94  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #44
	bl sub_080CF140
	ldr r0, _0810BA98  @ =0x00000FB2
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0810BA9C  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #232
	strb r1, [r0]
	ldr r1, _0810BAA0  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	ldr r1, _0810BAA4  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #224
	strb r1, [r0]
	ldr r1, _0810BAA8  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	ldr r1, _0810BAAC  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	sub r1, r1, #16
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	mov r0, #45
	strb r0, [r7]
_0810BA8E:
	pop {r4-r7}
	pop {r0}
	bx r0
_0810BA94:
	.4byte 0x00000F52
_0810BA98:
	.4byte 0x00000FB2
_0810BA9C:
	.4byte 0x00000EE2
_0810BAA0:
	.4byte 0x00000F02
_0810BAA4:
	.4byte 0x00000ED2
_0810BAA8:
	.4byte 0x00000EF2
_0810BAAC:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_0810B9E8

