	THUMB_FUNC_START sub_080F1588
sub_080F1588: @ 0x080F1588
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	ldr r5, _080F163C  @ =gRam
	ldr r1, _080F1640  @ =0x00000FC2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F162A
	ldr r2, _080F1644  @ =0x00001628
	add r0, r5, r2
	ldrb r3, [r0]
	ldr r7, _080F1648  @ =0x00000ED2
	add r2, r5, r7
	add r2, r6, r2
	ldr r1, _080F164C  @ =0x00000D33
	add r0, r5, r1
	add r0, r3, r0
	ldrb r1, [r0]
	strb r1, [r2]
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r4, r5, r2
	strb r0, [r4]
	add r7, r7, #32
	add r2, r5, r7
	add r2, r6, r2
	ldr r1, _080F1650  @ =0x00000D3B
	add r0, r5, r1
	add r0, r3, r0
	ldrb r1, [r0]
	strb r1, [r2]
	ldrb r1, [r0]
	ldr r2, _080F1654  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	sub r7, r7, #16
	add r2, r5, r7
	add r2, r6, r2
	ldr r1, _080F1658  @ =0x00000D23
	add r0, r5, r1
	add r0, r3, r0
	ldrb r1, [r0]
	strb r1, [r2]
	ldrb r0, [r0]
	ldr r7, _080F165C  @ =0x00000964
	add r2, r5, r7
	strb r0, [r2]
	ldr r0, _080F1660  @ =0x00000F02
	add r1, r5, r0
	add r1, r6, r1
	ldr r7, _080F1664  @ =0x00000D2B
	add r0, r5, r7
	add r3, r3, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldrb r1, [r3]
	ldr r3, _080F1668  @ =0x00000965
	add r0, r5, r3
	strb r1, [r0]
	ldrh r0, [r2]
	ldrh r1, [r4]
	bl sub_080C8EEC
	add r1, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #1
	bl sub_0808D328
	ldr r7, _080F166C  @ =0x00000F52
	add r1, r5, r7
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F162A:
	mov r0, r8
	bl Sprite3_Move
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F163C:
	.4byte gRam
_080F1640:
	.4byte 0x00000FC2
_080F1644:
	.4byte 0x00001628
_080F1648:
	.4byte 0x00000ED2
_080F164C:
	.4byte 0x00000D33
_080F1650:
	.4byte 0x00000D3B
_080F1654:
	.4byte 0x00000961
_080F1658:
	.4byte 0x00000D23
_080F165C:
	.4byte 0x00000964
_080F1660:
	.4byte 0x00000F02
_080F1664:
	.4byte 0x00000D2B
_080F1668:
	.4byte 0x00000965
_080F166C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F1588

