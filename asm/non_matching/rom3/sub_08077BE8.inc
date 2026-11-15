	THUMB_FUNC_START sub_08077BE8
sub_08077BE8: @ 0x08077BE8
	push {r4,lr}
	ldr r0, _08077C24  @ =gRam
	ldr r1, _08077C28  @ =0x000009BB
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077C4C
	ldr r0, _08077C2C  @ =gUnknown_0201D000
	ldr r1, _08077C30  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077C34  @ =gUnknown_0201D800
	ldr r1, _08077C38  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077C3C  @ =gUnknown_02025000
	ldr r1, _08077C40  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077C44  @ =gUnknown_02025800
	ldr r1, _08077C48  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	b _08077C78
_08077C24:
	.4byte gRam
_08077C28:
	.4byte 0x000009BB
_08077C2C:
	.4byte gUnknown_0201D000
_08077C30:
	.4byte 0x0600D000
_08077C34:
	.4byte gUnknown_0201D800
_08077C38:
	.4byte 0x0600D800
_08077C3C:
	.4byte gUnknown_02025000
_08077C40:
	.4byte 0x0600B000
_08077C44:
	.4byte gUnknown_02025800
_08077C48:
	.4byte 0x0600B800
_08077C4C:
	ldr r0, _08077C80  @ =gUnknown_0201F000
	ldr r1, _08077C84  @ =0x0600D000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077C88  @ =gUnknown_0201F800
	ldr r1, _08077C8C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077C90  @ =gUnknown_02027000
	ldr r1, _08077C94  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077C98  @ =gUnknown_02027800
	ldr r1, _08077C9C  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_08077C78:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077C80:
	.4byte gUnknown_0201F000
_08077C84:
	.4byte 0x0600D000
_08077C88:
	.4byte gUnknown_0201F800
_08077C8C:
	.4byte 0x0600D800
_08077C90:
	.4byte gUnknown_02027000
_08077C94:
	.4byte 0x0600B000
_08077C98:
	.4byte gUnknown_02027800
_08077C9C:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08077BE8

