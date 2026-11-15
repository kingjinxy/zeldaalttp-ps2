	THUMB_FUNC_START sub_08075DF0
sub_08075DF0: @ 0x08075DF0
	push {r4,lr}
	ldr r2, _08075E40  @ =gRam
	ldr r1, _08075E44  @ =0x00000B94
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r3, _08075E48  @ =0x000009BC
	add r0, r2, r3
	ldrh r0, [r0]
	sub r4, r1, r0
	mov r0, #128
	lsl r0, r0, #1
	cmp r4, r0
	beq _08075E0C
	b _08075F04
_08075E0C:
	ldr r1, _08075E4C  @ =0x000009BB
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08075E70
	ldr r0, _08075E50  @ =gUnknown_0201C000
	ldr r1, _08075E54  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075E58  @ =gUnknown_0201C800
	ldr r1, _08075E5C  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075E60  @ =gUnknown_02024000
	ldr r1, _08075E64  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075E68  @ =gUnknown_02024800
	ldr r1, _08075E6C  @ =0x0600A800
	b _08075F6E
	.byte 0x00
	.byte 0x00
_08075E40:
	.4byte gRam
_08075E44:
	.4byte 0x00000B94
_08075E48:
	.4byte 0x000009BC
_08075E4C:
	.4byte 0x000009BB
_08075E50:
	.4byte gUnknown_0201C000
_08075E54:
	.4byte 0x0600C000
_08075E58:
	.4byte gUnknown_0201C800
_08075E5C:
	.4byte 0x0600C800
_08075E60:
	.4byte gUnknown_02024000
_08075E64:
	.4byte 0x0600A000
_08075E68:
	.4byte gUnknown_02024800
_08075E6C:
	.4byte 0x0600A800
_08075E70:
	cmp r0, #1
	bne _08075EBC
	ldr r0, _08075E9C  @ =gUnknown_0201E000
	ldr r1, _08075EA0  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075EA4  @ =gUnknown_0201C800
	ldr r1, _08075EA8  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075EAC  @ =gUnknown_02026000
	ldr r1, _08075EB0  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075EB4  @ =gUnknown_02024800
	ldr r1, _08075EB8  @ =0x0600A800
	b _08075F6E
_08075E9C:
	.4byte gUnknown_0201E000
_08075EA0:
	.4byte 0x0600C000
_08075EA4:
	.4byte gUnknown_0201C800
_08075EA8:
	.4byte 0x0600C800
_08075EAC:
	.4byte gUnknown_02026000
_08075EB0:
	.4byte 0x0600A000
_08075EB4:
	.4byte gUnknown_02024800
_08075EB8:
	.4byte 0x0600A800
_08075EBC:
	ldr r0, _08075EE4  @ =gUnknown_0201E000
	ldr r1, _08075EE8  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075EEC  @ =gUnknown_0201E800
	ldr r1, _08075EF0  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075EF4  @ =gUnknown_02026000
	ldr r1, _08075EF8  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075EFC  @ =gUnknown_02026800
	ldr r1, _08075F00  @ =0x0600A800
	b _08075F6E
_08075EE4:
	.4byte gUnknown_0201E000
_08075EE8:
	.4byte 0x0600C000
_08075EEC:
	.4byte gUnknown_0201E800
_08075EF0:
	.4byte 0x0600C800
_08075EF4:
	.4byte gUnknown_02026000
_08075EF8:
	.4byte 0x0600A000
_08075EFC:
	.4byte gUnknown_02026800
_08075F00:
	.4byte 0x0600A800
_08075F04:
	mov r0, #128
	lsl r0, r0, #2
	cmp r4, r0
	bne _08075FC0
	ldr r3, _08075F30  @ =0x000009BB
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08075F48
	ldr r0, _08075F34  @ =gUnknown_0201D000
	ldr r1, _08075F38  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075F3C  @ =gUnknown_0201D800
	ldr r1, _08075F40  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075F44  @ =gUnknown_02025000
	b _08075F62
	.byte 0x00
	.byte 0x00
_08075F30:
	.4byte 0x000009BB
_08075F34:
	.4byte gUnknown_0201D000
_08075F38:
	.4byte 0x0600D000
_08075F3C:
	.4byte gUnknown_0201D800
_08075F40:
	.4byte 0x0600D800
_08075F44:
	.4byte gUnknown_02025000
_08075F48:
	cmp r0, #1
	bne _08075F98
	ldr r0, _08075F78  @ =gUnknown_0201F000
	ldr r1, _08075F7C  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075F80  @ =gUnknown_0201D800
	ldr r1, _08075F84  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075F88  @ =gUnknown_02027000
_08075F62:
	ldr r1, _08075F8C  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075F90  @ =gUnknown_02025800
	ldr r1, _08075F94  @ =0x0600B800
_08075F6E:
	add r2, r4, #0
	bl CpuFastSet
	b _08075FC0
	.byte 0x00
	.byte 0x00
_08075F78:
	.4byte gUnknown_0201F000
_08075F7C:
	.4byte 0x0600D000
_08075F80:
	.4byte gUnknown_0201D800
_08075F84:
	.4byte 0x0600D800
_08075F88:
	.4byte gUnknown_02027000
_08075F8C:
	.4byte 0x0600B000
_08075F90:
	.4byte gUnknown_02025800
_08075F94:
	.4byte 0x0600B800
_08075F98:
	ldr r0, _08075FC8  @ =gUnknown_0201F000
	ldr r1, _08075FCC  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075FD0  @ =gUnknown_0201F800
	ldr r1, _08075FD4  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075FD8  @ =gUnknown_02027000
	ldr r1, _08075FDC  @ =0x0600B000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08075FE0  @ =gUnknown_02027800
	ldr r1, _08075FE4  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_08075FC0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075FC8:
	.4byte gUnknown_0201F000
_08075FCC:
	.4byte 0x0600D000
_08075FD0:
	.4byte gUnknown_0201F800
_08075FD4:
	.4byte 0x0600D800
_08075FD8:
	.4byte gUnknown_02027000
_08075FDC:
	.4byte 0x0600B000
_08075FE0:
	.4byte gUnknown_02027800
_08075FE4:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08075DF0

