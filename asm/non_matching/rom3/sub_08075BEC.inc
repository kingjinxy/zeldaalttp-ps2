	THUMB_FUNC_START sub_08075BEC
sub_08075BEC: @ 0x08075BEC
	push {r4,lr}
	ldr r2, _08075C34  @ =gRam
	ldr r0, _08075C38  @ =0x00000B94
	add r3, r2, r0
	ldr r4, _08075C3C  @ =0x000009BC
	add r1, r2, r4
	ldrh r0, [r3]
	ldrh r4, [r1]
	cmp r0, r4
	beq _08075C02
	b _08075CF8
_08075C02:
	ldr r1, _08075C40  @ =0x000009BB
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08075C64
	ldr r0, _08075C44  @ =gUnknown_02018000
	ldr r1, _08075C48  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075C4C  @ =gUnknown_02018800
	ldr r1, _08075C50  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075C54  @ =gUnknown_02020000
	ldr r1, _08075C58  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075C5C  @ =gUnknown_02020800
	ldr r1, _08075C60  @ =0x0600A800
	b _08075D72
_08075C34:
	.4byte gRam
_08075C38:
	.4byte 0x00000B94
_08075C3C:
	.4byte 0x000009BC
_08075C40:
	.4byte 0x000009BB
_08075C44:
	.4byte gUnknown_02018000
_08075C48:
	.4byte 0x0600C000
_08075C4C:
	.4byte gUnknown_02018800
_08075C50:
	.4byte 0x0600C800
_08075C54:
	.4byte gUnknown_02020000
_08075C58:
	.4byte 0x0600A000
_08075C5C:
	.4byte gUnknown_02020800
_08075C60:
	.4byte 0x0600A800
_08075C64:
	cmp r0, #1
	bne _08075CB0
	ldr r0, _08075C90  @ =gUnknown_0201A000
	ldr r1, _08075C94  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075C98  @ =gUnknown_02018800
	ldr r1, _08075C9C  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075CA0  @ =gUnknown_02022000
	ldr r1, _08075CA4  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075CA8  @ =gUnknown_02020800
	ldr r1, _08075CAC  @ =0x0600A800
	b _08075D72
_08075C90:
	.4byte gUnknown_0201A000
_08075C94:
	.4byte 0x0600C000
_08075C98:
	.4byte gUnknown_02018800
_08075C9C:
	.4byte 0x0600C800
_08075CA0:
	.4byte gUnknown_02022000
_08075CA4:
	.4byte 0x0600A000
_08075CA8:
	.4byte gUnknown_02020800
_08075CAC:
	.4byte 0x0600A800
_08075CB0:
	ldr r0, _08075CD8  @ =gUnknown_0201A000
	ldr r1, _08075CDC  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075CE0  @ =gUnknown_0201A800
	ldr r1, _08075CE4  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075CE8  @ =gUnknown_02022000
	ldr r1, _08075CEC  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075CF0  @ =gUnknown_02022800
	ldr r1, _08075CF4  @ =0x0600A800
	b _08075D72
_08075CD8:
	.4byte gUnknown_0201A000
_08075CDC:
	.4byte 0x0600C000
_08075CE0:
	.4byte gUnknown_0201A800
_08075CE4:
	.4byte 0x0600C800
_08075CE8:
	.4byte gUnknown_02022000
_08075CEC:
	.4byte 0x0600A000
_08075CF0:
	.4byte gUnknown_02022800
_08075CF4:
	.4byte 0x0600A800
_08075CF8:
	ldrh r0, [r3]
	ldrh r1, [r1]
	ldr r3, _08075D2C  @ =0xFFFFFF00
	add r0, r0, r3
	cmp r1, r0
	bne _08075DC8
	ldr r4, _08075D30  @ =0x000009BB
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08075D48
	ldr r0, _08075D34  @ =gUnknown_02019000
	ldr r1, _08075D38  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075D3C  @ =gUnknown_02019800
	ldr r1, _08075D40  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075D44  @ =gUnknown_02021000
	b _08075D66
	.byte 0x00
	.byte 0x00
_08075D2C:
	.4byte 0xFFFFFF00
_08075D30:
	.4byte 0x000009BB
_08075D34:
	.4byte gUnknown_02019000
_08075D38:
	.4byte 0x0600D000
_08075D3C:
	.4byte gUnknown_02019800
_08075D40:
	.4byte 0x0600D800
_08075D44:
	.4byte gUnknown_02021000
_08075D48:
	cmp r0, #1
	bne _08075D9C
	ldr r0, _08075D7C  @ =gUnknown_0201B000
	ldr r1, _08075D80  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075D84  @ =gUnknown_02019800
	ldr r1, _08075D88  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075D8C  @ =gUnknown_02023000
_08075D66:
	ldr r1, _08075D90  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075D94  @ =gUnknown_02021800
	ldr r1, _08075D98  @ =0x0600B800
_08075D72:
	add r2, r4, #0
	bl CpuFastSet
	b _08075DC8
	.byte 0x00
	.byte 0x00
_08075D7C:
	.4byte gUnknown_0201B000
_08075D80:
	.4byte 0x0600D000
_08075D84:
	.4byte gUnknown_02019800
_08075D88:
	.4byte 0x0600D800
_08075D8C:
	.4byte gUnknown_02023000
_08075D90:
	.4byte 0x0600B000
_08075D94:
	.4byte gUnknown_02021800
_08075D98:
	.4byte 0x0600B800
_08075D9C:
	ldr r0, _08075DD0  @ =gUnknown_0201B000
	ldr r1, _08075DD4  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075DD8  @ =gUnknown_0201B800
	ldr r1, _08075DDC  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075DE0  @ =gUnknown_02023000
	ldr r1, _08075DE4  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075DE8  @ =gUnknown_02023800
	ldr r1, _08075DEC  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_08075DC8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075DD0:
	.4byte gUnknown_0201B000
_08075DD4:
	.4byte 0x0600D000
_08075DD8:
	.4byte gUnknown_0201B800
_08075DDC:
	.4byte 0x0600D800
_08075DE0:
	.4byte gUnknown_02023000
_08075DE4:
	.4byte 0x0600B000
_08075DE8:
	.4byte gUnknown_02023800
_08075DEC:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08075BEC

