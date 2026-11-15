	THUMB_FUNC_START sub_0810BC40
sub_0810BC40: @ 0x0810BC40
	push {r4,r5,lr}
	mov r0, #120
	mov r1, #0
	bl sub_0812A324
	mov r0, #109
	mov r1, #0
	bl sub_0812A324
	ldr r2, _0810BCF8  @ =gRam
	ldr r0, _0810BCFC  @ =0x00000A3E
	add r1, r2, r0
	mov r0, #255
	strb r0, [r1]
	mov r5, #29
	ldr r1, _0810BD00  @ =0x000011EF
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810BC84
	ldr r0, _0810BD04  @ =0x000011D2
	add r1, r2, r0
_0810BC6C:
	lsl r0, r5, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r5, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0810BC8A
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810BC6C
_0810BC84:
	lsl r0, r5, #24
	cmp r0, #0
	bge _0810BC8C
_0810BC8A:
	mov r5, #0
_0810BC8C:
	ldr r4, _0810BCF8  @ =gRam
	lsl r5, r5, #24
	asr r5, r5, #24
	ldr r1, _0810BD04  @ =0x000011D2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #19
	strb r1, [r0]
	ldr r2, _0810BD08  @ =0x000015F8
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0810BD0C  @ =0x0000122C
	add r1, r4, r0
	add r1, r5, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	sub r0, r0, #24
	strb r0, [r1]
	ldr r0, _0810BD10  @ =0x0000120E
	add r1, r4, r0
	add r1, r5, r1
	add r2, r2, #1
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r0, #96
	strb r0, [r1]
	ldr r1, _0810BD14  @ =0x000012A4
	add r0, r4, r1
	add r0, r5, r0
	add r2, r2, #3
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0810BD18  @ =0x00001286
	add r0, r4, r1
	add r0, r5, r0
	add r2, r2, #1
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	bl GetRandomInt
	ldr r1, _0810BD1C  @ =0x000012FE
	add r4, r4, r1
	add r5, r5, r4
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #48
	strb r1, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
_0810BCF8:
	.4byte gRam
_0810BCFC:
	.4byte 0x00000A3E
_0810BD00:
	.4byte 0x000011EF
_0810BD04:
	.4byte 0x000011D2
_0810BD08:
	.4byte 0x000015F8
_0810BD0C:
	.4byte 0x0000122C
_0810BD10:
	.4byte 0x0000120E
_0810BD14:
	.4byte 0x000012A4
_0810BD18:
	.4byte 0x00001286
_0810BD1C:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_0810BC40

