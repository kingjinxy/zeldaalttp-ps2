	THUMB_FUNC_START sub_080713D4
sub_080713D4: @ 0x080713D4
	push {r4,r5,lr}
	ldr r0, _080713EC  @ =gRam
	ldr r1, _080713F0  @ =0x00001A56
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080713F4
	mov r0, #128
	lsl r0, r0, #1
	mov r5, #128
	b _080713FA
	.byte 0x00
	.byte 0x00
_080713EC:
	.4byte gRam
_080713F0:
	.4byte 0x00001A56
_080713F4:
	mov r0, #128
	mov r5, #128
	lsl r5, r5, #1
_080713FA:
	ldr r4, _08071418  @ =gUnknown_0200A6C0
	add r0, r0, r4
	ldr r1, _0807141C  @ =0x06003A00
	mov r2, #32
	bl CpuFastSet
	add r4, r5, r4
	ldr r1, _08071420  @ =0x06003A80
	add r0, r4, #0
	mov r2, #32
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_08071418:
	.4byte gUnknown_0200A6C0
_0807141C:
	.4byte 0x06003A00
_08071420:
	.4byte 0x06003A80
	THUMB_FUNC_END sub_080713D4

