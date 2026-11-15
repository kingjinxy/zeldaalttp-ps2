	THUMB_FUNC_START sub_080A311C
sub_080A311C: @ 0x080A311C
	push {r4,lr}
	ldr r2, _080A3154  @ =gRam
	ldr r1, _080A3158  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A31CA
	ldr r1, _080A315C  @ =0x0000172C
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A31CA
	sub r1, r1, #50
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080A31CA
	ldr r1, _080A3160  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3164
	mov r0, #0
	b _080A3168
_080A3154:
	.4byte gRam
_080A3158:
	.4byte 0x000016E8
_080A315C:
	.4byte 0x0000172C
_080A3160:
	.4byte 0x000016F8
_080A3164:
	bl sub_080A1ADC
_080A3168:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A31CA
	bl sub_08092B0C
	ldr r1, _080A31D0  @ =gRam
	ldr r2, _080A31D4  @ =0x00001789
	add r0, r1, r2
	mov r4, #0
	strb r4, [r0]
	ldr r0, _080A31D8  @ =0x00001705
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #1
	orr r0, r0, r2
	strb r0, [r3]
	ldr r0, _080A31DC  @ =0x000016EB
	add r2, r1, r0
	mov r0, #7
	strb r0, [r2]
	ldr r2, _080A31E0  @ =0x000016D4
	add r0, r1, r2
	strb r4, [r0]
	ldr r0, _080A31E4  @ =0x00001727
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #240
	and r0, r0, r2
	strb r0, [r3]
	ldr r0, _080A31E8  @ =0x0000180C
	add r2, r1, r0
	mov r0, #4
	strb r0, [r2]
	ldr r0, _080A31EC  @ =0x00001718
	add r2, r1, r0
	mov r0, #19
	strb r0, [r2]
	ldr r2, _080A31F0  @ =0x0000180D
	add r1, r1, r2
	mov r0, #1
	strb r0, [r1]
	mov r0, #2
	mov r1, #1
	bl sub_080BEA28
	mov r0, #3
	mov r1, #31
	bl sub_080ADBE4
_080A31CA:
	pop {r4}
	pop {r0}
	bx r0
_080A31D0:
	.4byte gRam
_080A31D4:
	.4byte 0x00001789
_080A31D8:
	.4byte 0x00001705
_080A31DC:
	.4byte 0x000016EB
_080A31E0:
	.4byte 0x000016D4
_080A31E4:
	.4byte 0x00001727
_080A31E8:
	.4byte 0x0000180C
_080A31EC:
	.4byte 0x00001718
_080A31F0:
	.4byte 0x0000180D
	THUMB_FUNC_END sub_080A311C

