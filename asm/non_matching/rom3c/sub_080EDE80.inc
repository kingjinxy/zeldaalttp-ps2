	THUMB_FUNC_START sub_080EDE80
sub_080EDE80: @ 0x080EDE80
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r4, #0
	ldr r5, _080EDF40  @ =gRam
	ldr r0, _080EDF44  @ =0x00001032
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _080EDF48  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #132
	beq _080EDEB2
	ldr r2, _080EDF4C  @ =0x00000E75
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #251
	and r1, r1, r2
	strb r1, [r0]
_080EDEB2:
	ldr r1, _080EDF50  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	beq _080EDF7C
	ldr r2, _080EDF54  @ =0x00000996
	add r0, r5, r2
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080EDEDE
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r3, _080EDF58  @ =0x00000FB2
	add r1, r5, r3
	add r1, r4, r1
	strb r0, [r1]
_080EDEDE:
	ldr r0, _080EDF5C  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080EDF60  @ =gUnknown_08178748
	ldr r3, _080EDF58  @ =0x00000FB2
	add r0, r5, r3
	add r6, r4, r0
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EDF64  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080EDF68  @ =gUnknown_0817874C
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EDF6C  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EDF16
	add r0, r4, #0
	bl Sprite3_Move
_080EDF16:
	add r0, r4, #0
	bl sub_080C7A20
	ldr r2, _080EDF70  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _080EDF74  @ =0x00000F92
	add r2, r5, r3
	add r2, r4, r2
	ldr r3, _080EDF78  @ =gUnknown_08178750
	mov r1, #12
	and r0, r0, r1
	ldrb r1, [r6]
	orr r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _080EDF94
_080EDF40:
	.4byte gRam
_080EDF44:
	.4byte 0x00001032
_080EDF48:
	.4byte 0x00000FF2
_080EDF4C:
	.4byte 0x00000E75
_080EDF50:
	.4byte 0x00000FC2
_080EDF54:
	.4byte 0x00000996
_080EDF58:
	.4byte 0x00000FB2
_080EDF5C:
	.4byte 0x00000F22
_080EDF60:
	.4byte gUnknown_08178748
_080EDF64:
	.4byte 0x00000F12
_080EDF68:
	.4byte gUnknown_0817874C
_080EDF6C:
	.4byte 0x00001042
_080EDF70:
	.4byte 0x00001052
_080EDF74:
	.4byte 0x00000F92
_080EDF78:
	.4byte gUnknown_08178750
_080EDF7C:
	mov r0, #63
	strb r0, [r1]
	ldr r0, _080EDF9C  @ =0x00000F52
	add r1, r5, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EDFA0  @ =0x00000F92
	add r0, r5, r1
	add r0, r3, r0
	strb r2, [r0]
_080EDF94:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EDF9C:
	.4byte 0x00000F52
_080EDFA0:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080EDE80

