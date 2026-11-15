	THUMB_FUNC_START sub_08127DBC
sub_08127DBC: @ 0x08127DBC
	push {lr}
	ldr r1, _08127DFC  @ =gRam
	ldr r2, _08127E00  @ =0x0000098E
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08127E0C
	ldr r2, _08127E04  @ =0x00001AD2
	add r0, r1, r2
	ldrh r0, [r0]
	ldr r2, _08127E08  @ =gTextPointer
	add r1, r0, r2
	ldrb r1, [r1]
	add r2, r2, #1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r0, #255
	lsl r0, r0, #8
	cmp r1, r0
	beq _08127DF4
	mov r0, #65
	mov r1, #0
	bl sub_0812A324
_08127DF4:
	bl sub_081280C0
	b _08127E28
	.byte 0x00
	.byte 0x00
_08127DFC:
	.4byte gRam
_08127E00:
	.4byte 0x0000098E
_08127E04:
	.4byte 0x00001AD2
_08127E08:
	.4byte gTextPointer
_08127E0C:
	ldr r2, _08127E3C  @ =0x00001AD2
	add r0, r1, r2
	ldrh r0, [r0]
	ldr r1, _08127E40  @ =gTextPointer
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #32
	beq _08127E24
	mov r0, #65
	mov r1, #0
	bl sub_0812A324
_08127E24:
	bl sub_08127E4C
_08127E28:
	ldr r0, _08127E44  @ =gRam
	ldr r2, _08127E48  @ =0x00001ACE
	add r1, r0, r2
	ldrb r1, [r1]
	sub r2, r2, #1
	add r0, r0, r2
	strb r1, [r0]
	mov r0, #0
	pop {r1}
	bx r1
_08127E3C:
	.4byte 0x00001AD2
_08127E40:
	.4byte gTextPointer
_08127E44:
	.4byte gRam
_08127E48:
	.4byte 0x00001ACE
	THUMB_FUNC_END sub_08127DBC

    .ALIGN 2, 0
