	THUMB_FUNC_START sub_080A1B2C
sub_080A1B2C: @ 0x080A1B2C
	push {r4,r5,lr}
	ldr r2, _080A1B60  @ =gRam
	ldr r1, _080A1B64  @ =0x0000172C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A1B94
	sub r1, r1, #201
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #13
	beq _080A1B94
	add r1, r1, #133
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A1B5C
	ldr r1, _080A1B68  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1B6C
_080A1B5C:
	mov r0, #0
	b _080A1B70
_080A1B60:
	.4byte gRam
_080A1B64:
	.4byte 0x0000172C
_080A1B68:
	.4byte 0x000016F8
_080A1B6C:
	bl sub_080A1ADC
_080A1B70:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A1B94
	ldr r4, _080A1B9C  @ =gRam
	ldr r0, _080A1BA0  @ =0x000016E8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	mov r5, #0
	strb r0, [r2]
	mov r0, #1
	mov r1, #7
	bl sub_080AD7D8
	ldr r1, _080A1BA4  @ =0x0000178A
	add r4, r4, r1
	strb r5, [r4]
_080A1B94:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A1B9C:
	.4byte gRam
_080A1BA0:
	.4byte 0x000016E8
_080A1BA4:
	.4byte 0x0000178A
	THUMB_FUNC_END sub_080A1B2C

