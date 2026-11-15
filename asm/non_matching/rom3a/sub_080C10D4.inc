	THUMB_FUNC_START sub_080C10D4
sub_080C10D4: @ 0x080C10D4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r1, _080C1128  @ =gRam
	ldr r2, _080C112C  @ =gUnknown_08171D47
	ldr r3, _080C1130  @ =0x00000E47
	add r0, r1, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r2, [r0]
	ldr r3, _080C1134  @ =0x00000968
	add r0, r1, r3
	mov r6, #0
	strb r2, [r0]
	ldr r2, _080C1138  @ =0x00000DCF
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	sub r3, r3, #22
	add r0, r1, r3
	ldrb r0, [r0]
	sub r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r1, #0
	cmp r2, #243
	bls _080C1140
	ldr r1, _080C113C  @ =0x00000E15
	add r0, r3, r1
	add r0, r4, r0
	strb r6, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	mov r0, #200
	lsl r0, r0, #8
	strh r0, [r1]
	mov r0, #1
	b _080C1194
	.byte 0x00
	.byte 0x00
_080C1128:
	.4byte gRam
_080C112C:
	.4byte gUnknown_08171D47
_080C1130:
	.4byte 0x00000E47
_080C1134:
	.4byte 0x00000968
_080C1138:
	.4byte 0x00000DCF
_080C113C:
	.4byte 0x00000E15
_080C1140:
	mov r0, #150
	lsl r0, r0, #4
	add r4, r3, r0
	strb r2, [r4]
	ldr r1, _080C1180  @ =0x00000DC5
	add r0, r3, r1
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r1, _080C1184  @ =0x00000958
	add r0, r3, r1
	ldrb r0, [r0]
	sub r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #159
	bls _080C118C
	lsl r0, r2, #24
	asr r0, r0, #24
	mov r1, #10
	neg r1, r1
	cmp r0, r1
	bge _080C118C
	ldr r2, _080C1188  @ =0x00000E15
	add r0, r3, r2
	add r0, r5, r0
	strb r6, [r0]
	mov r0, #200
	lsl r0, r0, #8
	strh r0, [r4]
	mov r0, #1
	b _080C1194
	.byte 0x00
	.byte 0x00
_080C1180:
	.4byte 0x00000DC5
_080C1184:
	.4byte 0x00000958
_080C1188:
	.4byte 0x00000E15
_080C118C:
	ldr r1, _080C119C  @ =0x00000961
	add r0, r3, r1
	strb r2, [r0]
	mov r0, #0
_080C1194:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C119C:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080C10D4

