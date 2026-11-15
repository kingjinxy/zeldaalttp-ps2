	THUMB_FUNC_START sub_080DE380
sub_080DE380: @ 0x080DE380
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080DE3C0  @ =gRam
	ldr r0, _080DE3C4  @ =0x0000096C
	add r1, r2, r0
	mov r0, #1
	strh r0, [r1]
	ldr r1, _080DE3C8  @ =0x00001052
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080DE3CC  @ =0x00000F92
	add r2, r2, r0
	add r2, r4, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r0, _080DE3D0  @ =gUnknown_081763C0
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE3C0:
	.4byte gRam
_080DE3C4:
	.4byte 0x0000096C
_080DE3C8:
	.4byte 0x00001052
_080DE3CC:
	.4byte 0x00000F92
_080DE3D0:
	.4byte gUnknown_081763C0
	THUMB_FUNC_END sub_080DE380

