	THUMB_FUNC_START sub_08067F28
sub_08067F28: @ 0x08067F28
	add r2, r0, #0
	ldr r1, [r2, #4]
	ldr r0, _08067F3C  @ =0x54463453
	cmp r1, r0
	beq _08067F50
	cmp r1, r0
	bhi _08067F44
	ldr r0, _08067F40  @ =0x466C6544
	b _08067F46
	.byte 0x00
	.byte 0x00
_08067F3C:
	.4byte 0x54463453
_08067F40:
	.4byte 0x466C6544
_08067F44:
	ldr r0, _08067F4C  @ =0x54494E49
_08067F46:
	cmp r1, r0
	beq _08067F64
	b _08067F7C
_08067F4C:
	.4byte 0x54494E49
_08067F50:
	ldrh r0, [r2]
	ldrh r1, [r2, #2]
	add r0, r0, r1
	mov r1, #128
	lsl r1, r1, #9
	mov r3, #0
	cmp r0, r1
	bne _08067F7E
	mov r3, #2
	b _08067F7E
_08067F64:
	mov r3, #0
	ldrh r0, [r2]
	ldrh r1, [r2, #2]
	and r1, r1, r0
	ldr r0, _08067F78  @ =0x0000FFFF
	cmp r1, r0
	bne _08067F7E
	mov r3, #1
	b _08067F7E
	.byte 0x00
	.byte 0x00
_08067F78:
	.4byte 0x0000FFFF
_08067F7C:
	mov r3, #0
_08067F7E:
	add r0, r3, #0
	bx lr
	THUMB_FUNC_END sub_08067F28

	.byte 0x00
	.byte 0x00
