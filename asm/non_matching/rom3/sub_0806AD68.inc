	THUMB_FUNC_START sub_0806AD68
sub_0806AD68: @ 0x0806AD68
	push {r4,lr}
	ldr r0, _0806ADEC  @ =gRam
	ldr r1, _0806ADF0  @ =0x00000CF8
	add r4, r0, r1
	ldrh r0, [r4]
	cmp r0, #0
	beq _0806AD84
	bl sub_08130FF8
	ldrh r0, [r4]
	cmp r0, #0
	beq _0806AD84
	bl sub_08130FF8
_0806AD84:
	bl sub_0809AABC
	ldr r4, _0806ADEC  @ =gRam
	ldr r2, _0806ADF4  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806ADE6
	ldr r3, _0806ADF8  @ =0x000009AC
	add r1, r4, r3
	mov r0, #7
	strb r0, [r1]
	ldr r0, _0806ADFC  @ =0x00000B6F
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_08070BB0
	bl sub_08070A80
	ldr r1, _0806AE00  @ =0x00000A46
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0806AE04  @ =0x00000A3C
	add r0, r4, r2
	mov r2, #0
	strh r1, [r0]
	ldr r3, _0806AE08  @ =0x00000A42
	add r0, r4, r3
	ldrh r1, [r0]
	add r3, r3, #6
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _0806AE0C  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806ADE6
	sub r3, r3, #116
	add r0, r4, r3
	strb r2, [r0]
	ldr r0, _0806AE10  @ =0x0000051E
	add r1, r4, r0
	mov r0, #204
	strh r0, [r1]
	ldr r1, _0806AE14  @ =0x0000099A
	add r0, r4, r1
	strb r2, [r0]
_0806ADE6:
	pop {r4}
	pop {r0}
	bx r0
_0806ADEC:
	.4byte gRam
_0806ADF0:
	.4byte 0x00000CF8
_0806ADF4:
	.4byte 0x000009AD
_0806ADF8:
	.4byte 0x000009AC
_0806ADFC:
	.4byte 0x00000B6F
_0806AE00:
	.4byte 0x00000A46
_0806AE04:
	.4byte 0x00000A3C
_0806AE08:
	.4byte 0x00000A42
_0806AE0C:
	.4byte 0x000009DA
_0806AE10:
	.4byte 0x0000051E
_0806AE14:
	.4byte 0x0000099A
	THUMB_FUNC_END sub_0806AD68

