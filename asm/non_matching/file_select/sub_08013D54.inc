	THUMB_FUNC_START sub_08013D54
sub_08013D54: @ 0x08013D54
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _08013D68  @ =gUnknown_0200B314
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r1, #8
	bne _08013D6C
	mov r0, #0
	b _08013DD8
_08013D68:
	.4byte gUnknown_0200B314
_08013D6C:
	mov r2, #0
	cmp r2, r1
	bcs _08013D8C
	ldr r3, _08013DC4  @ =gUnknown_02000430
	ldrb r0, [r3]
	cmp r0, r5
	beq _08013D8C
_08013D7A:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r1
	bcs _08013D8C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, r5
	bne _08013D7A
_08013D8C:
	ldrb r0, [r6]
	cmp r2, r0
	bne _08013DCC
	ldrb r4, [r6]
	lsl r4, r4, #7
	ldr r1, _08013DC8  @ =0x06015800
	add r4, r4, r1
	add r0, r5, #0
	bl sub_0802C3C4
	add r1, r0, #0
	add r0, r4, #0
	mov r2, #128
	bl 0x080009F4
	ldr r1, _08013DC4  @ =gUnknown_02000430
	ldrb r0, [r6]
	add r0, r0, r1
	strb r5, [r0]
	ldrb r1, [r6]
	lsl r0, r1, #26
	mov r2, #192
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r2, r0, #24
	add r1, r1, #1
	strb r1, [r6]
	b _08013DD6
_08013DC4:
	.4byte gUnknown_02000430
_08013DC8:
	.4byte 0x06015800
_08013DCC:
	lsl r0, r2, #26
	mov r1, #192
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r2, r0, #24
_08013DD6:
	add r0, r2, #0
_08013DD8:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08013D54

	.byte 0x00
	.byte 0x00
