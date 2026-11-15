	THUMB_FUNC_START sub_08114AD0
sub_08114AD0: @ 0x08114AD0
	push {lr}
	ldr r0, _08114B00  @ =gRam
	ldr r2, _08114B04  @ =0x00001663
	add r1, r0, r2
	ldrb r1, [r1]
	add r2, r0, #0
	cmp r1, #13
	bne _08114B20
	ldr r1, _08114B08  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08114B20
	ldr r1, _08114B0C  @ =0x00001718
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #10
	bgt _08114B10
	cmp r0, #8
	blt _08114B10
	mov r0, #1
	b _08114B26
_08114B00:
	.4byte gRam
_08114B04:
	.4byte 0x00001663
_08114B08:
	.4byte 0x000009B2
_08114B0C:
	.4byte 0x00001718
_08114B10:
	ldr r0, _08114B2C  @ =0x00000B5C
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	ldr r0, _08114B30  @ =0x00000B5D
	add r1, r2, r0
	mov r0, #187
	strb r0, [r1]
_08114B20:
	bl sub_08114B34
	mov r0, #0
_08114B26:
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08114B2C:
	.4byte 0x00000B5C
_08114B30:
	.4byte 0x00000B5D
	THUMB_FUNC_END sub_08114AD0

