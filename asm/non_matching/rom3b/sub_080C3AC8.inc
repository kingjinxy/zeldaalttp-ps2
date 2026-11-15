	THUMB_FUNC_START sub_080C3AC8
sub_080C3AC8: @ 0x080C3AC8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r5, #0
	ldr r1, _080C3BA4  @ =gRam
	ldr r2, _080C3BA8  @ =0x00000FF2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #122
	beq _080C3B2A
	cmp r0, #13
	bne _080C3AEC
	ldr r0, _080C3BAC  @ =gSword
	ldrb r0, [r0]
	cmp r0, #3
	bls _080C3B2A
_080C3AEC:
	ldr r3, _080C3BA8  @ =0x00000FF2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #35
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080C3B0A
	ldr r1, _080C3BB0  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C3B2A
_080C3B0A:
	ldr r3, _080C3BA8  @ =0x00000FF2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #141
	bne _080C3B22
	ldr r1, _080C3BB4  @ =0x00000FE2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C3B2A
_080C3B22:
	mov r5, #1
	mov r0, #0
	cmp r0, #0
	beq _080C3B56
_080C3B2A:
	ldr r3, _080C3BB8  @ =0x00000FA2
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080C3B5A
	ldr r1, _080C3BBC  @ =0x000017AA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C3B56
	ldr r3, _080C3BC0  @ =0x00000FD2
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
	ldr r3, _080C3BC4  @ =0x000017F1
	add r0, r2, r3
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C3BD0
_080C3B56:
	cmp r5, #0
	beq _080C3B9C
_080C3B5A:
	mov r1, #80
	ldr r5, _080C3BA4  @ =gRam
	ldr r2, _080C3BC8  @ =0x000016EA
	add r0, r5, r2
	ldrb r0, [r0]
	sub r0, r0, #9
	lsl r0, r0, #24
	cmp r0, #0
	blt _080C3B6E
	mov r1, #64
_080C3B6E:
	add r0, r4, #0
	bl sub_080C2CB4
	ldr r3, _080C3BCC  @ =0x00001102
	add r1, r5, r3
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	add r3, r3, #16
	add r1, r5, r3
	add r1, r4, r1
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C4080
_080C3B9C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C3BA4:
	.4byte gRam
_080C3BA8:
	.4byte 0x00000FF2
_080C3BAC:
	.4byte gSword
_080C3BB0:
	.4byte 0x00000FC2
_080C3BB4:
	.4byte 0x00000FE2
_080C3BB8:
	.4byte 0x00000FA2
_080C3BBC:
	.4byte 0x000017AA
_080C3BC0:
	.4byte 0x00000FD2
_080C3BC4:
	.4byte 0x000017F1
_080C3BC8:
	.4byte 0x000016EA
_080C3BCC:
	.4byte 0x00001102
	THUMB_FUNC_END sub_080C3AC8

