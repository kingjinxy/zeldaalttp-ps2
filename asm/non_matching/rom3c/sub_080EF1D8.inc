	THUMB_FUNC_START sub_080EF1D8
sub_080EF1D8: @ 0x080EF1D8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EF234
	ldr r2, _080EF23C  @ =gRam
	ldr r0, _080EF240  @ =0x00000FC2
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _080EF244  @ =gUnknown_08178BE4
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EF248  @ =0x00001142
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
	mov r5, #63
	ldr r0, _080EF24C  @ =gUnknown_08178BE0
	add r0, r4, r0
	ldrb r3, [r0]
	add r7, r2, #0
	ldr r6, _080EF250  @ =gUnknown_0200EE18
	mov r2, #255
_080EF212:
	add r0, r3, r6
	strb r2, [r0]
	lsl r1, r5, #24
	mov r0, #255
	lsl r0, r0, #24
	add r1, r1, r0
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsr r5, r1, #24
	cmp r1, #0
	bge _080EF212
	ldr r1, _080EF254  @ =0x000011F0
	add r0, r7, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
_080EF234:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EF23C:
	.4byte gRam
_080EF240:
	.4byte 0x00000FC2
_080EF244:
	.4byte gUnknown_08178BE4
_080EF248:
	.4byte 0x00001142
_080EF24C:
	.4byte gUnknown_08178BE0
_080EF250:
	.4byte gUnknown_0200EE18
_080EF254:
	.4byte 0x000011F0
	THUMB_FUNC_END sub_080EF1D8

