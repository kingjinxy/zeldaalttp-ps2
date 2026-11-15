	THUMB_FUNC_START sub_08106970
sub_08106970: @ 0x08106970
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _08106A34  @ =gRam
	ldr r1, _08106A38  @ =0x00000FC2
	add r0, r2, r1
	add r5, r6, r0
	ldrb r1, [r5]
	cmp r1, #0
	beq _08106A60
	add r4, r1, #0
	cmp r4, #64
	bne _08106990
	add r0, r6, #0
	bl sub_081071B4
_08106990:
	cmp r4, #7
	bls _081069A4
	mov r4, #8
	ldrb r0, [r5]
	cmp r0, #120
	bls _081069A4
	add r0, r0, #128
	mvn r0, r0
	lsl r0, r0, #24
	lsr r4, r0, #24
_081069A4:
	ldr r5, _08106A34  @ =gRam
	ldr r2, _08106A3C  @ =0x00001002
	add r0, r5, r2
	add r0, r6, r0
	strb r4, [r0]
	ldr r3, _08106A38  @ =0x00000FC2
	add r0, r5, r3
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #63
	bls _08106A6C
	ldr r0, _08106A40  @ =0x00000996
	add r2, r5, r0
	ldr r1, _08106A44  @ =gUnknown_0817BF85
	ldrb r0, [r3]
	sub r0, r0, #64
	asr r0, r0, #3
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r4, [r0]
	and r4, r4, r1
	cmp r4, #0
	bne _08106A6C
	bl GetRandomInt
	mov r7, #15
	add r1, r7, #0
	and r1, r1, r0
	sub r1, r1, #3
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strb r1, [r0]
	mov r2, #0
	lsl r1, r1, #24
	cmp r1, #0
	bge _081069F0
	mov r2, #255
_081069F0:
	ldr r3, _08106A48  @ =0x00000961
	add r0, r5, r3
	strb r2, [r0]
	bl GetRandomInt
	add r1, r7, #0
	and r1, r1, r0
	add r1, r1, #12
	ldr r2, _08106A4C  @ =0x00000964
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _08106A50  @ =0x00000965
	add r0, r5, r3
	strb r4, [r0]
	add r0, r6, #0
	bl sub_080C9A58
	ldr r1, _08106A54  @ =0x00000FF2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #204
	bne _08106A6C
	ldr r2, _08106A58  @ =0x0000097D
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r3, _08106A5C  @ =0x000011D2
	add r1, r5, r3
	add r0, r0, r1
	mov r1, #14
	strb r1, [r0]
	b _08106A6C
_08106A34:
	.4byte gRam
_08106A38:
	.4byte 0x00000FC2
_08106A3C:
	.4byte 0x00001002
_08106A40:
	.4byte 0x00000996
_08106A44:
	.4byte gUnknown_0817BF85
_08106A48:
	.4byte 0x00000961
_08106A4C:
	.4byte 0x00000964
_08106A50:
	.4byte 0x00000965
_08106A54:
	.4byte 0x00000FF2
_08106A58:
	.4byte 0x0000097D
_08106A5C:
	.4byte 0x000011D2
_08106A60:
	ldr r3, _08106A74  @ =0x00000F52
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	mov r0, #32
	strb r0, [r5]
_08106A6C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08106A74:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08106970

