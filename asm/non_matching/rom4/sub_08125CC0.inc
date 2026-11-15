	THUMB_FUNC_START sub_08125CC0
sub_08125CC0: @ 0x08125CC0
	push {r4-r7,lr}
	ldr r5, _08125CC8  @ =gRam
	b _08125D3E
	.byte 0x00
	.byte 0x00
_08125CC8:
	.4byte gRam
_08125CCC:
	cmp r2, r1
	beq _08125D30
	ldr r1, _08125D1C  @ =0x00001BC8
	add r2, r5, r1
	strb r0, [r2]
	sub r0, r3, #1
	add r0, r0, r4
	ldrb r0, [r0]
	ldr r4, _08125D20  @ =0x00001BC7
	add r1, r5, r4
	strb r0, [r1]
	strb r3, [r6]
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r1, _08125D24  @ =0x00001BC5
	add r4, r5, r1
	mov r1, #0
	ldrsb r1, [r4, r1]
	sub r0, r0, r1
	lsl r0, r0, #8
	mov r1, #0
	ldrsb r1, [r2, r1]
	mov r2, #0
	ldrsb r2, [r7, r2]
	sub r1, r1, r2
	bl Div
	ldr r2, _08125D28  @ =0x00001BCC
	add r1, r5, r2
	strh r0, [r1]
	ldrb r0, [r4]
	lsl r0, r0, #8
	mov r1, #128
	ldr r3, _08125D2C  @ =0x00001BCA
	add r2, r5, r3
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #0
	b _08125D7E
	.byte 0x00
	.byte 0x00
_08125D1C:
	.4byte 0x00001BC8
_08125D20:
	.4byte 0x00001BC7
_08125D24:
	.4byte 0x00001BC5
_08125D28:
	.4byte 0x00001BCC
_08125D2C:
	.4byte 0x00001BCA
_08125D30:
	sub r0, r3, #1
	add r0, r0, r4
	ldrb r1, [r0]
	ldr r4, _08125D84  @ =0x00001BC5
	add r0, r5, r4
	strb r1, [r0]
	strb r3, [r6]
_08125D3E:
	add r2, r5, #0
	ldr r1, _08125D88  @ =0x00001BC4
	add r0, r2, r1
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	bne _08125D7C
	ldr r3, _08125D8C  @ =0x00001BCE
	add r6, r2, r3
	ldrb r3, [r6]
	sub r0, r3, #2
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _08125D68
	ldr r4, _08125D90  @ =0x00001B90
	add r0, r2, r4
	ldrb r3, [r0]
_08125D68:
	ldr r0, _08125D90  @ =0x00001B90
	add r4, r2, r0
	add r0, r3, r4
	ldr r1, _08125D94  @ =0x00001BC6
	add r7, r2, r1
	ldrb r0, [r0]
	add r2, r0, #0
	ldrb r1, [r7]
	cmp r2, r1
	bcs _08125CCC
_08125D7C:
	mov r0, #1
_08125D7E:
	pop {r4-r7}
	pop {r1}
	bx r1
_08125D84:
	.4byte 0x00001BC5
_08125D88:
	.4byte 0x00001BC4
_08125D8C:
	.4byte 0x00001BCE
_08125D90:
	.4byte 0x00001B90
_08125D94:
	.4byte 0x00001BC6
	THUMB_FUNC_END sub_08125CC0

