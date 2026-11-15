	THUMB_FUNC_START sub_08077A78
sub_08077A78: @ 0x08077A78
	push {r4,lr}
	ldr r0, _08077AB4  @ =gRam
	ldr r1, _08077AB8  @ =0x000009BA
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077ADC
	ldr r0, _08077ABC  @ =gUnknown_0201A800
	ldr r1, _08077AC0  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077AC4  @ =gUnknown_0201B800
	ldr r1, _08077AC8  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077ACC  @ =gUnknown_02022800
	ldr r1, _08077AD0  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077AD4  @ =gUnknown_02023800
	ldr r1, _08077AD8  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	b _08077B08
_08077AB4:
	.4byte gRam
_08077AB8:
	.4byte 0x000009BA
_08077ABC:
	.4byte gUnknown_0201A800
_08077AC0:
	.4byte 0x0600C800
_08077AC4:
	.4byte gUnknown_0201B800
_08077AC8:
	.4byte 0x0600D800
_08077ACC:
	.4byte gUnknown_02022800
_08077AD0:
	.4byte 0x0600A800
_08077AD4:
	.4byte gUnknown_02023800
_08077AD8:
	.4byte 0x0600B800
_08077ADC:
	ldr r0, _08077B10  @ =gUnknown_0201E800
	ldr r1, _08077B14  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077B18  @ =gUnknown_0201F800
	ldr r1, _08077B1C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077B20  @ =gUnknown_02026800
	ldr r1, _08077B24  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077B28  @ =gUnknown_02027800
	ldr r1, _08077B2C  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_08077B08:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077B10:
	.4byte gUnknown_0201E800
_08077B14:
	.4byte 0x0600C800
_08077B18:
	.4byte gUnknown_0201F800
_08077B1C:
	.4byte 0x0600D800
_08077B20:
	.4byte gUnknown_02026800
_08077B24:
	.4byte 0x0600A800
_08077B28:
	.4byte gUnknown_02027800
_08077B2C:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08077A78

