	THUMB_FUNC_START sub_08077568
sub_08077568: @ 0x08077568
	push {r4,lr}
	ldr r0, _080775A4  @ =gRam
	ldr r1, _080775A8  @ =0x000009BA
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080775CC
	ldr r0, _080775AC  @ =gUnknown_02018800
	ldr r1, _080775B0  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080775B4  @ =gUnknown_02019800
	ldr r1, _080775B8  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080775BC  @ =gUnknown_02020800
	ldr r1, _080775C0  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080775C4  @ =gUnknown_02021800
	ldr r1, _080775C8  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
	b _080775F8
_080775A4:
	.4byte gRam
_080775A8:
	.4byte 0x000009BA
_080775AC:
	.4byte gUnknown_02018800
_080775B0:
	.4byte 0x0600C800
_080775B4:
	.4byte gUnknown_02019800
_080775B8:
	.4byte 0x0600D800
_080775BC:
	.4byte gUnknown_02020800
_080775C0:
	.4byte 0x0600A800
_080775C4:
	.4byte gUnknown_02021800
_080775C8:
	.4byte 0x0600B800
_080775CC:
	ldr r0, _08077600  @ =gUnknown_0201C800
	ldr r1, _08077604  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077608  @ =gUnknown_0201D800
	ldr r1, _0807760C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077610  @ =gUnknown_02024800
	ldr r1, _08077614  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08077618  @ =gUnknown_02025800
	ldr r1, _0807761C  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_080775F8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077600:
	.4byte gUnknown_0201C800
_08077604:
	.4byte 0x0600C800
_08077608:
	.4byte gUnknown_0201D800
_0807760C:
	.4byte 0x0600D800
_08077610:
	.4byte gUnknown_02024800
_08077614:
	.4byte 0x0600A800
_08077618:
	.4byte gUnknown_02025800
_0807761C:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08077568

