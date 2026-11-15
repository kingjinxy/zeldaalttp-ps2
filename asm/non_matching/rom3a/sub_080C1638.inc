	THUMB_FUNC_START sub_080C1638
sub_080C1638: @ 0x080C1638
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r4, #15
	ldr r5, _080C16DC  @ =gRam
	ldr r1, _080C16E0  @ =0x00000E47
	add r0, r5, r1
	add r7, r6, r0
	ldr r2, _080C16E4  @ =0x00000FF2
	add r2, r2, r5
	mov r8, r2
_080C1652:
	ldr r1, _080C16E8  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	add r1, r4, #0
	eor r1, r1, r0
	mov r0, #3
	and r1, r1, r0
	ldr r2, _080C16EC  @ =0x000010D2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	sub r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080C1704
	ldr r1, _080C16F0  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080C1704
	ldr r2, _080C16F4  @ =0x00000E75
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080C16A0
	ldr r1, _080C16F8  @ =0x00000A74
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C1704
_080C16A0:
	ldr r2, _080C16FC  @ =0x000010F2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r7]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080C1704
	ldr r1, _080C1700  @ =0x00000E15
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #44
	bne _080C16C8
	mov r2, r8
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #30
	beq _080C1704
	cmp r0, #144
	beq _080C1704
_080C16C8:
	add r0, r6, #0
	add r1, r4, #0
	bl sub_080C14FC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C1704
	mov r0, #1
	b _080C1710
	.byte 0x00
	.byte 0x00
_080C16DC:
	.4byte gRam
_080C16E0:
	.4byte 0x00000E47
_080C16E4:
	.4byte 0x00000FF2
_080C16E8:
	.4byte 0x00000996
_080C16EC:
	.4byte 0x000010D2
_080C16F0:
	.4byte 0x00000FA2
_080C16F4:
	.4byte 0x00000E75
_080C16F8:
	.4byte 0x00000A74
_080C16FC:
	.4byte 0x000010F2
_080C1700:
	.4byte 0x00000E15
_080C1704:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _080C1652
	mov r0, #0
_080C1710:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C1638

	.byte 0x00
	.byte 0x00
