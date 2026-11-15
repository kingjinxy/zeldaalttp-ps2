	THUMB_FUNC_START sub_080EDB68
sub_080EDB68: @ 0x080EDB68
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EDB88  @ =gRam
	ldr r1, _080EDB8C  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EDB90
	add r0, r4, #0
	bl sub_080EDD34
	b _080EDD20
_080EDB88:
	.4byte gRam
_080EDB8C:
	.4byte 0x00000F72
_080EDB90:
	add r0, r4, #0
	bl sub_080EDFA4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EDBA4
	b _080EDD20
_080EDBA4:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EDBB2
	b _080EDD20
_080EDBB2:
	ldr r2, _080EDCB0  @ =0x00000FD2
	add r0, r5, r2
	add r0, r0, r4
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #8
	bne _080EDBC6
	add r0, r4, #0
	bl sub_080EC688
_080EDBC6:
	ldr r1, _080EDCB4  @ =0x000016F9
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EDBD2
	b _080EDD08
_080EDBD2:
	ldr r2, _080EDCB8  @ =0x00000545
	add r0, r5, r2
	ldrb r0, [r0]
	mov r2, #15
	and r2, r2, r0
	cmp r2, #0
	bne _080EDBE2
	b _080EDD08
_080EDBE2:
	ldr r1, _080EDCBC  @ =0x00000FF2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #132
	bne _080EDBF2
	mov r0, #16
	orr r2, r2, r0
_080EDBF2:
	ldr r1, _080EDCC0  @ =0x00000FB2
	add r0, r5, r1
	add r6, r4, r0
	ldr r0, _080EDCC4  @ =gUnknown_081786F8
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r0, _080EDCC8  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EDCCC  @ =gUnknown_081786B8
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EDCD0  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080EDCD4  @ =gUnknown_081786D8
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EDCD8  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EDC2E
	add r0, r4, #0
	bl Sprite3_Move
_080EDC2E:
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C7A20
	ldr r2, _080EDCDC  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EDCE0  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	ldr r3, _080EDCE4  @ =gUnknown_08178718
	mov r1, #12
	and r0, r0, r1
	ldrb r1, [r6]
	orr r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldrb r0, [r7]
	cmp r0, #132
	bne _080EDCF0
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080EDCE8  @ =0x0000097D
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bls _080EDC8C
	sub r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	bhi _080EDCF0
_080EDC8C:
	ldrb r6, [r6]
	cmp r1, r6
	bne _080EDCF0
	ldr r1, _080EDCEC  @ =0x00000F62
	add r0, r5, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080EDCA8
	mov r0, #16
	mov r1, r8
	strb r0, [r1]
_080EDCA8:
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	b _080EDD20
_080EDCB0:
	.4byte 0x00000FD2
_080EDCB4:
	.4byte 0x000016F9
_080EDCB8:
	.4byte 0x00000545
_080EDCBC:
	.4byte 0x00000FF2
_080EDCC0:
	.4byte 0x00000FB2
_080EDCC4:
	.4byte gUnknown_081786F8
_080EDCC8:
	.4byte 0x00000F22
_080EDCCC:
	.4byte gUnknown_081786B8
_080EDCD0:
	.4byte 0x00000F12
_080EDCD4:
	.4byte gUnknown_081786D8
_080EDCD8:
	.4byte 0x00001042
_080EDCDC:
	.4byte 0x00001052
_080EDCE0:
	.4byte 0x00000F92
_080EDCE4:
	.4byte gUnknown_08178718
_080EDCE8:
	.4byte 0x0000097D
_080EDCEC:
	.4byte 0x00000F62
_080EDCF0:
	ldr r0, _080EDD00  @ =gRam
	ldr r2, _080EDD04  @ =0x00000F62
	add r0, r0, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080EDD20
	.byte 0x00
	.byte 0x00
_080EDD00:
	.4byte gRam
_080EDD04:
	.4byte 0x00000F62
_080EDD08:
	ldr r0, _080EDD2C  @ =gRam
	ldr r1, _080EDD30  @ =0x00000F62
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C7A20
_080EDD20:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EDD2C:
	.4byte gRam
_080EDD30:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080EDB68

