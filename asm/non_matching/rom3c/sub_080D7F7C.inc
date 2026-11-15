	THUMB_FUNC_START sub_080D7F7C
sub_080D7F7C: @ 0x080D7F7C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080D8050  @ =gRam
	ldr r1, _080D8054  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	add r0, r6, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080D8086
	bl GetRandomInt
	ldr r5, _080D8058  @ =gUnknown_0817573C
	mov r4, #3
	add r1, r4, #0
	and r1, r1, r0
	add r1, r1, r5
	ldrb r1, [r1]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r7, r2
	strb r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	add r4, r4, r5
	ldrb r1, [r4]
	ldr r4, _080D805C  @ =0x00000961
	add r0, r7, r4
	strb r1, [r0]
	mov r1, #14
	add r3, r7, #0
	ldr r0, _080D8060  @ =0x000011D2
	add r5, r3, r0
	mov r4, #11
	ldr r2, _080D8064  @ =0x000015F8
	add r7, r3, r2
_080D7FCC:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r1, r2, r5
	ldrb r0, [r1]
	cmp r0, #0
	bne _080D807C
	strb r4, [r1]
	strb r4, [r7]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	ldr r4, _080D8068  @ =0x00000EE2
	add r0, r3, r4
	add r0, r6, r0
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrb r0, [r0]
	add r1, r1, r0
	add r4, r4, #32
	add r0, r3, r4
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _080D806C  @ =0x0000122C
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
	add r4, r4, #60
	add r0, r3, r4
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080D805C  @ =0x00000961
	add r1, r3, r0
	ldr r4, _080D8070  @ =0x00000ED2
	add r0, r3, r4
	add r0, r6, r0
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrb r0, [r0]
	add r1, r1, r0
	add r4, r4, #32
	add r0, r3, r4
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r4, _080D8074  @ =0x0000120E
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
	add r4, r4, #60
	add r0, r3, r4
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080D8078  @ =0x000012FE
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #15
	strb r1, [r0]
	b _080D8086
_080D8050:
	.4byte gRam
_080D8054:
	.4byte 0x00000996
_080D8058:
	.4byte gUnknown_0817573C
_080D805C:
	.4byte 0x00000961
_080D8060:
	.4byte 0x000011D2
_080D8064:
	.4byte 0x000015F8
_080D8068:
	.4byte 0x00000EE2
_080D806C:
	.4byte 0x0000122C
_080D8070:
	.4byte 0x00000ED2
_080D8074:
	.4byte 0x0000120E
_080D8078:
	.4byte 0x000012FE
_080D807C:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080D7FCC
_080D8086:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D7F7C

