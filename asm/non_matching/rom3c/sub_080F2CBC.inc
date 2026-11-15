	THUMB_FUNC_START sub_080F2CBC
sub_080F2CBC: @ 0x080F2CBC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080F2D4C  @ =gRam
	ldr r1, _080F2D50  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	mov r2, #1
	add r4, r2, #0
	and r4, r4, r0
	cmp r4, #0
	bne _080F2D2E
	ldr r3, _080F2D54  @ =0x00001092
	add r0, r6, r3
	add r3, r5, r0
	ldrb r1, [r3]
	add r0, r2, #0
	and r0, r0, r1
	ldr r7, _080F2D58  @ =0x0000164C
	add r1, r6, r7
	ldrb r1, [r1]
	add r0, r1, r0
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080F2D5C  @ =0x00000F22
	add r2, r6, r0
	add r2, r5, r2
	ldr r0, _080F2D60  @ =gUnknown_08179268
	add r0, r1, r0
	ldrb r0, [r0]
	ldrb r7, [r2]
	add r0, r0, r7
	strb r0, [r2]
	ldr r2, _080F2D64  @ =gUnknown_0817927A
	add r1, r1, r2
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080F2D2E
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r1, _080F2D68  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	bl GetRandomInt
	ldr r3, _080F2D6C  @ =0x00000FC2
	add r2, r6, r3
	add r2, r5, r2
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #16
	strb r1, [r2]
_080F2D2E:
	ldr r0, _080F2D4C  @ =gRam
	ldr r7, _080F2D70  @ =0x00000F12
	add r1, r0, r7
	add r1, r5, r1
	ldr r2, _080F2D74  @ =gUnknown_08179278
	ldr r3, _080F2D78  @ =0x00001082
	add r0, r0, r3
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
_080F2D4C:
	.4byte gRam
_080F2D50:
	.4byte 0x00000996
_080F2D54:
	.4byte 0x00001092
_080F2D58:
	.4byte 0x0000164C
_080F2D5C:
	.4byte 0x00000F22
_080F2D60:
	.4byte gUnknown_08179268
_080F2D64:
	.4byte gUnknown_0817927A
_080F2D68:
	.4byte 0x00000F52
_080F2D6C:
	.4byte 0x00000FC2
_080F2D70:
	.4byte 0x00000F12
_080F2D74:
	.4byte gUnknown_08179278
_080F2D78:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080F2CBC

