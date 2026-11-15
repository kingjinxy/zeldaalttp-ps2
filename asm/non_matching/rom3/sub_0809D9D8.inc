	THUMB_FUNC_START sub_0809D9D8
sub_0809D9D8: @ 0x0809D9D8
	push {r4,r5,lr}
	ldr r0, _0809DA2C  @ =gRam
	ldr r2, _0809DA30  @ =0x000009B2
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r2, r0, #0
	cmp r1, #0
	bne _0809DA16
	ldr r1, _0809DA34  @ =0x0000187F
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809DA16
	mov r4, #4
	ldr r0, _0809DA38  @ =0x00000E15
	add r5, r2, r0
_0809D9FC:
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #36
	bne _0809DA0A
	add r0, r4, #0
	bl sub_0811C688
_0809DA0A:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0809DA2C  @ =gRam
	cmp r0, #0
	bge _0809D9FC
_0809DA16:
	mov r4, #4
_0809DA18:
	ldr r1, _0809DA38  @ =0x00000E15
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #44
	bne _0809DA3C
	add r0, r4, #0
	bl sub_0811E908
	b _0809DA46
_0809DA2C:
	.4byte gRam
_0809DA30:
	.4byte 0x000009B2
_0809DA34:
	.4byte 0x0000187F
_0809DA38:
	.4byte 0x00000E15
_0809DA3C:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _0809DA18
_0809DA46:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809D9D8

