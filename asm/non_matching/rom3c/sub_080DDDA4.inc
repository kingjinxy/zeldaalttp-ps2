	THUMB_FUNC_START sub_080DDDA4
sub_080DDDA4: @ 0x080DDDA4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _080DDE30  @ =gRam
	mov r9, r0
	ldr r0, _080DDE34  @ =0x00000F62
	add r0, r0, r9
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080DDE22
	ldr r0, _080DDE38  @ =0x00001052
	add r0, r0, r9
	add r0, r7, r0
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _080DDE22
	ldr r0, _080DDE3C  @ =gUnknown_08176360
	mov r8, r0
	bl GetRandomInt
	mov r4, #7
	add r1, r4, #0
	and r1, r1, r0
	add r1, r1, r8
	ldrb r1, [r1]
	ldr r5, _080DDE40  @ =gUnknown_08176348
	add r0, r1, r5
	ldrb r2, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r9
	strb r2, [r0]
	ldr r6, _080DDE44  @ =gUnknown_08176354
	add r1, r1, r6
	ldrb r1, [r1]
	ldr r0, _080DDE48  @ =0x00000961
	add r0, r0, r9
	strb r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	add r4, r4, r8
	ldrb r1, [r4]
	add r5, r1, r5
	ldrb r2, [r5]
	ldr r0, _080DDE4C  @ =0x00000964
	add r0, r0, r9
	strb r2, [r0]
	add r1, r1, r6
	ldrb r1, [r1]
	ldr r0, _080DDE50  @ =0x00000965
	add r0, r0, r9
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C9A58
_080DDE22:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DDE30:
	.4byte gRam
_080DDE34:
	.4byte 0x00000F62
_080DDE38:
	.4byte 0x00001052
_080DDE3C:
	.4byte gUnknown_08176360
_080DDE40:
	.4byte gUnknown_08176348
_080DDE44:
	.4byte gUnknown_08176354
_080DDE48:
	.4byte 0x00000961
_080DDE4C:
	.4byte 0x00000964
_080DDE50:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080DDDA4

