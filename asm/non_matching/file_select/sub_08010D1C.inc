	THUMB_FUNC_START sub_08010D1C
sub_08010D1C: @ 0x08010D1C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	mov r1, #224
	lsl r1, r1, #19
	and r1, r1, r0
	lsr r7, r1, #24
	bl sub_0800EEA8
	add r5, r0, #0
	cmp r5, #0
	beq _08010DA2
	mov r0, #48
	strb r0, [r5, #2]
	lsl r2, r7, #1
	add r0, r2, r7
	lsl r0, r0, #7
	ldr r1, _08010DB0  @ =gUnknown_02002490
	add r0, r0, r1
	str r0, [r5, #8]
	mov r9, r2
	lsl r1, r7, #6
	ldr r0, _08010DB4  @ =gUnknown_0200B250
	add r0, r0, #8
	add r4, r1, r0
	mov r0, #128
	lsl r0, r0, #1
	mov r8, r0
	mov r6, #5
_08010D5A:
	ldrb r1, [r4]
	ldr r0, _08010DB8  @ =gGameLanguage
	ldrb r0, [r0]
	cmp r0, #0
	beq _08010D6C
	cmp r1, #128
	bls _08010D6C
	mov r0, r8
	orr r1, r1, r0
_08010D6C:
	mov r0, r8
	orr r1, r1, r0
	lsl r0, r1, #16
	lsr r0, r0, #16
	bl sub_0800EE50
	add r1, r0, #0
	add r0, r5, #0
	bl sub_0800EF14
	add r4, r4, #1
	sub r6, r6, #1
	cmp r6, #0
	bge _08010D5A
	mov r1, r9
	add r0, r1, r7
	lsl r0, r0, #7
	ldr r1, _08010DBC  @ =0x06010000
	add r0, r0, r1
	ldr r1, [r5, #8]
	mov r2, #192
	lsl r2, r2, #1
	bl sub_080009F4
	add r0, r5, #0
	bl sub_0800EEE0
_08010DA2:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010DB0:
	.4byte gUnknown_02002490
_08010DB4:
	.4byte gUnknown_0200B250
_08010DB8:
	.4byte gGameLanguage
_08010DBC:
	.4byte 0x06010000
	THUMB_FUNC_END sub_08010D1C

