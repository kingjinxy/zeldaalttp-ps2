	THUMB_FUNC_START sub_08110EF8
sub_08110EF8: @ 0x08110EF8
	push {r4,lr}
	ldr r2, _08110F2C  @ =gRam
	ldr r1, _08110F30  @ =0x00001622
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _08110F34  @ =0x00001623
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #8
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _08110F38  @ =0x000016C4
	add r0, r2, r4
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r1, r0
	beq _08110F4A
	cmp r1, r0
	blt _08110F40
	ldr r4, _08110F3C  @ =0x00000DA8
	add r1, r2, r4
	ldrh r0, [r1]
	add r0, r0, #1
	b _08110F48
_08110F2C:
	.4byte gRam
_08110F30:
	.4byte 0x00001622
_08110F34:
	.4byte 0x00001623
_08110F38:
	.4byte 0x000016C4
_08110F3C:
	.4byte 0x00000DA8
_08110F40:
	ldr r0, _08110F7C  @ =0x00000DA8
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
_08110F48:
	strh r0, [r1]
_08110F4A:
	add r3, r2, #0
	ldr r1, _08110F80  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r4, _08110F84  @ =0x00001625
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r4, r4, #155
	add r0, r3, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r1, r0
	beq _08110F96
	cmp r1, r0
	blt _08110F8C
	ldr r0, _08110F88  @ =0x00000DAA
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	b _08110F94
_08110F7C:
	.4byte 0x00000DA8
_08110F80:
	.4byte 0x00001624
_08110F84:
	.4byte 0x00001625
_08110F88:
	.4byte 0x00000DAA
_08110F8C:
	ldr r3, _08110F9C  @ =0x00000DAA
	add r1, r2, r3
	ldrh r0, [r1]
	sub r0, r0, #1
_08110F94:
	strh r0, [r1]
_08110F96:
	pop {r4}
	pop {r0}
	bx r0
_08110F9C:
	.4byte 0x00000DAA
	THUMB_FUNC_END sub_08110EF8

