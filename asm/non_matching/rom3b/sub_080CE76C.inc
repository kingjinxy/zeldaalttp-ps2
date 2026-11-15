	THUMB_FUNC_START sub_080CE76C
sub_080CE76C: @ 0x080CE76C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r1, _080CE78C  @ =gRam
	ldr r3, _080CE790  @ =0x00000F62
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	bne _080CE794
	add r0, r2, #0
	bl sub_080CE7F0
	b _080CE7DE
_080CE78C:
	.4byte gRam
_080CE790:
	.4byte 0x00000F62
_080CE794:
	ldr r1, _080CE7A8  @ =0x00000FC2
	add r0, r4, r1
	add r0, r2, r0
	ldrb r3, [r0]
	cmp r3, #0
	beq _080CE7AC
	add r0, r2, #0
	bl sub_080CEB44
	b _080CE7DE
_080CE7A8:
	.4byte 0x00000FC2
_080CE7AC:
	ldr r0, _080CE7E4  @ =0x00000FA2
	add r1, r4, r0
	add r0, r5, r1
	strb r3, [r0]
	mov r2, #15
_080CE7B6:
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #4
	beq _080CE7DE
	sub r2, r2, #1
	cmp r2, #0
	bge _080CE7B6
	ldr r3, _080CE7E8  @ =0x00000CA2
	add r1, r4, r3
	mov r0, #1
	strh r0, [r1]
	bl sub_080CAEC0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CE7DE
	ldr r0, _080CE7EC  @ =0x00001649
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_080CE7DE:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CE7E4:
	.4byte 0x00000FA2
_080CE7E8:
	.4byte 0x00000CA2
_080CE7EC:
	.4byte 0x00001649
	THUMB_FUNC_END sub_080CE76C

