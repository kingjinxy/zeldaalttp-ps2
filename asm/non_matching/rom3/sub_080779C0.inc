	THUMB_FUNC_START sub_080779C0
sub_080779C0: @ 0x080779C0
	push {r4,lr}
	ldr r0, _080779FC  @ =gRam
	ldr r1, _08077A00  @ =0x000009BA
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077A24
	ldr r0, _08077A04  @ =gUnknown_02018000
	ldr r1, _08077A08  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077A0C  @ =gUnknown_02019000
	ldr r1, _08077A10  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077A14  @ =gUnknown_02020000
	ldr r1, _08077A18  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077A1C  @ =gUnknown_02021000
	ldr r1, _08077A20  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	b _08077A50
_080779FC:
	.4byte gRam
_08077A00:
	.4byte 0x000009BA
_08077A04:
	.4byte gUnknown_02018000
_08077A08:
	.4byte 0x0600C000
_08077A0C:
	.4byte gUnknown_02019000
_08077A10:
	.4byte 0x0600D000
_08077A14:
	.4byte gUnknown_02020000
_08077A18:
	.4byte 0x0600A000
_08077A1C:
	.4byte gUnknown_02021000
_08077A20:
	.4byte 0x0600B000
_08077A24:
	ldr r0, _08077A58  @ =gUnknown_0201C000
	ldr r1, _08077A5C  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077A60  @ =gUnknown_0201D000
	ldr r1, _08077A64  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077A68  @ =gUnknown_02024000
	ldr r1, _08077A6C  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077A70  @ =gUnknown_02025000
	ldr r1, _08077A74  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
_08077A50:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077A58:
	.4byte gUnknown_0201C000
_08077A5C:
	.4byte 0x0600C000
_08077A60:
	.4byte gUnknown_0201D000
_08077A64:
	.4byte 0x0600D000
_08077A68:
	.4byte gUnknown_02024000
_08077A6C:
	.4byte 0x0600A000
_08077A70:
	.4byte gUnknown_02025000
_08077A74:
	.4byte 0x0600B000
	THUMB_FUNC_END sub_080779C0

