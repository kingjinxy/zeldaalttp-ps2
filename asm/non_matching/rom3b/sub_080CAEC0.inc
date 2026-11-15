	THUMB_FUNC_START sub_080CAEC0
sub_080CAEC0: @ 0x080CAEC0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r5, #1
	mov r1, #15
	ldr r3, _080CAF24  @ =gRam
	ldr r0, _080CAF28  @ =0x00000FA2
	add r0, r0, r3
	mov r8, r0
	ldr r2, _080CAF2C  @ =0x00001132
	add r2, r2, r3
	mov r12, r2
	ldr r4, _080CAF30  @ =0x00000F02
	add r7, r3, r4
	ldr r0, _080CAF34  @ =0x00000952
	add r6, r3, r0
_080CAEE0:
	lsl r0, r1, #24
	asr r2, r0, #24
	mov r4, r8
	add r1, r2, r4
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #0
	beq _080CAF40
	mov r1, r12
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080CAF40
	add r0, r2, r7
	ldrh r1, [r6]
	ldrb r0, [r0]
	lsr r1, r1, #8
	cmp r0, r1
	bne _080CAF40
	ldr r0, _080CAF38  @ =0x00000EF2
	add r1, r3, r0
	add r1, r2, r1
	ldr r2, _080CAF3C  @ =0x00000958
	add r0, r3, r2
	ldrh r0, [r0]
	ldrb r1, [r1]
	lsr r0, r0, #8
	cmp r1, r0
	bne _080CAF40
	mov r5, #0
	b _080CAF58
	.byte 0x00
	.byte 0x00
_080CAF24:
	.4byte gRam
_080CAF28:
	.4byte 0x00000FA2
_080CAF2C:
	.4byte 0x00001132
_080CAF30:
	.4byte 0x00000F02
_080CAF34:
	.4byte 0x00000952
_080CAF38:
	.4byte 0x00000EF2
_080CAF3C:
	.4byte 0x00000958
_080CAF40:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r4, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080CAEE0
	cmp r5, #0
	beq _080CAF58
	bl sub_080CBDC8
	lsl r0, r0, #24
	lsr r5, r0, #24
_080CAF58:
	add r0, r5, #0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080CAEC0

