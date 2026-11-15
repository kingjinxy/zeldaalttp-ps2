	THUMB_FUNC_START sub_0809FFE8
sub_0809FFE8: @ 0x0809FFE8
	ldr r2, _080A0018  @ =gRam
	ldr r0, _080A001C  @ =0x0000097C
	add r3, r2, r0
	ldr r1, _080A0020  @ =0x00000974
	add r0, r2, r1
	ldrh r0, [r0]
	lsl r0, r0, #4
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r3]
	ldr r3, _080A0024  @ =0x0000096C
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r3, _080A0028  @ =0x00001721
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #0
	ldr r1, _080A002C  @ =0x00001722
	add r2, r2, r1
	strb r0, [r2]
	bx lr
_080A0018:
	.4byte gRam
_080A001C:
	.4byte 0x0000097C
_080A0020:
	.4byte 0x00000974
_080A0024:
	.4byte 0x0000096C
_080A0028:
	.4byte 0x00001721
_080A002C:
	.4byte 0x00001722
	THUMB_FUNC_END sub_0809FFE8

