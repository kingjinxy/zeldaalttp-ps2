	THUMB_FUNC_START sub_08111AB8
sub_08111AB8: @ 0x08111AB8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _08111AEC  @ =0x000001A9
	ldr r5, _08111AF0  @ =gRam
	ldr r1, _08111AF4  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08111AD4
	bl sub_080DE0DC
	cmp r0, #0
	bne _08111B00
_08111AD4:
	ldr r1, _08111AF8  @ =0x00000103
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r1, _08111AFC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _08111B4A
	.byte 0x00
	.byte 0x00
_08111AEC:
	.4byte 0x000001A9
_08111AF0:
	.4byte gRam
_08111AF4:
	.4byte 0x00001AE2
_08111AF8:
	.4byte 0x00000103
_08111AFC:
	.4byte 0x00000F52
_08111B00:
	ldr r0, _08111B24  @ =gUnknown_020023EC
	ldrh r1, [r0]
	ldr r0, _08111B28  @ =0x0000FFFF
	cmp r1, r0
	beq _08111B30
	mov r0, #192
	lsl r0, r0, #18
	ldrb r1, [r0, #8]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #0
	beq _08111B30
	ldr r1, _08111B2C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	b _08111B3E
	.byte 0x00
	.byte 0x00
_08111B24:
	.4byte gUnknown_020023EC
_08111B28:
	.4byte 0x0000FFFF
_08111B2C:
	.4byte 0x00000F52
_08111B30:
	mov r6, #212
	lsl r6, r6, #1
	ldr r0, _08111B50  @ =gRam
	ldr r1, _08111B54  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
_08111B3E:
	strb r1, [r0]
	add r0, r4, #0
	add r1, r6, #0
	mov r2, #0
	bl sub_080C9564
_08111B4A:
	pop {r4-r6}
	pop {r0}
	bx r0
_08111B50:
	.4byte gRam
_08111B54:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08111AB8

