	THUMB_FUNC_START sub_080F5D7C
sub_080F5D7C: @ 0x080F5D7C
	push {r4-r7,lr}
	add r2, r0, #0
	add r4, r1, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #37
	add r1, r2, #0
	bl sub_080CA538
	ldr r5, _080F5E1C  @ =gRam
	ldr r2, _080F5E20  @ =0x00001082
	add r1, r5, r2
	add r1, r0, r1
	strb r4, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	ldr r1, _080F5E24  @ =gUnknown_0817993B
	add r1, r4, r1
	ldrb r1, [r1]
	ldrh r2, [r2]
	add r2, r2, r1
	ldr r1, _080F5E28  @ =gUnknown_0817993D
	add r4, r4, r1
	ldrb r1, [r4]
	lsl r1, r1, #8
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r4, r2, #16
	ldr r7, _080F5E2C  @ =0x00000964
	add r1, r5, r7
	ldrh r3, [r1]
	sub r3, r3, #11
	lsl r3, r3, #16
	lsr r6, r3, #16
	ldr r7, _080F5E30  @ =0x00000EE2
	add r1, r5, r7
	add r1, r0, r1
	strb r4, [r1]
	add r7, r7, #128
	add r1, r5, r7
	add r1, r0, r1
	strb r4, [r1]
	ldr r4, _080F5E34  @ =0x00000F02
	add r1, r5, r4
	add r1, r0, r1
	lsr r2, r2, #24
	strb r2, [r1]
	add r7, r7, #16
	add r1, r5, r7
	add r1, r0, r1
	strb r2, [r1]
	ldr r2, _080F5E38  @ =0x00000ED2
	add r1, r5, r2
	add r1, r0, r1
	strb r6, [r1]
	add r4, r4, #128
	add r1, r5, r4
	add r1, r0, r1
	strb r6, [r1]
	sub r7, r7, #128
	add r1, r5, r7
	add r1, r0, r1
	lsr r3, r3, #24
	strb r3, [r1]
	ldr r2, _080F5E3C  @ =0x00001062
	add r1, r5, r2
	add r1, r0, r1
	strb r3, [r1]
	ldr r3, _080F5E40  @ =0x00001052
	add r5, r5, r3
	add r0, r0, r5
	mov r1, #1
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F5E1C:
	.4byte gRam
_080F5E20:
	.4byte 0x00001082
_080F5E24:
	.4byte gUnknown_0817993B
_080F5E28:
	.4byte gUnknown_0817993D
_080F5E2C:
	.4byte 0x00000964
_080F5E30:
	.4byte 0x00000EE2
_080F5E34:
	.4byte 0x00000F02
_080F5E38:
	.4byte 0x00000ED2
_080F5E3C:
	.4byte 0x00001062
_080F5E40:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F5D7C

