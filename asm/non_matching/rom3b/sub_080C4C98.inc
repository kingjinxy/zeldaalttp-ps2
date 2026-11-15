	THUMB_FUNC_START sub_080C4C98
sub_080C4C98: @ 0x080C4C98
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080C4D38  @ =gRam
	ldr r1, _080C4D3C  @ =0x000010E2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C4D30
	ldr r3, _080C4D40  @ =0x00000F22
	add r1, r2, r3
	add r1, r5, r1
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r5, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _080C4D30
	mov r4, #15
	add r6, r2, #0
	ldr r0, _080C4D44  @ =0x000010F2
	add r7, r6, r0
_080C4CCA:
	ldr r1, _080C4D48  @ =0x000015DC
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r4, r0
	beq _080C4D2A
	ldr r3, _080C4D4C  @ =0x00000FF2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #210
	beq _080C4D2A
	ldr r1, _080C4D50  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080C4D2A
	lsl r0, r4, #24
	lsr r2, r0, #24
	ldr r3, _080C4D54  @ =0x00000996
	add r0, r6, r3
	ldrb r0, [r0]
	add r1, r2, #0
	eor r1, r1, r0
	mov r0, #3
	and r1, r1, r0
	ldr r3, _080C4D58  @ =0x00001172
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	sub r3, r3, #176
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080C4D2A
	add r0, r5, r7
	add r1, r4, r7
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080C4D2A
	add r0, r5, #0
	add r1, r2, #0
	bl sub_080C4D5C
_080C4D2A:
	sub r4, r4, #1
	cmp r4, #0
	bge _080C4CCA
_080C4D30:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C4D38:
	.4byte gRam
_080C4D3C:
	.4byte 0x000010E2
_080C4D40:
	.4byte 0x00000F22
_080C4D44:
	.4byte 0x000010F2
_080C4D48:
	.4byte 0x000015DC
_080C4D4C:
	.4byte 0x00000FF2
_080C4D50:
	.4byte 0x00000FA2
_080C4D54:
	.4byte 0x00000996
_080C4D58:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080C4C98

