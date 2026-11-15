	THUMB_FUNC_START sub_08071424
sub_08071424: @ 0x08071424
	push {r4,r5,lr}
	ldr r0, _0807143C  @ =gRam
	ldr r1, _08071440  @ =0x00001A56
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _08071444
	mov r0, #128
	mov r5, #128
	lsl r5, r5, #1
	b _0807144A
	.byte 0x00
	.byte 0x00
_0807143C:
	.4byte gRam
_08071440:
	.4byte 0x00001A56
_08071444:
	mov r0, #128
	lsl r0, r0, #1
	mov r5, #128
_0807144A:
	ldr r4, _08071468  @ =gUnknown_0200A6C0
	add r0, r0, r4
	ldr r1, _0807146C  @ =0x06003A00
	mov r2, #32
	bl CpuFastSet
	add r4, r5, r4
	ldr r1, _08071470  @ =0x06003A80
	add r0, r4, #0
	mov r2, #32
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_08071468:
	.4byte gUnknown_0200A6C0
_0807146C:
	.4byte 0x06003A00
_08071470:
	.4byte 0x06003A80
	THUMB_FUNC_END sub_08071424

