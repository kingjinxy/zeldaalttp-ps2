	THUMB_FUNC_START sub_080F5FD0
sub_080F5FD0: @ 0x080F5FD0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F600C  @ =gRam
	ldr r1, _080F6010  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080F6048
	ldr r2, _080F6014  @ =0x000009AC
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #26
	bne _080F6020
	ldr r2, _080F6018  @ =0x00000F22
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	sub r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080F601C  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #27
	strb r1, [r0]
	b _080F603A
	.byte 0x00
	.byte 0x00
_080F600C:
	.4byte gRam
_080F6010:
	.4byte 0x00000FC2
_080F6014:
	.4byte 0x000009AC
_080F6018:
	.4byte 0x00000F22
_080F601C:
	.4byte 0x00001152
_080F6020:
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	bl GetRandomInt
	ldr r1, _080F6050  @ =0x00001152
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #20
	strb r1, [r2]
_080F603A:
	ldr r1, _080F6054  @ =gRam
	ldr r2, _080F6058  @ =0x00000F52
	add r1, r1, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F6048:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6050:
	.4byte 0x00001152
_080F6054:
	.4byte gRam
_080F6058:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F5FD0

