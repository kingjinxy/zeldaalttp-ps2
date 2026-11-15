	THUMB_FUNC_START sub_080988C0
sub_080988C0: @ 0x080988C0
	push {r4-r6,lr}
	ldr r4, _0809892C  @ =gRam
	ldr r1, _08098930  @ =0x0000188E
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08098934  @ =0x0000188C
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	ldr r6, _08098938  @ =gMoonPearl
	ldrb r0, [r6]
	cmp r0, #0
	beq _080988E8
	ldr r1, _0809893C  @ =0x00001711
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08098940  @ =0x00001702
	add r0, r4, r2
	strb r5, [r0]
_080988E8:
	ldr r1, _08098944  @ =0x000016D4
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08098948  @ =0x0000176D
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #49
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #29
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #218
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #102
	add r0, r4, r2
	strb r5, [r0]
	bl sub_08092B0C
	ldr r0, _0809894C  @ =0x00001718
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldrb r0, [r6]
	cmp r0, #0
	beq _08098924
	strb r5, [r1]
	bl sub_08133644
_08098924:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809892C:
	.4byte gRam
_08098930:
	.4byte 0x0000188E
_08098934:
	.4byte 0x0000188C
_08098938:
	.4byte gMoonPearl
_0809893C:
	.4byte 0x00001711
_08098940:
	.4byte 0x00001702
_08098944:
	.4byte 0x000016D4
_08098948:
	.4byte 0x0000176D
_0809894C:
	.4byte 0x00001718
	THUMB_FUNC_END sub_080988C0

