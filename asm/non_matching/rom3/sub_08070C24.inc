	THUMB_FUNC_START sub_08070C24
sub_08070C24: @ 0x08070C24
	push {r4,r5,lr}
	ldr r0, _08070C3C  @ =gRam
	ldr r1, _08070C40  @ =0x00001A56
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _08070C44
	mov r0, #0
	mov r5, #192
	lsl r5, r5, #1
	b _08070C4A
	.byte 0x00
	.byte 0x00
_08070C3C:
	.4byte gRam
_08070C40:
	.4byte 0x00001A56
_08070C44:
	mov r0, #192
	lsl r0, r0, #1
	mov r5, #0
_08070C4A:
	ldr r4, _08070C68  @ =gUnknown_0200A6C0
	add r0, r0, r4
	ldr r1, _08070C6C  @ =0x06003A00
	mov r2, #32
	bl CpuFastSet
	add r4, r5, r4
	ldr r1, _08070C70  @ =0x06003A80
	add r0, r4, #0
	mov r2, #32
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_08070C68:
	.4byte gUnknown_0200A6C0
_08070C6C:
	.4byte 0x06003A00
_08070C70:
	.4byte 0x06003A80
	THUMB_FUNC_END sub_08070C24

