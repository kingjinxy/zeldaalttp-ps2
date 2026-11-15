	THUMB_FUNC_START sub_08071474
sub_08071474: @ 0x08071474
	push {r4,r5,lr}
	ldr r0, _0807148C  @ =gRam
	ldr r1, _08071490  @ =0x00001A56
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _08071494
	mov r0, #0
	mov r5, #192
	lsl r5, r5, #1
	b _0807149A
	.byte 0x00
	.byte 0x00
_0807148C:
	.4byte gRam
_08071490:
	.4byte 0x00001A56
_08071494:
	mov r0, #192
	lsl r0, r0, #1
	mov r5, #0
_0807149A:
	ldr r4, _080714B8  @ =gUnknown_0200A6C0
	add r0, r0, r4
	ldr r1, _080714BC  @ =0x06003A00
	mov r2, #32
	bl CpuFastSet
	add r4, r5, r4
	ldr r1, _080714C0  @ =0x06003A80
	add r0, r4, #0
	mov r2, #32
	bl CpuFastSet
	pop {r4,r5}
	pop {r0}
	bx r0
_080714B8:
	.4byte gUnknown_0200A6C0
_080714BC:
	.4byte 0x06003A00
_080714C0:
	.4byte 0x06003A80
	THUMB_FUNC_END sub_08071474

