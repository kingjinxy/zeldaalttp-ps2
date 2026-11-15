	THUMB_FUNC_START sub_0809DC94
sub_0809DC94: @ 0x0809DC94
	push {r4,lr}
	sub sp, sp, #16
	mov r2, #9
	ldr r4, _0809DD30  @ =gUnknown_03003045
	mov r3, #0
_0809DC9E:
	add r1, r2, r4
	ldrb r0, [r1]
	cmp r0, #13
	bne _0809DCA8
	strb r3, [r1]
_0809DCA8:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _0809DC9E
	ldr r2, _0809DD34  @ =gRam
	ldr r0, _0809DD38  @ =0x000016D4
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #4
	bls _0809DCC2
	mov r0, #0
	strb r0, [r1]
_0809DCC2:
	ldr r1, _0809DD3C  @ =0x000016D0
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _0809DD40  @ =0x000016D1
	add r0, r2, r3
	strb r1, [r0]
	add r3, r3, #194
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _0809DD44  @ =0x00001803
	add r1, r2, r0
	mov r0, #28
	strb r0, [r1]
	add r3, r3, #119
	add r1, r2, r3
	mov r0, #32
	strb r0, [r1]
	ldr r0, _0809DD48  @ =0x0000180D
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809DD4C  @ =0x00000B0A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0809DD5C
	ldr r3, _0809DD50  @ =0x000016C4
	add r0, r2, r3
	ldr r3, _0809DD54  @ =0x00000952
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r3, #182
	lsl r3, r3, #5
	add r1, r2, r3
	ldr r3, _0809DD58  @ =0x00000958
	add r2, r2, r3
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r0, #16
	orr r0, r0, r1
	str r0, [sp]
	mov r0, #51
	mov r1, sp
	bl sub_0812A324
	b _0809DD8C
	.byte 0x00
	.byte 0x00
_0809DD30:
	.4byte gUnknown_03003045
_0809DD34:
	.4byte gRam
_0809DD38:
	.4byte 0x000016D4
_0809DD3C:
	.4byte 0x000016D0
_0809DD40:
	.4byte 0x000016D1
_0809DD44:
	.4byte 0x00001803
_0809DD48:
	.4byte 0x0000180D
_0809DD4C:
	.4byte 0x00000B0A
_0809DD50:
	.4byte 0x000016C4
_0809DD54:
	.4byte 0x00000952
_0809DD58:
	.4byte 0x00000958
_0809DD5C:
	ldr r1, _0809DDDC  @ =0x000016C4
	add r0, r2, r1
	ldr r3, _0809DDE0  @ =0x00000952
	add r1, r2, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	mov r3, #182
	lsl r3, r3, #5
	add r1, r2, r3
	ldr r3, _0809DDE4  @ =0x00000958
	add r2, r2, r3
	ldrh r1, [r1]
	ldrh r2, [r2]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r0, #16
	orr r0, r0, r1
	str r0, [sp, #8]
	add r1, sp, #8
	mov r0, #49
	bl sub_0812A324
_0809DD8C:
	ldr r3, _0809DDE8  @ =gRam
	ldr r0, _0809DDEC  @ =0x00000961
	add r4, r3, r0
	mov r0, #0
	strb r0, [r4]
	mov r2, #16
	ldr r1, _0809DDF0  @ =0x00000B0A
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0809DDAC
	mov r2, #241
	mov r0, #255
	strb r0, [r4]
_0809DDAC:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _0809DDDC  @ =0x000016C4
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	add r2, r2, #72
	add r1, r3, r2
	strh r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r1, [r0]
	sub r2, r2, #4
	add r0, r3, r2
	strh r1, [r0]
	add sp, sp, #16
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809DDDC:
	.4byte 0x000016C4
_0809DDE0:
	.4byte 0x00000952
_0809DDE4:
	.4byte 0x00000958
_0809DDE8:
	.4byte gRam
_0809DDEC:
	.4byte 0x00000961
_0809DDF0:
	.4byte 0x00000B0A
	THUMB_FUNC_END sub_0809DC94

