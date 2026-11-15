	THUMB_FUNC_START sub_080C7CB4
sub_080C7CB4: @ 0x080C7CB4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _080C7D0C  @ =gRam
	ldr r1, _080C7D10  @ =0x00001142
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080C7D14  @ =0x00000FF2
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #232
	bne _080C7D28
	ldr r1, _080C7D18  @ =0x00001152
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, #24
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C7D28
	ldr r1, _080C7D1C  @ =0x00000FA2
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _080C7D20  @ =0x00000FC2
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080C7D24  @ =0x00001012
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #3
	strb r1, [r0]
	mov r0, #1
	b _080C7ED0
	.byte 0x00
	.byte 0x00
_080C7D0C:
	.4byte gRam
_080C7D10:
	.4byte 0x00001142
_080C7D14:
	.4byte 0x00000FF2
_080C7D18:
	.4byte 0x00001152
_080C7D1C:
	.4byte 0x00000FA2
_080C7D20:
	.4byte 0x00000FC2
_080C7D24:
	.4byte 0x00001012
_080C7D28:
	add r0, r6, #0
	bl sub_080C5104
	ldr r2, _080C7D6C  @ =gRam
	ldr r1, _080C7D70  @ =0x000015E2
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #32
	bne _080C7D7C
	ldr r1, _080C7D74  @ =0x00000D84
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C7D7C
	ldr r1, _080C7D78  @ =0x00000FA2
	add r0, r2, r1
	add r0, r6, r0
	strb r3, [r0]
	add r1, r1, #32
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #31
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #108
	bl sub_080CF0AC
	mov r0, #1
	b _080C7ED0
	.byte 0x00
	.byte 0x00
_080C7D6C:
	.4byte gRam
_080C7D70:
	.4byte 0x000015E2
_080C7D74:
	.4byte 0x00000D84
_080C7D78:
	.4byte 0x00000FA2
_080C7D7C:
	ldr r7, _080C7E54  @ =gRam
	ldr r2, _080C7E58  @ =0x000015E2
	add r0, r7, r2
	ldrh r0, [r0]
	cmp r0, #9
	bne _080C7DEE
	ldr r1, _080C7E5C  @ =0x00001152
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r1, r1, #16
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, #0
	mov r8, r2
	mov r2, r8
	strb r2, [r0]
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	beq _080C7DEE
	mov r0, #236
	add r1, r6, #0
	bl sub_080CA538
	lsl r0, r0, #24
	cmp r0, #0
	blt _080C7DEE
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r4, #0
	mov r1, #110
	bl sub_080CF0AC
	ldr r1, _080C7E60  @ =0x00000FA2
	add r0, r7, r1
	add r0, r4, r0
	mov r5, #3
	strb r5, [r0]
	ldr r2, _080C7E64  @ =0x00000FC2
	add r0, r7, r2
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080C7E68  @ =0x00000F52
	add r0, r7, r1
	add r0, r4, r0
	mov r2, r8
	strb r2, [r0]
	bl GetRandomInt
	ldr r1, _080C7E6C  @ =0x00001012
	add r0, r7, r1
	add r4, r4, r0
	strb r5, [r4]
_080C7DEE:
	ldr r0, _080C7E54  @ =gRam
	ldr r2, _080C7E58  @ =0x000015E2
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r0, #0
	cmp r1, #8
	bne _080C7E74
	ldr r1, _080C7E70  @ =0x00000FF2
	add r0, r3, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #210
	beq _080C7E14
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080C7E1A
_080C7E14:
	add r0, r6, #0
	bl sub_080F1F20
_080C7E1A:
	add r0, r6, #0
	mov r1, #110
	bl sub_080CF0AC
	ldr r4, _080C7E54  @ =gRam
	ldr r2, _080C7E60  @ =0x00000FA2
	add r0, r4, r2
	add r0, r6, r0
	mov r2, #0
	mov r5, #3
	strb r5, [r0]
	ldr r1, _080C7E64  @ =0x00000FC2
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080C7E68  @ =0x00000F52
	add r0, r4, r1
	add r0, r6, r0
	strb r2, [r0]
	bl GetRandomInt
	ldr r2, _080C7E6C  @ =0x00001012
	add r4, r4, r2
	add r4, r6, r4
	strb r5, [r4]
	mov r0, #1
	b _080C7ED0
	.byte 0x00
	.byte 0x00
_080C7E54:
	.4byte gRam
_080C7E58:
	.4byte 0x000015E2
_080C7E5C:
	.4byte 0x00001152
_080C7E60:
	.4byte 0x00000FA2
_080C7E64:
	.4byte 0x00000FC2
_080C7E68:
	.4byte 0x00000F52
_080C7E6C:
	.4byte 0x00001012
_080C7E70:
	.4byte 0x00000FF2
_080C7E74:
	ldr r1, _080C7EDC  @ =0x00001152
	add r0, r3, r1
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C7E9A
	ldrb r0, [r2]
	mvn r0, r0
	lsl r0, r0, #24
	mov r1, #128
	lsl r1, r1, #17
	add r0, r0, r1
	lsr r0, r0, #25
	cmp r0, #8
	bhi _080C7E98
	mov r0, #0
_080C7E98:
	strb r0, [r2]
_080C7E9A:
	ldr r2, _080C7EE0  @ =0x00000F22
	add r0, r3, r2
	add r2, r6, r0
	ldrb r1, [r2]
	mov r5, #128
	add r0, r5, #0
	and r0, r0, r1
	lsr r1, r1, #1
	orr r0, r0, r1
	mov r7, #0
	strb r0, [r2]
	cmp r0, #255
	bne _080C7EB6
	strb r7, [r2]
_080C7EB6:
	ldr r1, _080C7EE4  @ =0x00000F12
	add r0, r3, r1
	add r4, r6, r0
	ldrb r1, [r4]
	add r0, r5, #0
	and r0, r0, r1
	lsr r1, r1, #1
	orr r0, r0, r1
	strb r0, [r4]
	cmp r0, #255
	bne _080C7ECE
	strb r7, [r4]
_080C7ECE:
	mov r0, #0
_080C7ED0:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C7EDC:
	.4byte 0x00001152
_080C7EE0:
	.4byte 0x00000F22
_080C7EE4:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080C7CB4

