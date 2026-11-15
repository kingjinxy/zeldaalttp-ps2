	THUMB_FUNC_START sub_08077B30
sub_08077B30: @ 0x08077B30
	push {r4,lr}
	ldr r0, _08077B6C  @ =gRam
	ldr r1, _08077B70  @ =0x000009BB
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08077B94
	ldr r0, _08077B74  @ =gUnknown_02018000
	ldr r1, _08077B78  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077B7C  @ =gUnknown_02018800
	ldr r1, _08077B80  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077B84  @ =gUnknown_02020000
	ldr r1, _08077B88  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077B8C  @ =gUnknown_02020800
	ldr r1, _08077B90  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	b _08077BC0
_08077B6C:
	.4byte gRam
_08077B70:
	.4byte 0x000009BB
_08077B74:
	.4byte gUnknown_02018000
_08077B78:
	.4byte 0x0600C000
_08077B7C:
	.4byte gUnknown_02018800
_08077B80:
	.4byte 0x0600C800
_08077B84:
	.4byte gUnknown_02020000
_08077B88:
	.4byte 0x0600A000
_08077B8C:
	.4byte gUnknown_02020800
_08077B90:
	.4byte 0x0600A800
_08077B94:
	ldr r0, _08077BC8  @ =gUnknown_0201A000
	ldr r1, _08077BCC  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077BD0  @ =gUnknown_0201A800
	ldr r1, _08077BD4  @ =0x0600C800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077BD8  @ =gUnknown_02022000
	ldr r1, _08077BDC  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077BE0  @ =gUnknown_02022800
	ldr r1, _08077BE4  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
_08077BC0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077BC8:
	.4byte gUnknown_0201A000
_08077BCC:
	.4byte 0x0600C000
_08077BD0:
	.4byte gUnknown_0201A800
_08077BD4:
	.4byte 0x0600C800
_08077BD8:
	.4byte gUnknown_02022000
_08077BDC:
	.4byte 0x0600A000
_08077BE0:
	.4byte gUnknown_02022800
_08077BE4:
	.4byte 0x0600A800
	THUMB_FUNC_END sub_08077B30

