	THUMB_FUNC_START sub_08071560
sub_08071560: @ 0x08071560
	push {lr}
	ldr r0, _08071580  @ =gUnknown_0201A000
	ldr r1, _08071584  @ =0x0600E000
	mov r2, #128
	lsl r2, r2, #4
	bl CpuFastSet
	ldr r1, _08071588  @ =gRam
	ldr r0, _0807158C  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08071580:
	.4byte gUnknown_0201A000
_08071584:
	.4byte 0x0600E000
_08071588:
	.4byte gRam
_0807158C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071560

