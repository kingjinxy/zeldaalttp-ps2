	THUMB_FUNC_START sub_080EF258
sub_080EF258: @ 0x080EF258
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080EF2D8  @ =gRam
	ldr r1, _080EF2DC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r7, [r0]
	cmp r7, #0
	bne _080EF2D2
	add r0, r5, #0
	bl sub_080E77E4
	mov r0, #102
	mov r1, #0
	bl sub_0812A324
	bl GetRandomInt
	ldr r1, _080EF2E0  @ =0x00000F72
	add r2, r6, r1
	add r2, r5, r2
	ldr r3, _080EF2E4  @ =gUnknown_08178BD0
	mov r4, #7
	add r1, r4, #0
	and r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
	bl GetRandomInt
	ldr r2, _080EF2E8  @ =0x00000F82
	add r1, r6, r2
	add r1, r5, r1
	ldr r2, _080EF2EC  @ =gUnknown_08178BD8
	and r4, r4, r0
	add r4, r4, r2
	ldrb r0, [r4]
	strb r0, [r1]
	ldr r0, _080EF2F0  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EF2F4  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
	ldr r2, _080EF2F8  @ =0x00001092
	add r0, r6, r2
	add r0, r5, r0
	strb r7, [r0]
	ldr r1, _080EF2FC  @ =0x000010A2
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
	add r0, r5, #0
	bl sub_080EFD3C
_080EF2D2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080EF2D8:
	.4byte gRam
_080EF2DC:
	.4byte 0x00000FC2
_080EF2E0:
	.4byte 0x00000F72
_080EF2E4:
	.4byte gUnknown_08178BD0
_080EF2E8:
	.4byte 0x00000F82
_080EF2EC:
	.4byte gUnknown_08178BD8
_080EF2F0:
	.4byte 0x00000F52
_080EF2F4:
	.4byte 0x00001152
_080EF2F8:
	.4byte 0x00001092
_080EF2FC:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080EF258

