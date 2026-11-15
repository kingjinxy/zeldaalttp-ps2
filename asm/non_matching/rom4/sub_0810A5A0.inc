	THUMB_FUNC_START sub_0810A5A0
sub_0810A5A0: @ 0x0810A5A0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810A5DC  @ =gRam
	ldr r0, _0810A5E0  @ =0x00001172
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0810A70C
	ldr r1, _0810A5E4  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _0810A5EC
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0810A5F2
	ldr r1, _0810A5E8  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	b _0810A5F2
	.byte 0x00
	.byte 0x00
_0810A5DC:
	.4byte gRam
_0810A5E0:
	.4byte 0x00001172
_0810A5E4:
	.4byte 0x00000FC2
_0810A5E8:
	.4byte 0x00000F92
_0810A5EC:
	add r0, r4, #0
	bl sub_0810A5F8
_0810A5F2:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A5A0

