	THUMB_FUNC_START sub_080CE8D4
sub_080CE8D4: @ 0x080CE8D4
	push {r4-r7,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r6, _080CE968  @ =gRam
	ldr r2, _080CE96C  @ =0x00000FF2
	add r0, r6, r2
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r3, _080CE970  @ =0x000015F9
	add r4, r6, r3
	strb r0, [r4]
	mov r0, #234
	mov r2, #14
	bl sub_080C9AAC
	add r5, r0, #0
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080CE974  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080CE978  @ =0x000010F2
	add r0, r6, r2
	add r0, r5, r0
	mov r3, #161
	lsl r3, r3, #4
	add r1, r6, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CE97C  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	ldr r2, _080CE980  @ =0x00000964
	add r7, r6, r2
	ldrh r1, [r7]
	add r1, r1, #3
	ldr r3, _080CE984  @ =0x00000ED2
	add r0, r6, r3
	add r2, r5, r0
	strb r1, [r2]
	add r3, r3, #32
	add r0, r6, r3
	add r3, r5, r0
	lsr r1, r1, #8
	strb r1, [r3]
	ldrb r0, [r4]
	cmp r0, #206
	beq _080CE998
	cmp r0, #203
	bne _080CE9A2
	ldr r1, _080CE988  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #120
	strb r1, [r0]
	strb r1, [r2]
	ldr r2, _080CE98C  @ =0x00000F02
	add r0, r6, r2
	add r0, r5, r0
	ldr r2, _080CE990  @ =0x000016C5
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CE994  @ =0x000016C1
	add r0, r6, r1
	ldrb r0, [r0]
	b _080CE9A0
_080CE968:
	.4byte gRam
_080CE96C:
	.4byte 0x00000FF2
_080CE970:
	.4byte 0x000015F9
_080CE974:
	.4byte 0x00001152
_080CE978:
	.4byte 0x000010F2
_080CE97C:
	.4byte 0x00000F62
_080CE980:
	.4byte 0x00000964
_080CE984:
	.4byte 0x00000ED2
_080CE988:
	.4byte 0x00000EE2
_080CE98C:
	.4byte 0x00000F02
_080CE990:
	.4byte 0x000016C5
_080CE994:
	.4byte 0x000016C1
_080CE998:
	ldrh r0, [r7]
	add r0, r0, #16
	strb r0, [r2]
	lsr r0, r0, #8
_080CE9A0:
	strb r0, [r3]
_080CE9A2:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CE8D4

