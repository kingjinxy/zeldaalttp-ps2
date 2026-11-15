	THUMB_FUNC_START sub_080B65DC
sub_080B65DC: @ 0x080B65DC
	push {r4,r5,lr}
	cmp r0, #1
	bne _080B6654
	ldr r3, _080B6630  @ =gRam
	ldr r0, _080B6634  @ =0x0000050C
	add r2, r3, r0
	ldrh r1, [r2]
	mov r4, #128
	lsl r4, r4, #6
	add r0, r4, #0
	mov r4, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _080B6638  @ =0x00000982
	add r0, r3, r1
	strb r4, [r0]
	ldr r1, _080B663C  @ =0x04000040
	ldr r2, _080B6640  @ =0x00001ED2
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #4
	ldr r4, _080B6644  @ =0x0000148C
	add r0, r4, #0
	strh r0, [r1]
	add r1, r1, #4
	add r2, r2, #77
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _080B6648  @ =0x00003F3F
	add r0, r4, #0
	strh r0, [r1]
	ldr r0, _080B664C  @ =0x0000051E
	add r1, r3, r0
	mov r0, #255
	strh r0, [r1]
	ldr r1, _080B6650  @ =0x0000099A
	add r3, r3, r1
	mov r0, #5
	strb r0, [r3]
	b _080B667A
	.byte 0x00
	.byte 0x00
_080B6630:
	.4byte gRam
_080B6634:
	.4byte 0x0000050C
_080B6638:
	.4byte 0x00000982
_080B663C:
	.4byte 0x04000040
_080B6640:
	.4byte 0x00001ED2
_080B6644:
	.4byte 0x0000148C
_080B6648:
	.4byte 0x00003F3F
_080B664C:
	.4byte 0x0000051E
_080B6650:
	.4byte 0x0000099A
_080B6654:
	ldr r2, _080B6680  @ =gRam
	ldr r4, _080B6684  @ =0x0000050C
	add r3, r2, r4
	ldrh r1, [r3]
	mov r4, #128
	lsl r4, r4, #6
	add r0, r4, #0
	eor r1, r1, r0
	mov r5, #0
	mov r4, #0
	strh r1, [r3]
	ldr r1, _080B6688  @ =0x0000051E
	add r0, r2, r1
	strh r4, [r0]
	ldr r0, _080B668C  @ =0x0000099A
	add r2, r2, r0
	strb r5, [r2]
	ldr r0, _080B6690  @ =0x0400004A
	strh r4, [r0]
_080B667A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B6680:
	.4byte gRam
_080B6684:
	.4byte 0x0000050C
_080B6688:
	.4byte 0x0000051E
_080B668C:
	.4byte 0x0000099A
_080B6690:
	.4byte 0x0400004A
	THUMB_FUNC_END sub_080B65DC

